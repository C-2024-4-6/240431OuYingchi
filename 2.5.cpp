#include <iostream>  
#include <cctype>  
using namespace std;

int main() {
    char c;
    int E = 0, K = 0, S = 0, Q = 0;

    cout << "������һ���ַ����Իس�������" << endl;


    while (cin.get(c) && c != '\n') {
        if (isalpha(c)) {
            E++;
        }
        else if (isspace(c)) {
            K++;
        }
        else if (isdigit(c)) {
            S++;
        }
        else {
            Q++;
        }
    }


    cout << "Ӣ����ĸ����: " << E << endl;
    cout << "�ո����: " << K << endl;
    cout << "�����ַ�����: " << S << endl;
    cout << "�����ַ�����: " << Q << endl;

    return 0;
