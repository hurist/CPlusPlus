//
// Created by yanhe on 2022/8/25.
//

// TEST_SALE_DATA_H : 预处理变量
// ifndef XXX： 如果预处理变量没定义
// ifdef XXX: 如果预处理变量已经定义
// define XXX：定义预处理变量
// 下面这段代码的意思是：
// 当一个文件引入此头文件，在预处理的过程中，如果检查到没有定义SALE_DATA_H, 则定义SALE_DATA_H
// 并将endif之前的代码都包含进来，如果已经定义SALE_DATA_H，则不再处理，防止多次引入重复定义

#ifndef TEST_SALE_DATA_H
#define TEST_SALE_DATA_H
#include <string>
struct Sale_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};
#endif //TEST_SALE_DATA_H


