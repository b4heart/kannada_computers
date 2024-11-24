#include<iostream>

int sum(int a, int b) {
    int x;
    x = a + b;
    std::cout << "I am the sum function!" << std::endl;
    return x;
}

int main(int argc, const char *argv[]) {
    std::cout << "Hello Hrudai!" << std::endl;
    int v = sum(1, 3);
    std::cout << v << std::endl;
    std::cout << "The count is: " << argc << std::endl;
    if (argc > 1) {
        std::cout << "The first element is: " << argv[1] << ". Its number is: " << atoi(argv[1]) << std::endl;
        if (atoi(argv[1]) < 5) {
            std::cout << "Hrudai, you have to eat!" << std::endl;
        }
        else {
            std::cout << "Hrudai, you had good food!" << std::endl;
        }
    }
    return 0;
}