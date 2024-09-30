#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void bucketSort(std::vector<float>& arr) {
    if (arr.empty()) return;

    // 1. Find the maximum and minimum values in the array
    float maxVal = *max_element(arr.begin(), arr.end());
    float minVal = *min_element(arr.begin(), arr.end());
    int bucketCount = 10; // Number of buckets

    // 2. Create buckets
    vector<std::vector<float>> buckets(bucketCount);

    // 3. Distribute input array elements into buckets
    for (float num : arr) {
        int index = (num - minVal) / (maxVal - minVal) * (bucketCount - 1);
        buckets[index].push_back(num);
    }

    // 4. Sort each bucket and concatenate
    arr.clear();
    for (auto& bucket : buckets) {
        sort(bucket.begin(), bucket.end());
        arr.insert(arr.end(), bucket.begin(), bucket.end());
    }
}

int main() {
    vector<float> arr = {0.42, 0.32, 0.65, 0.12, 0.45, 0.23};
    bucketSort(arr);

    for (float num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
