#include<stdio.h>
int main()
{
	long long int i,j,k,count=0;
	scanf("%lld%lld",&i,&j);
	for(int m=0;m<i;m++)
	{
	  scanf("%lld\n",&k);
	  if(k%j==0)
	  {
	  	count++;
	  }	
	}
	printf("%lld",count);
	return 0;
}
