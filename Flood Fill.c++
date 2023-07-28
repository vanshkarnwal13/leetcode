class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)
        return image;
        int a = image[sr][sc];
        image[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        int i=sr,j=sc;
        if(i-1>=0 && image[i-1][j]==a)
            floodFill(image,i-1,j,color); 
        if(i+1<n && image[i+1][j]==a)
            floodFill(image,i+1,j,color);
        if(j-1>=0 && image[i][j-1]==a)
            floodFill(image,i,j-1,color);
        if(j+1<m && image[i][j+1]==a)
            floodFill(image,i,j+1,color);
        return image;
    }
};