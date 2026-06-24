/*#include <iostream>

void modifyValue(int* ptr) {
    *ptr = 100;
}

int main() {
    int num = 50;
    int* ptr = &num;

    std::cout << "Original value: " << num << std::endl;
    std::cout << "Pointer value: " << *ptr << std::endl;

    modifyValue(ptr);

    std::cout << "Modified value: " << num << std::endl;
    std::cout << "Pointer value: " << *ptr << std::endl;

    return 0;
}*/

/*#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    int* ptr1 = &x;
    int* ptr2 = &y;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Pointer 1 points to: " << *ptr1 << std::endl;
    std::cout << "Pointer 2 points to: " << *ptr2 << std::endl;

    swap(ptr1, ptr2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Pointer 1 points to: " << *ptr1 << std::endl;
    std::cout << "Pointer 2 points to: " << *ptr2 << std::endl;

    return 0;
}*/

#include <iostream>

void increment(int* ptr) {
    (*ptr)++;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int* ptr = &array[2];

    std::cout << "Original array elements:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    std::cout << "Pointer points to: " << *ptr << std::endl;

    increment(ptr);

    std::cout << "After incrementing:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    std::cout << "Pointer points to: " << *ptr << std::endl;

    return 0;
}
