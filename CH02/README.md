# 第二章
- [x] 2.1  

  -  
    | 类型 | 最小尺寸 | 
    | ------| ------ |
    | short | 16位 |
    | int | 16位 |
    | long | 32位 |
    | long long | 64位 |
  - 带符号的可以表示正数、0、负数；不带符号不能表示负数。  
  - double精度比float高。
- [x] 2.2  
    float 或 double。  
- [x] 2.3  
    ```
    32
    2^32-32
    32
    -32
    0
    0
    ```
- [x] 2.4  
- [x] 2.5  
    (a) 字符字面值，宽字符字面值，字符串字面值，宽字符串字面值。  
    (b) 十进制整数，十进制无符号整数，十进制长整型，十进制无符号长整型，八进制整型，十六进制整型。  
    (c) double，float，long double。  
    (d) 十进制整型，十进制无符号整型，double，double。  
- [x] 2.6  
    有区别，0开头默认是八进制整型，但是09无效。  
- [x] 2.7  
    (a) Who goes with Fergus?(换行)； string类型。  
    (b) 31.4； long double。  
    (c) 无效。  
    (d) 3.14； long double。  
- [x] 2.8  
- [x] 2.9  
    (a) 先定义再使用
    ```cpp
    int input_value;
    std::cin >> input_value;
    ```
    (b) 列表初始化时，不能从double转换到int
    ```cpp
    double i = {3.14};
    ```
    (c) wage没定义，先定义再使用
    ```cpp
    double wage;
    double salary = wage = 9999.99
    ```
    (d) 警告，精度会降低
    ```cpp
    double i = 3.14;
    ```
- [x] 2.10  
    `global_str`和`global_int`是全局变量，初始值分别为空字符串和0；`local_int`和`local_str`是局部变量，前者为内置类型变量，不初始化；后者是string类，支持无须显式初始化，为空字符串。
- [x] 2.11  
    (a) 定义，任何包含了显式初始化的声明即成为定义。  
    (b) 定义  
    (c) 声明  
- [x] 2.12  
    非法：(a) (c) (d) 
- [x] 2.13  
    `j`是100。
- [x] 2.14  
    合法，输出`100 45`。
- [x] 2.15  
    (a) 合法  
    (b) 不合法，引用类型的初始值必须是一个对象。  
    (c) 合法  
    (d) 不合法，引用必须初始化。  
- [x] 2.16  
    (a) 合法，把`d`赋值3.14159。  
    (b) 合法，把`i`的值赋值给`d`。  
    (c) 合法，把`d`的值赋值给`i`，有小数截取。  
    (d) 合法，把`d`的值赋值给`i`，有小数截取。  
- [x] 2.17  
    `10 10`
- [x] 2.18  
- [x] 2.19  
    引用是对象的别名，必须初始化，初始化后不能绑定其他别名，使用引用就是访问它绑定的对象本身；  
    指针本身是一个对象，不用在定义时赋初值，可以重新指向别的对象。  
- [x] 2.20  
    `p1`指向`i`，`i=42*42`。
- [x] 2.21  
    (a) 不合法，不能将double指针指向int。  
    (b) 不合法，不能将int变量赋给指针  
    (c) 合法  
- [x] 2.22  
    `if (p) // ...`判断`p`是否为空指针；  
    `if (*p) // ...`判断`p`指向的对象是否为0。  
- [ ] 2.23  
    不能，指针没有被初始化时会存放一个随机的地址  
- [x] 2.24  
    `void *`可以指向任何类型，`long *`不能指向int类型。  
- [x] 2.25  
    (a) `ip`指向int的指针，`i`int类型，`r`是`i`的引用。  
    (b) `i`int类型，`ip`是空指针。  
    (c) `ip`指向int的指针，`ip2`是int类型。  
- [x] 2.26  
    (a) 不合法，const对象必须初始化。  
    (b) 合法  
    (c) 合法  
    (d) 不合法，`sz`是const对象，不能被改变。  
- [ ] 2.27  
    (a) 不合法，`r`应该引用对象。  
    (b) 合法，`p2`一直指向`i2`。  
    (c) 合法，常量引用。  
    (d) 合法，`p3`是一个指向常量对象的常量指针  
    (e) 合法，指向常量的指针  
    (f) 不合法  
    (g) 合法  
- [ ] 2.28  
    (a) 不合法，常量指针必须初始化。  
    (b) 不合法，常量指针必须初始化。  
    (c) 不合法，常量int必须初始化。  
    (d) 不合法，常量指针必须初始化。  
    (e) 合法，指向常量的指针。  
- [ ] 2.29  
    (a) 合法  
    (b) 不合法，`p3`是常量指针，不能赋值给普通指针。  
    (c) 不合法，普通指针不能指向常量。  
    (d) 不合法，常量指针不能再次赋值。  
    (e) 不合法，常量指针不能再次赋值。  
    (f) 不合法，常量不能再次赋值。  
- [x] 2.30  
    `v2`顶层常量，`p2`底层常量，`p3`既是底层常量又是顶层常量，`r2`底层常量。  
- [ ] 2.31  
    (a) 合法  
    (b) 不合法，`p1`不是常量，`p2`是底层常量。  
    (c) 合法，  
    (d) 不合法，`p1`不是常量，`p2`是底层常量。  
    (e) 合法，`p2`和`p3`都是底层常量，拷贝时忽略掉顶层常量  
    
- [x] 2.32  
    合法，`p`初始化为空指针。  
- [ ] 2.33  
    `a`是int类型；`b`是int类型；`c`是int类型；`d`int指针，非法；`e`是指向int常量的指针，非法；`g`是int常量引用，非法。  
- [ ] 2.34  
- [x] 2.35  
    `j`是int类型；`k`是int常量的引用；`p`是指向int常量的指针；`j2`是int常量；`k2`是int常量的引用。  
- [x] 2.36  
    `c`是int类型，值为4；`d`是int类型的引用，`a`的引用；结束时`c=5，a=4`。  
- [ ] 2.37  
    `a`是int类型，`d`是int类型的引用，`a`的引用。  
- [x] 2.38  
    ```cpp
    int i = 0;
    auto a = i;
    decltype(i) b = i;
    int &j = i;
    auto c = j;
    decltype(j) d = j;
    ```

- [x] 2.39  
    ```
    error: expected ';' after struct definition struct Foo{}
                                                            ^
                                                            ;
    ```
- [x] 2.40  
- [ ] 2.41  
- [ ] 2.42  


   