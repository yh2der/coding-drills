class Solution {
public:
    int minimizeXor(int num1, int num2) {
        // 計算 num2 中 1 的個數
        int bits = __builtin_popcount(num2);
        
        // 初始化結果
        int answer = 0;
        
        // 從最高位開始，如果 num1 對應位是 1 且還有 1 可以放
        // 就在該位放 1 來最小化 XOR 結果
        for(int i = 31; i >= 0 && bits > 0; i--) {
            if(num1 & (1 << i)) {
                answer |= (1 << i);
                bits--;
            }
        }
        
        // 如果還有剩餘的 1 需要放
        // 從最低位開始找沒被使用的位置放入
        for(int i = 0; i < 32 && bits > 0; i++) {
            if((answer & (1 << i)) == 0) {
                answer |= (1 << i);
                bits--;
            }
        }
        
        return answer;
    }
};