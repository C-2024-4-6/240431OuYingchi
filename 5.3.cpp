#include <iostream>


class Cuboid {
private:
    int length;
      int width;
    int height;
public:
    
    void input() {
        std::cout << "�����볤�����ĳ���";
        std::cin >> length;
        std::cout << "�����볤�����Ŀ�";
        std::cin >> width;
        std::cout << "�����볤�����ĸߣ�";
        std::cin >> height;
    }
    
    int calaulate() {
        return length * width * height;
    }
    
    void output() {
       std:: cout << "�ó�����������ǣ�" << calaulate() <<std:: endl;
    }
};

int main() {
    {
        Cuboid cuboids[3] = {};
        

    for (int i = 0; i < 3; i++) {
        std::cout << "�������" << (i + 1) << "������������Ϣ��" << std::endl;
        cuboids[i].input();
    }

    
    for (int i = 0; i < 3; i++) 
    {
        cuboids[i].output();
    }

    return 0;
}