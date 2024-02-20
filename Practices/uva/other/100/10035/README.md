# [UVa11035 - Primary Arithmetic](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=976)

給予兩串很長的數字進行加法  
要求紀錄會進位幾次

## Solve:
- Sol_1:
    土法煉鋼  
    從個位數開始將對齊的位數相加  
    若是有進位則紀錄 並記得在下一位數加回去  
    接著一位一位慢慢算即可

- Sol_2:
    同Sol_1  
    只是將儲存方式改為string  
    避免overflow


## Note:
- 先%再/可以有效從個位數開始找到每一位數並進行運算