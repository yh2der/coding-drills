# 567. Permutation in String
此問題的目標是檢查一個字串 `s2` 中是否包含另一個字串 `s1` 的排列。

## 步驟
1. 創建一個 `unordered_map` 來記錄字串 `s1` 中每個字符出現的次數。
2. 使用兩個指針 `left` 和 `right`，初始化均為 0，並且初始化 `count` 為 `s1` 的長度。
3. 遍歷 `s2` 中的字符，更新 `seen` 的計數，同時移動右指針 `right`。
4. 每次右指針移動後，檢查 `count` 是否為 0，若為 0 則返回 `true`，表示在 `s2` 中找到了 `s1` 的排列組合。
5. 如果當前窗口大小等於 `s1` 的長度，則移動左指針 `left`，同時恢復相應字符的計數，並檢查是否需要增加 `count`。
6. 重複步驟 3 到 5，直到遍歷完整個 `s2`。

## 時間複雜度
由於我們僅遍歷了一次 `s2`，並且在每次遍歷中進行固定次數的操作，因此時間複雜度為 O(n)，其中 n 為 `s2` 的長度。

## 空間複雜度
我們使用了一個哈希表 `seen` 來存儲 `s1` 中每個字符的出現次數，因此空間複雜度為 O(m)，其中 m 為 `s1` 的長度。

## 注意事項
- 在實現中，使用了 unordered_map 來記錄字符出現的次數，這保證了快速查找字符並且可以處理字符出現次數的計算。
- 通過滑動窗口法，我們可以在線性時間內解決此問題，而不需要使用暴力搜索的方法，從而提高了效率。