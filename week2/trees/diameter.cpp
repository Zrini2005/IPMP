class Solution {
public:
    
    int height(TreeNode* a,int& Diameter)
    {   
        if(!a) return 0;

        int l=height(a->left,Diameter);
        int r=height(a->right,Diameter);

        Diameter = max(Diameter, l+r);

        return max(l,r)+1;
    }

    int diameterOfBinaryTree(TreeNode* a) {
        int Diameter=0;
        height(a,Diameter);

        return Diameter;
    }
};