# set_colors

将0，1，2三个数字按照大小顺序排列好。

思路：以数字大小为key，个数为value，存放在map中。
     for循环：while循环直到该key的个数已经替换完成（当map个数大于零，用其key替换原本位置的数字，个数--，for循环指针i++），
             flag++，表示下次存放要下一个数
