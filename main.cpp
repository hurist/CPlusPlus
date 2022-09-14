#include <iostream>
#include <cstdlib>
#include <string>
#include "Sale_data.h"

extern const int GLOBAL_CONST;
const int &GC = GLOBAL_CONST;

/**
 * @author x
 */
void test() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
}

int test1() {
    return 10;
}

//int var;
//extern int var2;
//int __F = 0;

int main1() {
    //test();
//    long double ld = 3.14;
//    int a = (ld), b(ld);
    //int c = {ld}, d{ld};
//    int e;
//    std::cout << e << std::endl;
//    std::cin >> e;
//    std::cout << e << std::endl;
//    int i = 3.13;
//    std::cout << i << std::endl;
//    std::string empty = "fffff";
//    std::cout << empty << std::endl;
//    std::cout << __F << std::endl;
//    double Double = 3.14;
//
//    int i = 100, sum = 0;
//    for (int i = 0; i < 100; ++i) {
//        sum += i;
//    }
//    std::cout << sum << std::endl;

//    int var = 0;
//    int &varRef = var, var2 = var;
//    varRef = 1;
//    std::cout << var << " var2/" << var2 << std::endl;

//    int i = 0, &r = i;
//    double d = 0, &r2 = d;
//    r2 = 3.122;
//    r2 = r;
//    i = r2;
//    r = d;

//    int i, &ri = i;
//    i = 5;
//    ri = 10;
//    std::cout << i << " " << ri << std::endl;

//    int var1 = 10;
//    int var2 = 20;
//    int *p = &var1;
//    p = &var2;
//    *p = 30;
//
//    int &ref = *p;
//    int *ref2 = NULL;
//    ref = 40;
//
//    std::cout << var1 << " " << var2 << std::endl;
//    std::cout << *p << std::endl;
//
//    int i = 0;
//    int &ri = i;
//    int *pd = &ri;
//    int *&pdr = pd;
//    *pdr = 10;
//    printf("%d %d %d\n", i, ri, *pd);
//    int a = 1;
//    int c = 0;
//    int &r = c;
//    const int &rc = c;
//    // 常量指针， 指向常量的指针，表示指向的对象是是一个“常量”(实际上对象不一定是个常量，只是限制不可以通过这个指针修改对象的内容)
//    const int *pc = &c;
//    // 指针常量，指针类型的常量，指针对象本身不可变，但指针指向的对象无限制
//    int *const pcc = &c;
//    pc = &a;
//
//    c = 3;
//    *pcc = 4;
//
//    std::cout << rc << std::endl;
//    std::cout << *pc << std::endl;

//    int var = 0;
//    // constexpr 修饰指针时只对针有效，对指针指向的对象无效，要想指定指针的内容，需要单独加const
//    constexpr int  *p = nullptr; // 指针常量
//    constexpr const int *pc = nullptr; // 指向常量的指针常量

//    typedef double wages;
//    typedef wages base, *p; //申明某个类型的指针别名只需要在别名前加*号即可
//    double a = 3.14;
//    wages *w = &a;
//    base pp = 3.14;
//    p pr = &a;

//    using db = double;
//    db a = 3.14;
//    db *w = &a;

//    typedef char *pstring;
//    // 下面的两者并不相等，pstring在声明中是作为一个整体出现，代表一个指针常量，不可以将其等同于将其拆开时的含义，cstr的const修饰的时char 指针，
//    // 代表一个指针常量，而cstr2的const修饰的是char，代表的是一个指向char常量的指针
//    const pstring cstr = nullptr;
//    const char *cstr2 = nullptr;

//    //自动类型推导
//    int i = 0, &ri = i;
//    auto a = 3.14;
//    auto iRef = ri;// 引用作为初始值时，auto类型会用引用对象的类型，而不是将其作为一个引用类型
//    auto aPtr = &a;
//    const int *b = nullptr;
//    int *const c = nullptr;
//    auto e = b;
//    auto f = c; //auto会一般会忽略掉顶层const（引用会例外），但会保留底层const
//    const auto g = c; //要想推断出的auto是顶层const，需要手动指定const
//    const auto h = 6;
//    std::cout << typeid(h).name() << std::endl;
//    std::cout << typeid(g).name() << std::endl;
//    std::cout << typeid(a).name() << std::endl;
//    const int r = 0;
//    auto &rr = r;

//    // decltype 可以用来推断出一个变量的类型，可以用来推断出一个函数的返回值类型，但不会实际计算表达式的值
//    // decltype 会原样返回表达式的类型，包括顶层const和引用（auto不会）,引用仅在此处作为一个类型出现，别的地方
//    // 都作为引用对象的同义词
//    double pi = 3.14;
//    double *p = &pi;
//    const double &r = pi;
//    const double *const p2 = &pi;
//    decltype(test1()) a;
//    decltype(p) b;
//    decltype(r) c = pi;
//    decltype(p2) d = p;
//    decltype(*p) e = pi; // 解引用得到得类型是引用类型，而不是指针类型
//    decltype((pi)) f= pi; // 给变量加上括号，就成为了表达式，变量是一种作为赋值语句左值得特殊表达式，所以得到的类型是引用类型
//    e = 4;
//    std::cout << pi << std::endl;

    return 0;
}

