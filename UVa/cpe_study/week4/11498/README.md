# [UVa11498 - Division of Nlogonia](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2493)

題目給定一個起始座標  
再給予其他座標  
判斷該座標位於起始座標的什麼方位

## Solve:  
利用相對座標去判斷東西南北  
設起始座標為(x, y)  
x' - x 若為正則位於東 否則西  
y' - y 若為正則位於北 否則南

## Note:  
- 方位是8方位
- 若是和初始座標在同一個水平或垂直線上會輸出`divisa`