# [UVa993 - Product of digits ](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=934)

給予一個非負整數N  
要求找到一串最小的數字Q  
滿足Q的各位數字"積"等於N  
若Q不存在則輸出-1

## Solve:
- Sol:
每一個各位數字最多只有0-9可以用   
0和1不考慮    
所以只有2-9可以使用  
那我們就由9慢慢試著除除看除到沒辦法除  
最後能除盡代表這個Q存在

## Note:
- UVa和VJ可以過 但瘋狂程設不給 操你媽