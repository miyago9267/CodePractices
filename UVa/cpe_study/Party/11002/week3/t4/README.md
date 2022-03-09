# [UVA - 11466](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2461)

給予一個數字N  
要求找出它的最大質因數  
若是質因數數量只有1  
則輸出-1

## Solve:
- Sol:
建質數表 這裡建議線性篩  
不然筆者TLE了兩次

## Note:
- 小心 測資有負數==
- 注意 輸入很大 大到14位數 可以先開平方建出對應大小質數表