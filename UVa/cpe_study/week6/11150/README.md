# [UVa11150 - Cola](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2091)

買可樂 可樂喝完的空罐子三罐可以換一瓶  
求最多可以喝到多少可樂  

## Solve:
- Sol_1:
    模擬解  
    考慮兩個狀況  
    1. 當現有的瓶子(空的+沒喝的)大於等於3  
    喝完之後可以用空瓶再換  
    不斷先喝再換運算至不到總瓶數3瓶

    2. 當現有的瓶子剛好兩瓶 
    可以借1個空罐換一罐來喝然後把空罐子還回去

- Sol_2:
    透過觀察 可以發現結果  
    n = 1時 sum = 1   
    n = 2時 sum = 3 跟前面差2  
    n = 3時 sum = 4 跟前面差1  
    n = 4時 sum = 6 跟前面差2  
    後面以此類推  
    可以發現都是1.5倍  
    所以直接乘1.5即可
 
## Note:
- ~~像筆者一樣直接在local測完觀察完然後套公式小心被教授靠北~~