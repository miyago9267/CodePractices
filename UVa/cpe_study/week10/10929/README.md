# [UVa10929 - You can say 11](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870)

給予一個正數N  
判斷是否是11的倍數

## Solve:
- Sol:
有兩種判斷方式  
    1. 奇數位數和與偶數位數和的差為11倍數
    2. 最後兩位與第三位以前的差為11的ㄎ倍數
我們選第一個 第二個太麻煩了  
可以直接讀入一個string來儲存  
然後從頭遍歷過找到奇數及偶數項個別的和然後相減mod11  
即可判斷

- Sol_Py:
Python或Java有個好處  
他們提供了可以儲存遠高於INT_MAX的儲存空間  
所以可以直接用Python讀取stdin再mod11

## Note:
- 數字非常大 可以達到 $$10^1000$$ 別傻傻的直接mod11來算了
- 使用Python要注意 有些測資故意開頭給0開頭的 記得轉成整數之前先存起來避免前面的0不見