class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int cnt=0,nonzero=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0){   
               nonzero++;
               if((i+1==n&&cnt!=0)||i+1!=n&&arr[i+1]==0) cnt++;
            }
        }
        if(nonzero==0) return 0;
        if(cnt==0) return -1;
        return cnt;
    }
};