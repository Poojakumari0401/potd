string convert(string s, int numRows) {
        int n=s.size();
        vector<string>ans(numRows,"");

        int i=0;
        while(i<n) //Iterate in a string
        {
            for(int j=0;j<numRows&&i<n;j++) //Move from top to bottom in a column and store ans 

            {
                ans[j].push_back(s[i]); 
                i++;
            }
            int k=numRows-2;
             for(;k>0&&i<n;k--)  //Then move diagonally from down to up and store ans
            {
                ans[k].push_back(s[i]);
                i++;
            }
        }


    string e;
    for(int i=0;i<numRows;i++)
    {
        e+=ans[i];
        //cout<<ans[i]<<" ";
    }

    return e;


        
    }
};