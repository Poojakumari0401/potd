class solution{
public:

    bool checkBipartiteDFS(vector<int>adj[],int curr,vector<int>&color,int currColor){
    color[curr]=currColor;
    for(int &v:adj[curr]){
        if(color[v]==color[curr])
          return false;
         if(color[v]==-1){
             int currofV=1-currColor;
             if(!checkBipartiteDFS(adj,v,color,currofV))
               return false;
         }
    }
    return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1);
	    for(int i=0;i<V;i++){
	        if(color[i]==-1){
	            if(!checkBipartiteDFS(adj,i,color,1))
	              return false;
	        }
	    }
	 return true;   
	}
}