#include<iostream>
#include<vector>

int memoizedCutRod(int p[],int rodLength,std::vector <int> r)
{
	if(r[rodLength] != 0)
	{
	   return r[rodLength];
	}
	
	if(rodLength == 0)
	{
		return 0;
	}
	else
	{
		int q = -1;
		for(int i=1;i<=rodLength;i++)
		{
			q = std::max(q,p[i] + memoizedCutRod(p,rodLength-i,r));
		} 
		r[rodLength] = q;
		printf("rodLength is %d and profit is %d\n",rodLength,r[rodLength]);
	}
	return r[rodLength];	

}

int main()
{
	int p[] = {0,1,2,1,4,3,6};
	int rodLength = (sizeof(p)/sizeof(*p)) - 1;
	std::vector<int> r(rodLength+1,0);

	int profit = memoizedCutRod(p,rodLength,r);

    printf("The profit is %d\n",profit);

    return 0;
	
}