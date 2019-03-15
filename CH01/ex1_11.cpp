//
// Created by wyw on 2019/3/15.
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//int main()
//{
//    int x1 = 0, x2 = 0;
//    cout << "please input two integers:" << endl;
//    cin >> x1 >> x2;
//    if (x1 > x2){
//        while(x2 <= x1)
//        {
//            cout << x2 << " ";
//            x2++;
//        }
//    }
//    else
//    {
//        while(x1 <= x2)
//        {
//            cout << x1 << " ";
//            x1++;
//        }
//    }
//}


void print_range(int lo, int hi)
{
    if (lo > hi) {
        print_range(hi, lo);
        return;
    }
    for (int i = lo; i <= hi; ++i){
        cout << i << " ";
    }
}

int main()
{
    int low, high;
    cout << "please input two integers:" << endl;
    cin >> low >> high;
    print_range(low, high);
    return 0;
}