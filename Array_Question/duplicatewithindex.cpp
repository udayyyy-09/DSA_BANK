#include <iostream>

int main() {
    int array[] = {1, 2, 3, 2, 5, 2};
    int size = sizeof(array) / sizeof(array[0]);
    bool hasDuplicates = false;

    // Iterate through the array
    for (int i = 0; i < size; ++i) {
        bool duplicate = false;

        // Check if the current element has occurred before
        for (int j = 0; j < i; ++j) {
            if (array[i] == array[j]) {
                duplicate = true;
                break;
            }
        }

        // If duplicate is found, print its index
        if (duplicate) {
            hasDuplicates = true;
            std::cout << "Duplicate " << array[i] << " found at index " << i << std::endl;
        }
    }

    if (!hasDuplicates) {
        std::cout << "No duplicates found in the array." << std::endl;
    }

    return 0;
}
