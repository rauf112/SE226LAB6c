#include <iostream>

double sumSeries(int n, int k = 1) {
    if (k > n) {
        return 0;
    }

    double term = (-1.0) * ((k % 2 == 0) ? 1 : -1) / k;

    return term + sumSeries(n, k + 1);
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    double sum = sumSeries(n);

    std::cout << "Sum of the series: " << sum << std::endl;

    std::cout << "Enter the value of k: ";
    int k;
    std::cin >> k;

    double sum2 = sumSeries(n, k);

    std::cout << "Sum of the series: " << sum2 << std::endl;

    return 0;
}
