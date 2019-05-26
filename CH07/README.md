# 第七章
- [x] 7.1  
- [x] 7.2  
- [x] 7.3  
- [x] 7.4  
- [x] 7.5  
    应该是const的，常量的Person对象也需要使用这些函数操作。  
- [x] 7.6  
- [x] 7.7  
- [x] 7.8  
    因为read函数要改变对象的内容，而print函数不用。  
- [x] 7.9  
- [x] 7.10  
    `read`函数的返回值是`istream`对象，if语句中条件部分的作用是从输入流中读取数据给两个`data`对象。
- [x] 7.11  
- [x] 7.12  
- [x] 7.13  
- [x] 7.14  
    ```cpp
    Sales_data(const std::string &s, unsigned n, double p) {
        bookNo = s;
        units_sold = n;
        revevue = p*n;
    }
    ```
    
- [x] 7.15  
- [x] 7.16  
    在类的定义中对于访问说明符出现的位置和次数没有限定。每个访问说明符指定了接下来的成员的访问级别，其有效范围直到出现下一个访问说明符或者达到类的结尾处为止。  
    如果某个成员能够在整个程序内都被访问，那么它应该定义为`public`;如果某个成员只能在类内部访问，那么它应该定义为`private`。  
- [x] 7.17  
    `class`和`struct`的唯一区别是默认的访问级别不同。  
- [x] 7.18  
    将类内部分成员设置为外部不可见，而提供部分接口给外面，这样的行为叫做封装。封装隐藏了具体的实现，当我们使用某个抽象数据类型时，只需要考虑它提供什么接口操作，而不用去考虑它的具体实现。  
- [x] 7.19  
    构造函数、`getName()`、`getAddress()` 将设为`public`。`name`和`address`将设为`private`。函数是暴露给外部的接口，因此要设为`public`；而数据则应该隐藏让外部不可见。  
- [x] 7.20  
    当其他类或者函数想要访问当前类的私有变量时，这个时候应该用友元。  
    利：与当前类有关的接口函数能直接访问类的私有变量。  
    弊：牺牲了封装性与可维护性。  
- [x] 7.21  
- [x] 7.22  
- [x] 7.23
- [x] 7.24
- [ ] 7.25
    能。Screen 的成员只有内置类型和 string，因此能安全地依赖于拷贝和赋值操作的默认版本。管理动态内存的类则不能依赖于拷贝和赋值操作的默认版本，而且也应该尽量使用string 和 vector 来避免动态管理内存的复杂性。  
- [x] 7.26
- [x] 7.27
- [x] 7.28
    如果返回类型是`Screen`，那么move返回的是`*this`的一个副本，因此`set`函数只能改变临时副本而不能改变`myScreen`的值。  
- [x] 7.29
    正确  
- [x] 7.30
    优点：意图更明显，函数的参数可以与成员同名。  
    缺点：有时候显得有点多余。  
- [ ] 7.31
    ```cpp
    class Y;
    class X{
        Y* y = nullptr;
    }
    class Y{
        X x;
    }
    ```
- [x] 7.32
- [ ] 7.33
    未定义标识符`pos`，改为：
    ```cpp
    Screen::pos Screen::size() const
    {
	    return height * width;
    }
    ```
- [x] 7.34
    在`dummy_fcn(pos height)`函数中会出现未定义的标识符`pos`。
- [ ] 7.35
    [答案](https://github.com/Mooophy/Cpp-Primer/issues/390#issuecomment-168286067)
- [ ] 7.36
    改为：
    ```cpp
    struct X {
        X (int i, int j): base(i), rem(base % j) {}
        int base, rem;
    };
    ```
- [x] 7.37
    ```cpp
    Sales_data first_item(cin); // 使用 Sales_data(std::istream &is) ; 各成员值从输入流中读取
    Sales_data next; // 使用默认构造函数  bookNo = "", cnt = 0, revenue = 0.0
    Sales_data last("9-999-99999-9"); // 使用 Sales_data(std::string s = "");   bookNo = "9-999-99999-9", cnt = 0, revenue = 0.0S
    ```
- [x] 7.38
    ```cpp
    Sales_data(std::istream &is = std::cin) { read(is, *this); }
    ```
- [ ] 7.39
- [ ] 7.40
- [ ] 7.41
- [ ] 7.42
