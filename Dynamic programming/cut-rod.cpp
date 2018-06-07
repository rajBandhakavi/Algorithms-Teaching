#include<iostream>

int cutRod(int p[],int n)
{
	if (n == 0)
	{
		return 0;
	}
	int q = -1;

	for(int i=1;i<n;++i)
	{
		q = std::max(q,p[i]+cutRod(p,n-i));
	}
	return q;
}

int main()
{
	int p[] ={1,2,2,2,1,2,5,3,2,8,5,6,1,9,2,3,2,8,5,6,1,9,2,3,5,4,4,2,1,7};
	std::cout <<sizeof(p)/sizeof(*p)<<std::endl;
	std::cout << cutRod(p,sizeof(p)/sizeof(*p))<<std::endl;

	return 0;
}