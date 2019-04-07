# 第五章
- [x] 5.1  
    ```cpp
    ;
    ```
    语法上需要，逻辑上不需要。  
- [x] 5.2  
    ```cpp
    {
	// ...
    }
    ```
    语法上需要一条语句，而逻辑上需要多条语句。  
- [x] 5.3  
    ```cpp
    while (val <= 10)
        sum += val, ++val;
    ```
    可读性降低了。
- [x] 5.4  
    (a) 每次循环都会重新定义一个变量，错误的。  
    (b) `while`和`if`是独立的，`if`无法访问`status`变量。  
- [x] 5.5  
- [x] 5.6  
- [x] 5.7  
    (a) `ival1 = ival2`后面少了分号。  
    (b) 应该用花括号括起来。  
    (c) `if (!ival)`应该改为`else`。  
    (d) `if (ival = 0)`应该改为`if (ival == 0)`。  
- [x] 5.8  
    C++语言规定`else`与它最近的尚未匹配的if匹配。  
- [x] 5.9  
- [x] 5.10  
- [x] 5.11  
    [std::noskipws](https://zh.cppreference.com/w/cpp/io/manip/skipws)  
- [x] 5.12  
- [x] 5.13  
    (a) 少`brake`。  
    (b) `default`中未定义`ix`。  
    (c) 应该是:  
        `case 1: case 3: case 5: case 7: case 9:`  
        `case 2: case 4: case 6: case 8: case 0:`  
    (d) `case`标签必须是整型常量表达式。  
- [x] 5.14  
- [x] 5.15  
    (a)  
    ```cpp
    int ix;
    for (ix = 0; ix != sz; ++ix){ /* ... */ }
    if (ix != sz)
    // . . .
    ```
    (b)  
    ```cpp
    int ix;
    for (; ix != sz; ++ix) { /* ... */ }
    ```
    (c)
    ```cpp
    for (int ix = 0; ix != sz; ++ix) { /*...*/ }
    ```
- [x] 5.16  
- [x] 5.17  
- [x] 5.18  
    (a) 加花括号。  
    (b) `ival`应该定义在循环外。  
    (c) `ival`应该定义在循环外。  
- [x] 5.19  
- [x] 5.20  
- [x] 5.21  
- [x] 5.22  
    ```cpp
    for (int sz = get_size(); sz <=0; sz = get_size())
        ;
    ```
- [x] 5.23  
- [x] 5.24  
- [x] 5.25  
