#include <iostream>

int main() {
    int x = 3, y = 4, a, b = 5, c = 6, d = 7, i = 0, n = 8, p = 9;

    a = x + 5;
    std::cout << "a = " << a << std::endl;

    a = (x = y) + 2;
    std::cout << "a = " << a << std::endl;

    a = x == y;
    std::cout << "a = " << a << std::endl;

    a = b < c && c < d;
    std::cout << "a = " << a << std::endl;

    a = (i++) * (n + p);
    std::cout << "a = " << a << ", i = " << i << std::endl;

    return 0;
}