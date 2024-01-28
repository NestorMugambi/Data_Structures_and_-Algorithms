#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
    int result = 0;

    for (int num : nums) {
        result ^= num;
    }

    return result;
}

int main() {
    // Example usage
    std::vector<int> nums = {4, 2, 1, 2, 1};

    int single = singleNumber(nums);

    std::cout << "The single number is: " << single << std::endl;

    return 0;
}

