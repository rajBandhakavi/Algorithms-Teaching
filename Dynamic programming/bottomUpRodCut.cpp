#include<iostream>

int main()
{
	int p[] = {0,1,3,2,4,5};
	int rodLength = (sizeof(p)/sizeof(*p)) - 1 ;
	int r[rodLength+1] ;
	int s[rodLength+1] ;
	s[0]=0,r[0]=0;

	for(int i=1;i<=rodLength;++i)
	{
		int q = -1;
		for(int j=1;j<=i;j++)
		{
			if(q<p[j]+r[i-j])
			{
			 	q = p[j]+r[i-j];
				s[i]=j;	
			}
		}
		r[i] = q;
	}

	printf("profit is %d\n",r[rodLength]);
	
	//Printing the rod cutting way
	int n = rodLength;
	printf("\nCut at below lengths\n");
	while(n>0)
	{
		printf("%d ",s[n]);
		n=n-s[n];
	}
	printf("\n");

	return 0;
}