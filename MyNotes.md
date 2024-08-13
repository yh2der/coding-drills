# Coding Notes
## about for loop
1. Range-based for loop
範圍型 for 循環是 C++11 引入的特性，提供了一種簡潔、易讀的方式來遍歷容器。
示例:
```cpp
vector<int> numbers = {1, 2, 3, 4, 5};
for (const auto& num : numbers) {
    cout << num << " ";
}
```

2. 使用引用 (&)
使用引用可以避免不必要的對象複製，提高性能，特別適用於大型容器或大型對象。
示例 (使用引用):
```cpp
vector<string> words = {"Hello", "World", "C++"};
for (auto& word : words) {
    word[0] = toupper(word[0]);  // 修改第一個字母為大寫
}
```
示例 (不使用引用):
```cpp
vector<string> words = {"Hello", "World", "C++"};
for (auto word : words) {
    word[0] = toupper(word[0]);  // 這不會修改原始容器中的字符串
}
```

3. 使用 const
使用 const 可以表達不修改容器元素的意圖，防止意外修改，提高代碼的可讀性和安全性。
示例:
```cpp
map<string, int> scores = {{"Alice", 95}, {"Bob", 87}, {"Charlie", 92}};
for (const auto& pair : scores) {
    cout << pair.first << ": " << pair.second << endl;
}
```

4. 不使用引用的影響
* 不使用引用會在每次迭代時創建元素的副本，增加記憶體使用，可能降低性能。
* 示例:
```cpp
vector<vector<int>> matrix = {{1, 2}, {3, 4}, {5, 6}};
for (auto row : matrix) {  // 每次迭代都會複製一個 vector<int>
    for (auto num : row) {
        cout << num << " ";
    }
    cout << endl;
}
```

5. 最佳實踐
* 當只需要讀取數據時，使用 for (const auto& element : container)
* 當需要修改數據時，使用 for (auto& element : container)

6. 其他實現方式
* 使用 STL 算法 (transform):
```cpp
vector<int> input = {1, 2, 3, 4, 5};
vector<int> output(input.size());
transform(input.begin(), input.end(), output.begin(), [](int x) { return x * x; });
```

* 傳統的迭代器式 for 循環:
```cpp
map<string, int> ages = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
for (map<string, int>::const_iterator it = ages.begin(); it != ages.end(); ++it) {
    cout << it->first << " is " << it->second << " years old." << endl;
}
```

* C++17 的結構化綁定:
```cpp
map<string, int> scores = {{"Alice", 95}, {"Bob", 87}, {"Charlie", 92}};
for (const auto& [name, score] : scores) {
    cout << name << " scored " << score << " points." << endl;
}
```

## About sorting
### Hints
- 排序map時要先把key, value放到vector再排，假設要按照value排，那在放到vector時可以先顛倒放，就不必再寫一個compare函式
- 假設要寫一個compare函式給sort用，記得加static，不然會是成員函式無法在class內直接用
```cpp
sort(sorted.begin(), sorted.end(), compare);
```
假設現在compare:
```cpp
static bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}
```
即按照second大小 降序排列

