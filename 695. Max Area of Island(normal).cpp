class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int ans=0 , n =  grid.size(), m = grid[0].size() ; 
        for(int i = 0; i<grid.size()  ; i++)
       {
           for(int j= 0 ; j<grid[0].size() ; j++)
           {
               ans = max(ans , maxarea(grid, n,m,i,j));
           }
       }
        return ans;
    }
    int maxarea(vector<vector<int>>& grid , int n , int m , int i , int j){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]!=1)return 0;
            grid[i][j]=0;
            return (1+maxarea(grid, n,m,i+1,j)+maxarea(grid, n,m,i,j+1)+maxarea(grid, n,m,i-1,j)+maxarea(grid, n,m,i,j-1));
    }
};
