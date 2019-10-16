#include<stdio.h>
#include<stdlib.h>
void f(char from_rod,char aux_rod,char to_rod,int d)
{
	if(d==1)
	{
		printf("\n Move disk %d from rod %c to rod %c", d, from_rod,to_rod);
		return;
	}
	f(from_rod,to_rod,aux_rod, d-1);
		printf("\n Move disk %d from rod %c to rod %c", d, from_rod,to_rod);
	f(aux_rod,from_rod,to_rod, d-1);
	
}

int main()
{
	int i;
	scanf("%d",&i);
	f('A','B','C',i);
	return 0;
}
