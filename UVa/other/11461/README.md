# [UVa11461 - Square Numbers ](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456)

給定n, m  
求[n, m]區間中所有完全平方數數量

## Solve:
- Sol_1:
建表  
範圍是0~10^6  
代表會出現1-100的平方  
用set去存起來  
然後從n~m依序檢查是否在set之中

- Sol_2:
我們可以直接從n和m下手  
將其開平方後即可找到區間中有多少平方數  
記得加1

## Note:
- 暴力硬拆也可以啦 只是不建議這樣做