#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0; // Empty array has no duplicates
    }

    int uniqueIndex = 0; // Index to store unique elements

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[uniqueIndex]) {
            // Found a unique element
            ++uniqueIndex;
            nums[uniqueIndex] = nums[i]; // Move the unique element to its correct position
        }
    }

    // The length of the array with unique elements is (uniqueIndex + 1)
    return uniqueIndex + 1;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int newLength = removeDuplicates(nums);

    std::cout << "New Length: " << newLength << std::endl;
    std::cout << "Unique Elements: ";
    for (int i = 0; i < newLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

