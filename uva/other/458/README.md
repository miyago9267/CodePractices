# [UVa458 - The Decoder](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=399)

給定一串加密過的字串  
要求輸出解密後的文字

## Solve:
簡單粗暴 直接讀入字串  
題目加密方式為key固定為-7的Caesar Cipher
將字串中每個字元ascii code減去7即可

## Note:
- 無