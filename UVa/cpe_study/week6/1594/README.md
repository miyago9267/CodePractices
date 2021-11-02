# [UVa1594 - Ducci Sequence](https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4469)

題目較為複雜  
給定一個串列  
進行特定運算後可能出現兩種結果  
"循環"或者"歸零"  
要求判斷給定串列為哪種結果

## Solve:
進行模擬解  
題目給的大小不會超時  
儲存使用vec  
透過set去儲存該vec是否出現過來判斷是否為循環結果  
並同時比對是否為空vec 以此判斷是否為歸零  

## Note:
- 這他媽跟我說1星 雖然只要善用資料結構就可以暴力破解 可是還是有點難度
- 據說可以用弗洛依德演算法 但筆者並沒有研究過 因此暫時保留 之後研究到再補上寫法