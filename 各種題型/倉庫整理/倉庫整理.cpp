#include<stdio.h>
#include<stdlib.h>
long long int count = 0;
void f(long long int from_rod,long long int aux_rod,long long int to_rod,long long int d,long long int j)
{
	if(d == 1)
	{
		count++;
		if(count == j)
		{
			printf("\n Move disk %lld from %lld to %lld",d, from_rod,to_rod);
			return;
		} 
	}
	f(from_rod,to_rod,aux_rod, d-1,j);
		count++;
		if(count == j)
		{
			printf("\n Move disk %lld from %lld to %lld",d, from_rod,to_rod);
			return;
		}
	f(aux_rod,from_rod,to_rod, d-1,j);
	
}

int main()
{
	long long int i,j;
	scanf("%lld %lld",&i,&j);
	f(1,2,3,i,j);
	return 0;
}

