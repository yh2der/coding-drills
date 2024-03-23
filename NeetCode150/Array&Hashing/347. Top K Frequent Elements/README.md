# 347. Top K Frequent Elements
## Intuition
先遍歷一遍然後遇到的值就把它當作key，並且把value++來計算出現次數
## Steps
1. 先用map計算字母出現次數
2. 存放到vector並按照出現次數做排序
3. 取出現次數前k大的傳回
## Hints
* 排序map時要先把key, value放到vector再排，假設要按照value排，那在放到vector時可以先顛倒放，就不必再寫一個compare函式
* 假設要寫一個compare函式給sort用，記得加static，不然會是成員函式無法在class內直接用
### map vs unordered_map
* map（映射）：
    * 有序性：map中的元素按照鍵的升序順序進行排序。這意味著在map中迭代元素時，元素將以升序順序出現。
    * 內部實現：map內部通常使用紅黑樹（Red-Black Tree）來實現，這使得插入、查找和刪除操作的時間複雜度為O(log n)。
    * 適用情況：當你需要按照鍵的順序進行訪問或查找時，map是一個不錯的選擇。
* unordered_map（無序映射）：
    * 無序性：unordered_map中的元素沒有明確定義的順序。元素的排列順序取決於哈希函數。
    * 內部實現：unordered_map內部通常使用哈希表（Hash Table）來實現，這使得插入、查找和刪除操作的時間複雜度為平均情況下的O(1)。
    * 適用情況：當你不需要元素有序，而更關注快速插入、查找和刪除操作時，unordered_map是一個更好的選擇。