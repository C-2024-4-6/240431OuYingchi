/*2����������
�������������㷨��дһ�������������������㷨�������˶�������д���ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳�򡣴˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ���
�㷨���������£�
bool changed = true;
do
{
changed = false;
for (int j = 0; j < listSize �C 1; j++)
	if (list[j] > list[j+1])
	{
	  swap list[j] with list[j+1];
	  changed = true;
	}
} while (changed);
�����ԣ�ѭ���������б��Ϊ��������֤��doѭ�����ִ��listSize �C 1�Ρ�
��д���Գ��򣬶���һ������10��˫�������ֵ����飬���ú�������ʾ���к�����֡�
*/#include <iostream>


void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}


void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}


int main() {
    const int SIZE = 10; 
    double list[SIZE]; 

    std::cout << "������10�����֣�" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> list[i];
    }

    
    bubbleSort(list, SIZE);

    
    std::cout << "���к������Ϊ��" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}