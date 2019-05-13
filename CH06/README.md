# 第六章
- [x] 6.1  
    形参出现在函数定义;  
    实参是函数调用的实际值。
- [x] 6.2  
    (a) 改为：
    ```
    string f() {
        string s;
        // ...
        return s;
    ```
    }
    (b) 改为：`void f2(int i) { /* ... */ }`  
    (c) 改为：`int calc(int v1, int v2) { /* ... */ }`  
    (d) 改为：`double square (double x) { return x * x; }`  
- [x] 6.3  
- [x] 6.4  
- [x] 6.5  
- [x] 6.6  
    形参定义在函数形参列表里；局部变量定义在代码块里；局部静态变量定义在执行路径第一次经过定义语句，程序终止是才被销毁。  
- [x] 6.7  
- [x] 6.8  
- [x] 6.9  
    [g++编译](https://blog.csdn.net/dengshuai_super/article/details/51766786)
- [x] 6.10  
- [x] 6.11  
- [x] 6.12 
    引用好用。  
- [x] 6.13  
    前者是值传递，函数不会改变原来的实参； 
    后者是传引用参数，函数可以改变原来的实参。
- [x] 6.14  
- [x] 6.15  
    `const string &s`避免拷贝用引用，避免改`s`的内容用const；  
    `c`只需要`c`的值，用普通的值传参；  
    `string::size_type &occurs`传结果到外部用引用。  
    `s`是普通引用可能会改变`s`的值。  
    `occurs`如果是常量引用，不能改它的值，没法返回结果。  

- [x] 6.16  
    局限性在于常量字符串和字符串字面值无法作为该函数的实参，改为：
    ```cpp
    bool is_empty(const string &s) { return s.empty(); }
    ```
- [x] 6.17 
    第一个函数使用常量引用，第二个函数使用普通引用。  
- [ ] 6.18  
    (a) 
    ```cpp
    bool compare(const matrix &m1, const matrix &m2);
    ```
    (b) 
    ```cpp
    vector<int>::iterator change_val(int, vector<int>::iterator);
    ```
- [x] 6.19   
    (a) 不合法。`calc`只有一个参数。  
    (b) 合法  
    (c) 合法  
    (d) 合法  
- [x] 6.20  
    应该尽量将引用形参设为常量引用，除非有明确的目的是为了改变这个引用变量。如果形参应该是常量引用，而我们将其设为了普通引用，那么常量实参将无法作用于普通引用形参。  
- [x] 6.21  
    `const int *` 类型  
- [x] 6.22  
- [x] 6.23  
- [x] 6.24  
    数组做实参，被自动转换为指向首元素的指针。改为：
    ```cpp
    void print(const int (&ia)[10])
    {
        for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
    }
    ```
- [x] 6.25  
- [x] 6.26  
- [x] 6.27  
- [x] 6.28  
    const string &类型。  
- [x] 6.29  
    应该使用常量引用类型，`initializer_lis`t对象中的元素都是常量，我们无法修改`initializer_list`对象中的元素的值。  
- [x] 6.30  
    ```
    error: return-statement with no value, in function returning ‘bool’ [-fpermissive] return;
                                                                                       ^
    ```
- [x] 6.31  
    当返回的引用的对象是局部变量时，返回的引用无效；当我们希望返回的对象被修改时，返回常量的引用无效。  
- [x] 6.32  
    合法，`get`根据索引获得数组元素的引用，整个程序更改`ia`值等于索引。  
- [x] 6.33  
- [x] 6.34  
    输入为负数会出错。  
- [x] 6.35  
    后置递减使用的是当前值，这里需要传递减1之后的值。  
- [x] 6.36  
    ```cpp
    string (&fun())[10];
- [ ] 6.37  
    ```cpp
    typedef str_arr string[10];
    str_arr &fun();

    auto fun()->string(&)[10];

    string s[10];
    decltype(s) &fun();
- [ ] 6.38  
    ```cpp
    decltype(odd)& arrPtr(int i)
    {
        return (i % 2) ? odd : even;
    }
    ```
- [x] 6.39  
    (a) 非法，因为顶层const 不影响传入函数的对象，两个声明等价。  
    (b) 非法，返回值与重载无关。  
    (c) 合法。  
- [x] 6.40  
    (a) 正确。  
    (b) 错误，某个形参被赋予了默认值，那么它之后的形参都必须要有默认值。  
- [x] 6.41  
    (a) 非法，第一个参数不是默认参数，最少需要一个实参。  
    (b) 合法。  
    (c) 合法，但与初衷不符。字符`*`被解释成int类型传入到了第二个参数。而初衷是要传给第三个参数。  
- [x] 6.42  
- [x] 6.43  
    全部放到头文件。  
- [x] 6.44  
    ```cpp
    inline bool is_shorter(const string &lft, const string &rht){
        return lft.size() < rht.size();
    }
    ```
- [x] 6.45  
    内联用于优化规模小、流程直接、频繁调用的函数。  
- [x] 6.46  
    不能，constexpr函数的返回值类型及所有形参都得是字面值类型。  
- [x] 6.47  
- [x] 6.48  
    不合理，应该是`assert(s == sought)`。  
- [x] 6.49  
    候选函数：与被调用函数同名，并且其声明在调用点可见。  
    可行函数：形参与实参的数量相等，并且每个实参类型与对应的形参类型相同或者能转换成形参的类型。  
- [x] 6.50  
    (a) `void f(int, int);`和`void f(double, double = 3.14);`可行，调用具有二义性而不合法,。  
    (b) `void f(int);`可行，合法。  
    (c) `void f(int, int);`和`void f(double, double = 3.14);`可行，前者是最佳匹配，合法。  
    (d) `void f(int, int);`和`void f(double, double = 3.14);`可行，后者是最佳匹配，合法。  
- [x] 6.51  
- [x] 6.52  
    (a) 第3级，类型提升实现的匹配。
    (b) 第4级，算术类型转换实现的匹配。
- [x] 6.53  
    (c) 不合法，顶层const不影响传入函数的对象。
- [x] 6.54  
    ```cpp
    int func(int, int);
    vector<decltype(func)*> v;
    ```
- [x] 6.55  
- [x] 6.56  

