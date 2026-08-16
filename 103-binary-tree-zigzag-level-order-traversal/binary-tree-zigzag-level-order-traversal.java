/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        Queue<TreeNode> que = new LinkedList<>();
        if(root == null) return ans;
        que.offer(root);
        boolean leftToRight = true;
        while(!que.isEmpty()){
            int size = que.size();
            LinkedList<Integer> level = new LinkedList<>();
            for(int i=0; i<size; i++){
                TreeNode current = que.poll();
                if(leftToRight){
                    level.addLast(current.val);
                }else{
                    level.addFirst(current.val);
                }
                if(current.left != null){
                    que.offer(current.left);
                }
                if(current.right != null){
                    que.offer(current.right);
                }
            }
            ans.add(level);
            leftToRight = !leftToRight;
        }
        return ans;  
    }
}