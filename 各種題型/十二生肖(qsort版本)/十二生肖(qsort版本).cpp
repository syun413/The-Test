#include <bits/stdc++.h>
#include <algorithm>
int main()
{
	//char z[12][40];
	//for(int i = 0;i < 12;i++)
	//	scanf("%s",z[i]);
	std::string z[12]{"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "chicken", "dog", "pig"};
	std::sort(z,z+12);
 	for(int i = 0;i < 12;i++)
		std::cout << z[i] << " ";

	return 0;
}
