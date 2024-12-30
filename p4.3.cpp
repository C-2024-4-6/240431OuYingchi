#include <iostream>

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int* arr = nullptr;
    int size;

    std::cout << "����������Ĵ�С��";
    std::cin >> size;
    arr = new int[size];

    std::cout << "����������Ԫ�أ�" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    sortArray(arr, size);

    std::cout << "����������Ԫ��Ϊ��" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}