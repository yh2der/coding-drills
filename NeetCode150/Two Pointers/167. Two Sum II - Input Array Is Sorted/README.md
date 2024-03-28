# 167. Two Sum II - Input Array Is Sorted
## Steps
1. 初始化兩個指標 `front` 和 `end`，分別指向數組的頭和尾。
2. 進入迴圈，當 `front` 小於 `end` 時，執行以下步驟：
    1. 檢查 `numbers[front]` 和 `numbers[end]` 的和是否等於目標值 `target`。
    2. 如果相等，則返回包含 `front + 1` 和 `end + 1` 的向量，表示找到了兩個數字的索引，這兩個數字的和等於目標值。
    3. 如果和小於目標值 `target`，則將 `front` 指標向右移動一位。
    4. 如果和大於目標值 `target`，則將 `end` 指標向左移動一位。
3. 如果在迴圈結束時仍未找到符合條件的兩個數字，則返回空向量 `{}`，表示未找到任何解。

