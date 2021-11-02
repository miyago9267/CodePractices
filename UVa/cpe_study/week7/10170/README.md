# [Uva10170 - The Hotel with Infinite Rooms](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1111)

這間飯店有個規則  
住N個人就會停留N天  
N天後會換N+1個人入住並停留N+1天  
以此類推  
給予第一天開始計算的入住人數 以及第K天  
判斷第K天時是多少人的團體正在留宿  

## Solve:
- Sol_1:
暴力破解 慢慢減 減到找到數字

- Sol_2
公式解  
仔細觀察可以發現其實就是等差數列  
只要算出K在哪個區間就行了  
下面這是等差級數的公式  
整理之後可以得到一個二次方程  
套上公式解取一下ceil即可

$$ \frac{(S+n)(n–S+1)}{2} $$

## Note:
- 這題網路上的題解顯示也可以用二分搜 但筆者沒有寫出來 於是不放
- 注意數字大小 需要用longlong