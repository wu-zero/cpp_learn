//
// Created by wyw on 19-5-26.
//

#ifndef CPP_LEARN_EXE7_27_H
#define CPP_LEARN_EXE7_27_H

#include <string>
#include <iostream>

class Screen
{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' ') {}
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){}

    char get() const {return contents[cursor];}
    char get(pos r, pos c) const {return contents[r*width+c];}

    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);

    const Screen& display(std::ostream &os) const {do_display(os); return *this;}
    Screen& display(std::ostream &os) {do_display(os); return *this;}

private:
    void do_display(std::ostream &os) const {os << contents;}
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string contents;
};

inline Screen& Screen::move(Screen::pos r, Screen::pos c) {
    cursor = r*width + c;
    return *this;
}
inline Screen& Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
inline Screen& Screen::set(Screen::pos r, Screen::pos c, char ch) {
    contents[r*width +c] = ch;
    return *this;
}
#endif //CPP_LEARN_EXE7_27_H
