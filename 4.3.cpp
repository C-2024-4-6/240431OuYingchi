/*3����Ϸ����������⣺
һ��ѧУ��100�������100��ѧ������ѧ��һ�����д�����ǹرյġ���һ��ѧ������ΪS1������ѧУ�󣬴����еĴ���񡣵ڶ���ѧ��S2���ӵڶ�������񣨼�ΪL2����ʼ��ÿ����������񣬽����ǹرա�������ѧ��S3�ӵ����������L3��ʼ��ÿ�������������ǵ�״̬�ı䣨���ŵĹ��ϣ����ŵĴ򿪣���ѧ��S4����L4��ʼ��ÿ���ĸ��ı����ǵ�״̬��ѧ��S5����L5��ʼ��ÿ������ı�״̬���������ƣ�ֱ��ѧ��S100�ı�L100��״̬��
������ѧ�����������̣���Щ������ǿ��ŵģ���дһ�������������⣬��ʾ���п��ŵĹ��Ӻ��룬����֮����һ���ո������
��ʾ��ʹ��һ��100��������Ԫ�ص����飬ÿ��Ԫ�ش��������ǿ���true����أ�false����������еĴ�����ǹرյġ�

*/#include <iostream>

const int NUM_LOCKERS = 100; 

int main() {
    bool lockers[NUM_LOCKERS] = { false }; 

    
    for (int student = 1; student <= NUM_LOCKERS; ++student) {
        for (int locker = student - 1; locker < NUM_LOCKERS; locker += student) {
            
            lockers[locker] = !lockers[locker];
        }
    }

    
    std::cout << "���ŵĴ������룺" << std::endl;
    for (int i = 0; i < NUM_LOCKERS; ++i) {
        if (lockers[i]) {
            std::cout << (i + 1) << " "; 
        }
    }
    std::cout << std::endl;

    return 0;
}