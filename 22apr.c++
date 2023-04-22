public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<long long  >v(n);
        for(int i=0; i<n; i++)v[i]=arr[i];
    
        vector<long long >ans(n);
        sort(v.begin(),v.end());
        vector<long long>search=v;
        for(int i=1;i<n; i++)
        {v[i]+=v[i-1];
        }
        for(int i=0; i<n;i++)
        {
            int x=lower_bound(search.begin(),search.end(),arr[i])-search.begin();
            if(x==0)ans[i]=0;
            else 
            {ans[i]=v[x-1];
            }
            
            
        }
        return ans;
    }