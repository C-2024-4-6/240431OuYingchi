/*1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
 Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����
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
	std::cout << "������������Ȼ��" << std::endl;
	std::cin >> m >> n;
	std::cout << "���ǵ���������ǣ�" << gongyin(m, n) << std::endl;
	std::cout << "���ǵ���С��������"<<gongbei(m, n) << std::endl;
}