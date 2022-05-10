# [UVA - 1401](https://github.com/miyago9267/codingPractices)

給予一個字串S  
再給予N個小於len(S)的字串  
判斷最少用幾個子字串可以組合出字串S

## Solve:
- Sol:  
    建立字典樹  
    接著配合dp去紀錄可能性  
    此方法使用struct來建立trie  

- Sol2:  
    還是建立字典樹  
    只是改成用物件去刻trie  

- Img Sol:  
    暴力搜尋不知道會怎樣
    沒試過不要存trie用力dp

## Note:
- 小心測資非常多 非常吃效能 最好不要用string 改用char[]等方式降低時間
- (筆者就是因為這樣吃了超過30次TLE+WA(vj:12+zj:25))