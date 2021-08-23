#include <iostream>

int main() {
    int arr[6] = {-100, -50, -5, 1, 10, 15};

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6 - i - 1; ++j) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < 6; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
