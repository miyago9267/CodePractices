# [UVa10041 - Vito's family](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=982)

某人要找距離所有親朋好友距離總和最小的屋子  
找到這個最小的距離總和  
給予r個直線上的座標S1~Sr  
找出一點n離所有S的距離總和最小  
要求這個"距離總和"

## Solve:
- Sol:  
要找出數線上距離所有數最小的點  
就是找出sort後的中位數  
然後對於每個S點去對該數求距離並加總即可

## Note:
- 中位數算法:  
    * 若r為奇數: `直接找中點`
    * 若r為偶數: `找出最中間兩個數並取平均`