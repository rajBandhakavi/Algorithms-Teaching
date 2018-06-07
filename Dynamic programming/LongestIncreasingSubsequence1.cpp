#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int lengthOfLIS(vector<int>& nums);

int main()
{
    vector<int> nums;
    for(int i=0;i<10;i++)
    {
        nums.push_back(rand()%100);
    }
    for(int i=0;i<10;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"\nlength of LIS: "<<lengthOfLIS(nums)<<endl;

    return 0;
}

int lengthOfLIS(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        //line 17 and 18 show how to copy a vector
        vector <int> sortedNums;
        sortedNums = nums;
        sort(sortedNums.begin(),sortedNums.end());
        
        //line 22 shows how to remove duplicates from a vector!!
        sortedNums.erase( unique( sortedNums.begin(), sortedNums.end() ), sortedNums.end() );
        int n = nums.size() ;
        int m = sortedNums.size() ;
      
        //lines 37-30 show how to create a 2D array
        int **c;
        c = new int*[n+1];
        for (int i = 0; i < n+1; ++i)
            c[i] = new int[m+1];
        
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if (i == 0 || j == 0)
                {
                    c[i][j] = 0;
                }      
                else if(nums[i-1] == sortedNums[j-1])
                {
                  c[i][j] = c[i-1][j-1] + 1;  
                } 
                else 
                {
                    c[i][j] = max(c[i-1][j] , c[i][j-1]);
                }
            }
        }
        return c[n][m];
        
    }