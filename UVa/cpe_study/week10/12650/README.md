# [UVa12650 - Dangerous Dive](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4379)

有一隻n個人的救難小隊被派遣去執行任務
給予n和r  
代表編號1-n的之組員中回來了r個人
接著依序給予r個1-n之間的整數 $T_R$
代表這些編號的成員回來了
要求找出沒有回來的人
全員回來則輸出*

## Solve:
- Sol:
土法煉鋼  
使用一個bool array去紀錄這個編號的人回來沒  
接著遍歷一遍把沒回來的人都抓出來

## Note:
- ![fuck u latex](https://latex.codecogs.com/gif.latex?\large&space;1\leq&space;R\leq&space;N\leq&space;10^4)