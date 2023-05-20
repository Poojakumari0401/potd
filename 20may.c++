class solution{
public:
  bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        if(N%groupSize>0) return 0;
        
        map<int,int> mp;
        for(auto it: hand){
            mp[it]++;
        }
        
        while(!mp.empty()){
            int a= mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[a+i]==0) return 0;
                else if(--mp[a+i]==0) mp.erase(a+i);
            }
        }
        return 1;
    }
}