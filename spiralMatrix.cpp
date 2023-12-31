class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int top=0,right=col-1,left=0,bottom=row-1;
        while(left<=right&&top<=bottom)
        {
            //top element from left to right
            for(int i=left;i<=right;i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;
            //print right element from top to bottom
            for(int i=top;i<=bollom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            //print bottom element from right to left 
            if(leaft<=right)
            {
            for(int i=right;i>=left;i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            //print left element from bottom to top
            if(top<=bottom)
            {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left--;
            }
        }
        return ans;  
    }
};