# [UVa11332 - Summing Digits](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307)

令f(x) = x的各位數字和  
而g(x) 為重複進行f(x)直至結果小於10  
給予x 求g(x)

## Solve:
- Sol:
看到題目敘述就決定遞迴了
若是f(x)做完依舊大於10
那就再遞迴一次


## Note:
- 這題的範圍是2*10^9 接近int_max了 小心為妙