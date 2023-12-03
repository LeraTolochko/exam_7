#include <iostream>

// Функція для перестановки елементів масиву так, щоб спочатку розташовувалися всі нулі, потім всі одиниці, а потім всі двійки
void rearrangeArray(int X[], int n) {
    int start = 0, end = n - 1, mid = 0;

    while (mid <= end) {
        if (X[mid] == 0) {
            std::swap(X[start], X[mid]);
            start++;
            mid++;
        }
        else if (X[mid] == 1) {
            mid++;
        }
        else {
            std::swap(X[mid], X[end]);
            end--;
        }
    }
}

// Функція для знаходження суми елементів масиву
int calculateSum(int X[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += X[i];
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int X[n];
    std::cout << "Enter the elements of the array (0, 1, or 2): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> X[i];
    }

    rearrangeArray(X, n);

    std::cout << "Rearranged array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << X[i] << " ";
    }
    std::cout << std::endl;

    int sum = calculateSum(X, n);
    std::cout << "Sum of the elements of the array: " << sum << std::endl;

    return 0;
}