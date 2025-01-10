#include <iostream>

void reverseArray(int* arr) {
    if (arr == nullptr) return; // Проверка на null

    int left = 0;
    int right = 9;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "До разворота: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    reverseArray(array);

    std::cout << "После разворота: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
