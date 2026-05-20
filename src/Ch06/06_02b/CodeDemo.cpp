// Complete Guide to C++ Programming Foundations
// Exercise 06_02 with modifcations
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

int square(int x) {
    x *= x;
    return x;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;

    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
