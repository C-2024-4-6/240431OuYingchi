/*��ʵ�����ݡ�
1�������³���
#include<iostream>
using namespace std��
class Time             // ����Time��
{
public��              // ���ݳ�ԱΪ���õ�
int hour;
int minute;
int sec ;
};
int main()
{
Time tl;           //����t1ΪTime�����
   cin>>t1.hour;      //�����趨��ʱ�� 
cin>>t1.minute;
cin>>t1.sec;
cout<<t1.hourl<<������<<t1.minute<<������<<t1.sec<<endl ;
return 0;
}
��д����Ҫ��
(1)�����ݳ�Ա��Ϊ˽�еģ�
(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
(3)�������ڶ����Ա������
Ȼ���������г��������ʲô��ԱӦָ��Ϊ���õ�?ʲô��ԱӦָ��Ϊ˽�е�? ʲô������÷������ж���? ʲô������������ⶨ��? 

*/
#include<iostream>

class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	
	void settime()
	{
		std::cin >> hour >> minute >> sec;
	}
	void checktime()
	{

		std::cout << hour << ":" << minute << ":" << sec << std::endl;
	}
};
int main()
{
	Time t1;
	t1.settime();
	t1.checktime();
	
}
       


	

