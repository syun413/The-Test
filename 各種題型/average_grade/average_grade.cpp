#include <bits/stdc++.h>
struct c
{
	int grade[20];
	int s;
};
float average(struct c *ave)
{
	float sum = 0.0;
	float average;
	for(int i = 1;i <= ave->s;i++)
		sum = sum + ave->grade[i];
	average = sum / ave->s;
	return average;
}
int main()
{
struct c grade;
scanf("%d",&(grade.s));
for(int i = 1;i <= grade.s;i++)
	scanf("%d",&(grade.grade[i]));
printf("%lf\n",average(&grade));

	return 0;
}
