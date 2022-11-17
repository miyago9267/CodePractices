# [Uva10190 - Divide, But Not Quite Conquer!](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1131)

給予n, m
判斷n是否為m之次方
為真輸出降冪序列
否則輸出`boring`

## Solve  

- Sol_1:
暴力硬除  
慢慢檢查並判斷是不是次方  
過程中出現不能整除的case就送他下去  
途中順便紀錄降冪的過程

- Sol_2:
Log大法好  
先用log判斷是不是次方  
不過有機會問題  
當log(1)會等於0  
在換底的時候放分母會炸掉  
小心使用

## Note  

- 記得排除除數為0或1的Case 一個是會變INF 另一個是你一輩子都除不完  
- 感謝 @冬冬冬(c4t0212)的[文章](https://github.com/c4t0212/competitiveProgramming/tree/main/UVa/10190)提醒我有log可以用
- 樓上那篇文章的sol_1寫得比我好多了(羞愧
