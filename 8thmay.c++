class Solution{
    public:
       string stringMirror(string str){
       string pre="";
        int n=str.length();
        if(n==1)
            return str+str;
        pre+=str[0];
        for(int i=1;i<n;i++)
        {
            if(str[i]<str[i-1])
            {
                pre+=str[i];
            }
            else if(pre.length()>1&&str[i-1]==str[i])
            {
                pre+=str[i];
            
            }
            else break;
        }
        string rev=pre;
        reverse(rev.begin(),rev.end());
        string ans=pre+rev;
        return ans;
    }
}