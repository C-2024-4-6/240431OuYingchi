/*1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
*/
#include<iostream>
		int min(int x,int y)
		{
			return x < y ? x : y;
		}
		int max(int x, int y)
		{
			return x > y ? x : y;
		}
		static int gongyin(int m, int n)
		{
			for (int z = min(m, n); m % z == 0 && n % z == 0; z--)
				return z;
		}
		static int gongbei(int m, int n)
	{
		return m * n / gongyin(m, n);


	}
int main()
{
	int m, n;
	std::cout << "请输入两个自然数" << std::endl;
	std::cin >> m >> n;
	std::cout << "他们的最大公因数是：" << gongyin(m, n) << std::endl;
	std::cout << "他们的最小公倍数是"<<gongbei(m, n) << std::endl;
}