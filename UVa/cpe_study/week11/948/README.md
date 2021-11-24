# [UVa948 - Fibonaccimal Base](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=889)

給定一個數字  
要求以費氏數列對應位數  
產生一個費氏進位
例:  
17 = 13 + 3 + 1  

17 =     | 1  | 0 | 0 | 1 | 0 | 1
---------|----|---|---|---|---|---
13+3+1 = | 13 | 8 | 5 | 3 | 2 | 1

可對應出結果 17(10) = 100101(fib)

## Solve:
- Sol:
先建表  
然後由大到小往下減  
一旦能減代表有這個位數

## Note:
- 建表只需要建到大概40位左右就好 題目要求大小只有1000000