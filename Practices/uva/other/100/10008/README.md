# [UVa10008 - What's Cryptanalysis?](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=949)

給予一個數N  
再給予N行的字串(可能有空格)  
紀錄"英文字母"出現的次數  
並把有出現(次數不為0)的字母由多到少輸出數量

## Solve:
- Sol:
暴力掃過所有字串  
開一個陣列儲存A-Z的個數  
邊掃邊紀錄   
然後紀錄最多的數量到多少  
接著再由最大的往下慢慢找有哪些字母

## Note:
- 可能包含空格 記得使用getline去紀錄
- 用getline記得在第一個數字前要清掉輸入快取
- 記得char可以直接用ascii的構造來進行運算嗎