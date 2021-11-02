# [UVa1583 - Digit Generator](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4458)

給定一個數字A  
找出能生成A的最小數字B  
生成的方法為B加上B的各位數和  
若等於A則稱B為A的產生器(digGen)  
找出對於A最小的B

## Solve:
- Sol_1:
筆者不才 直接暴力破解  
但當然不是從頭掃到尾(10^5一定爛掉好不好)  
仔細觀察 每個數字的digGen不會超過自己本身超過9*5  
所以其實對於每個數字-50再找有沒有digGen就可以了

- Sol_2:
建表也是可行的  
建議由大往小開始建  
方便找出最小值

## Note:
- 數字不小 小心TLE