class Solution{
    private:
    bool check(vector<int>&a , int k , int mid){
        int sum = 0;
        int cnt = 0;
        for(int i : a){
            sum+=i;
            if(sum>=mid){
                cnt++;
                sum= 0;
            }
        }
        return cnt>k;
    }
        
    public:
    int maxSweetness(vector<int>& s, int N, int K) {
        int l =1 , r = accumulate(begin(s) , end(s) , 0ll);
        while(l<r){
            int mid = (l+r+1)/2;
            if(check(s , K, mid)){
                l=mid;
            }
            else{
                r=mid-1;
            }
        }
        return l;
    }
}