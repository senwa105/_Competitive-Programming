class TreeNode {
     int val;
     TreeNode left;
     TreeNode right;
     TreeNode() {}
     TreeNode(int val) { this.val = val; }
     TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
         this.left = left;
         this.right = right;
    }
}

public class E0110_BalancedBinaryTree {
    public boolean isBalanced(TreeNode root) {
        return height(root) != -1;
    }
    
    // get height of subtree
    // return -1 if unbalanced
    private int height(TreeNode root) {
        if (root == null) return 0;
        
        int lHeight = height(root.left);
        int rHeight = height(root.right);
        if (lHeight == -1 || rHeight == -1 || Math.abs(lHeight - rHeight) > 1) 
            return -1;
        
        return 1 + Math.max(lHeight, rHeight);
    }
}