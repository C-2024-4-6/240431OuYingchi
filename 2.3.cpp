#include<iostream>
int main()
{
	float x = 0, y = 0, z = 0;
	float C = 0;
	std::cout << "�����������ε����߳�" << std::endl;
	std::cin >> x >> y >> z;
	if ((x + y )> z && (x + z) > y &&( z + y) > x)
	{
		C =x  + y +z ;
		std::cout << "���������ܳ�Ϊ��" << C << std::endl;
		if (x== y || y == z || x == z)
		{
			std::cout << "��������Ϊ����������" << std::endl;

		}
		else {std:: cout << "�������β�Ϊ����������" << std::endl; }
		
	}
	else std:: cout << "�����߲��ܹ���������,���������룺" << std::endl; 
}



	
