


#include<iostream>
int min(int x, int y)
{
	int z;
	z = x > y ? x : y;
		return z;
}
int main()
{
	int a;
	int b;
	std::cout << "请输入2个数" << std::endl;
	std::cin >> a >> b;
	
	for (int i=min(a,b);i--;i>0)
	{
		if (a % i == 0 && b % i == 0)
		{
			std::cout << "a和b的最大公因数为：" << i << std::endl;

		}
		
	}
	
	for (int j = 1; j++;j>a,j>b)
	{
		if (j % a == 0 && j % b == 0)
		{
			std::cout << "a与b的最小公倍数为：" << j <<std:: endl;
			break;
		}
	}

	return 0;
}
