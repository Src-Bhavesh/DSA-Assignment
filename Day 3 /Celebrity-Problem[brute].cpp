class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n=mat.size();
        
        vector<int>ik(n,0);
        vector<int>km(n,0);
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i != j && mat[i][j] == 1){
                    ik[i]++;
                    km[j]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(ik[i]==0 && km[i]==n-1){
                return i;
            }
        }
        return -1;
        
    }
};
