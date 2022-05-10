# [UVa10931 - Parity](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1872)

給定一個整數
要求轉成二進位並數出有多少1

## Solve:
- Sol_1
    先轉為二進位儲存進vector  
    接著再數有多少1  
    原理很簡單 只是被我寫得很複雜

- Sol_2:  
    二進位中的末位代表奇偶數  
    代表只要不斷除2  
    判斷結果為奇偶數即可確保該位數為0或1

## Note:
- 照順序塞進陣列會是顛倒的 記得reverse回來
- 可以用字串相加的方式往前塞