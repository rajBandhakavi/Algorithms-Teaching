/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

URL: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/
*/
class Solution {
public:
    
    void rotateHelper(vector<vector<int>>& matrix,int startRow,int endColumn)
    {
        cout<<startRow<<" "<<endColumn<<" "<<matrix.size()/2;
        if(startRow >= matrix.size()/2)
            return;
        
        int temp1,temp2,temp3;
        int n= matrix.size();
        
        for(int i=startRow;i<endColumn;++i)
        {
            temp1 = matrix[startRow][i];
            temp2 = matrix[i][endColumn];
            temp3 = matrix[n-1-startRow][n-1-i];
            matrix[startRow][i] = matrix[n-1-i][n-1-endColumn];
            matrix[i][endColumn] = temp1;
            matrix[n-1-startRow][n-1-i] = temp2;
            matrix[n-1-i][n-1-endColumn] = temp3;
        }
        startRow+=1;
        endColumn-=1;
      
        rotateHelper(matrix,startRow,endColumn);
        
    }
    
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size() == 0 or matrix.size() == 1)
            return;
        rotateHelper(matrix,0,matrix.size()-1);
    }
};