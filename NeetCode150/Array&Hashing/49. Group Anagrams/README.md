# 49. Group Anagrams
## Question
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
## Intuition
只要是anagram，代表他們字母數一樣，順序不同而已。
所以只要把字串先排列，字串一樣代表就是anagram。
## Steps
1. 遍歷strs，用個遍數暫存來排序(因為未排序的資料要拿來輸出)，把排序後的str當作hash map的key，排序前的原始資料當作value
2. 把hash table轉成二維陣列