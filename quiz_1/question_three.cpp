#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> numSet;

    for (int num : nums) {
        if (numSet.find(num) != numSet.end()) {
            // Duplicate found
            return true;
        } else {
            numSet.insert(num);
        }
    }

    // No duplicates found
    return false;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 2, 3, 4, 5};

    bool hasDuplicates = containsDuplicate(nums);

    if (hasDuplicates) {
        std::cout << "The array contains duplicates." << std::endl;
    } else {
        std::cout << "The array does not contain duplicates." << std::endl;
    }

    return 0;
}


