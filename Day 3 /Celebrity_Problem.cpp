class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        
        int top = 0;
        int end = n-1;
        
        while(top<end){
            if(mat[top][end]==1){
                top++;
            }
            else if(mat[end][top]==1){
                end--;
            }
            else{
                top++;
                end--;
            }
        }
        
        if(top>end){
            return -1;
        }
        
            for(int i=0; i<n; i++){
                if(top==i)continue;
                else if(mat[top][i]==0 && mat[i][top]==1){
                    
                }
                else return -1;
            }
        return top;
        
        
    }
};
