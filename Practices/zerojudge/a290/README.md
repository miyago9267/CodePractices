# [A290 - 新手訓練系列 ~ 圖論](https://zerojudge.tw/ShowProblem?problemid=a290)

給定城市數量和一堆路徑  
找出A, B程式之間是否可以連通

## Solve:
- Sol_1:  
用對於每個城市  
用vec去存可以到哪裡  
再dfs遍歷

- Sol_2:  
同上 但是改用bfs

## Note:
- 道路是有向圖
- M < 10^6 小心使用
- 建議加輸出入優化 不然可能TLE