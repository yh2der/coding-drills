#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

using namespace std;

int main() {
    // Initialize a vector<int>
    vector<int> arr = {64, 25, 12, 22, 11};

    // Copy the original array for sorting
    vector<int> arrForSort = arr;

    // Use std::sort for sorting
    // Basic usage of std::sort:
    // sort(iterator begin, iterator end);
    // Here, begin and end are iterators pointing to the range to be sorted.

    // Default sorting (ascending order)
    sort(arrForSort.begin(), arrForSort.end());

    // Output the sorted result
    cout << "Sorted array using std::sort: ";
    for (const auto& num : arrForSort) {
        cout << num << " ";
    }
    cout << endl;

    // Using custom sorting criteria
    // You can provide a custom comparison function or Lambda function as the third parameter
    // For example: sort(arrForSort.begin(), arrForSort.end(), [](int a, int b) { return a > b; });

    // Example: Descending order sorting
    vector<int> arrForDescending = arr;
    sort(arrForDescending.begin(), arrForDescending.end(), greater<int>());

    // Output the descending sorted result
    cout << "Descending sorted array using std::sort: ";
    for (const auto& num : arrForDescending) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
