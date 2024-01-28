#include <iostream>
#include <climits> // Include this header for INT_MIN

int summation(const int* arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    return sum;
}

int maximum(const int* arr, int n) {
    if (n == 0) {
        // Handle the case of an empty array
        std::cerr << "Error: Empty array passed to maximum function." << std::endl;
        return INT_MIN; // Assuming INT_MIN represents an undefined state
    }

    int maxVal = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    int n;

    std::cout << "Enter the length of the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Error: Invalid array length." << std::endl;
        return 1; // Exit with an error code
    }

    int* arr = new int[n];

    std::cout << "Enter " << n << " integers for the array:" << std::endl;

    for (int i = 0; i < n; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sumResult = summation(arr, n);
    int maxResult = maximum(arr, n);

    std::cout << "Sum: " << sumResult << std::endl;
    std::cout << "Maximum: " << maxResult << std::endl;

    delete[] arr; // Release the dynamically allocated memory

    return 0;
}
