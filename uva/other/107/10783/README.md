# [UVa10783 - Odd Sum](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1724)

給予一組a, b  
輸出[a, b]區間之間之所有奇數總和

## Solve:  
先判斷頭尾是否為奇數  
否則將其調整為最靠近區間外圍之奇數  
接下來公式解:  
$ S_n = \frac{1}{2}(a_0+a_n)s $  
$ s = \frac{1}{d}(a_n-a_0)+1 $

## Note:
- Py注意換行 每單筆輸入都是有換行的
- 這是閉區間 注意a, b本身也可能需要加