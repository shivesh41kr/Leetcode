class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m=v.size(), n=v[0].size();
       /* vector<int>r(m,1);
        vector<int>c(n,1);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
            
        }
        for(int i=0;i<m;i++){
        if(r[i]==0){
            for(int j=0;j<n;j++){
                v[i][j]=0;
            }
        }
        }
        for(int j=0;j<n;j++){
        if(c[j]==0){
            for(int i=0;i<m;i++){
                v[i][j]=0;
            }
        }
        }*/
        
        bool frow=false;
        bool fcol=false;
        
        for(int i=0;i<m;i++){
            if(v[i][0]==0){
                frow=true;
            }
        }
        for(int j=0;j<n;j++){
            if(v[0][j]==0){
                fcol=true;
            }
        }
        
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    v[0][j]=0;
                    v[i][0]=0;
                }
                }
            }
            
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(v[i][0]==0 || v[0][j]==0){
                    v[i][j]=0;
                }
            }
        }
        
        if(frow){
            for(int i=0;i<m;i++){
                v[i][0]=0;
            }
        }
       if(fcol){
           for(int j=0;j<n;j++){
                v[0][j]=0;
            }
            
        } 
    }
};