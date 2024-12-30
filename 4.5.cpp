/*5�������Ӵ���
��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
int indexOf(const char s1[], const char s2[])
��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ��������ǳ��������������*/
#include <iostream>
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0, len2 = 0;
    const char* p1, * p2;

    
    for (len1 = 0; s1[len1] != '\0'; len1++);
    for (len2 = 0; s2[len2] != '\0'; len2++);

    
    if (len1 > len2) return -1;

    
    for (p2 = s2; p2 < s2 + len2 - len1 + 1; p2++) {
        p1 = s1;
        while (*p1 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        
        if (*p1 == '\0') return p2 - s2;
    }
    
    return -1;
}

int main() {
    const int MAX_LEN = 1000; 
    char s1[MAX_LEN], s2[MAX_LEN];

    std::cout << "����������C�ַ�����" << std::endl;
    std::cin.getline(s1, MAX_LEN); 
    std::cin.getline(s2, MAX_LEN); 

    int result = indexOf(s1, s2);
    if (result != -1) {
        std::cout << "�ַ��� '" << s1 << "' ���ַ��� '" << s2 << "' �е��±�Ϊ��" << result << std::endl;
    }
    else {
        std::cout << "�ַ��� '" << s1 << "' �����ַ��� '" << s2 << "' ���Ӵ���" << std::endl;
    }

    return 0;
}

