#include <iostream>

// Функция для обмена значений по указателям
void swap(int* ptr1, int* ptr2) {
    if (ptr1 != nullptr && ptr2 != nullptr) { 
        int temp = *ptr1;  
        *ptr1 = *ptr2;     
        *ptr2 = temp;      
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 10;
    int b = 20;

    std::cout << "До вызова swap: " << a << " " << b << std::endl;

    swap(&a, &b);

    std::cout << "После вызова swap: " << a << " " << b << std::endl;

    return 0;
}