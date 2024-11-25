#include<iostream>
int main()
{
	int i,  k, h;
	k = 0 ,h=0 ;
	for (int i = 2; i <= 100; i *= 2)
	{
		
		k = k + i;
		h++;
		std::cout << k * 0.8 / h << std::endl;

		
	}
	
		
}