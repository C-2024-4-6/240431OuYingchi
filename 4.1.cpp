/*1����ӡ��ͬ������
��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ������
������һ������������
*/
#include <iostream>

int main() {
    int numbers[10]; // �洢�����10����
    int unique[10]; // �洢��ͬ����
    int uniqueCount = 0; // ��ͬ���ļ���
    int num, i, j;

    
    std::cout << "������10������" << std::endl;
    for (i = 0; i < 10; ++i) {
        std::cin >> numbers[i];
    }

    // �ҳ���ͬ����
    for (i = 0; i < 10; ++i) {
        int isUnique = 1; // ���赱ǰ����Ψһ��
        for (j = 0; j < uniqueCount; ++j) {
            if (unique[j] == numbers[i]) {
                isUnique = 0; // ����ҵ�����ͬ��������ǰ������Ψһ��
                break;
            }
        }
        if (isUnique) {
            unique[uniqueCount++] = numbers[i]; // �����Ψһ�ģ����뵽unique������
        }
    }

    std::cout << "��ͬ�����У�" << std::endl;
    for (i = 0; i < uniqueCount; ++i) {
        std::cout << unique[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}