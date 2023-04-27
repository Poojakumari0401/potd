class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q!=NULL)
            return 0;
        if(p!=NULL && q==NULL)
            return 0;
        if(p==NULL && q==NULL)
            return 1;
        if(p->val != q->val)
            return false;
        bool t1=isSameTree(p->left,q->left);
        bool t2=isSameTree(p->right,q->right);
        if(t1==false || t2==false)
            return false;
        return true;
    }
};