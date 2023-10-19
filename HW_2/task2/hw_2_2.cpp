#include <iostream>

int main() {
    double a, b, c, d, e, f, h;

    std::cout << "Enter values: a, b, c, d, e, f, h: ";
    std::cin >> a >> b >> c >> d >> e >> f >> h;

    double result = a / (b * c) * (d * e) / (f * h);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
