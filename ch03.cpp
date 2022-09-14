//
// Created by yanhe on 2022/8/25.
//
#include <cctype>
#include <iostream>
#include <stdlib.h>
#include <vector>

// 使用using声明了一个名字以后，就可以直接使用这个名字，而不需要再使用std::前缀
// 每个名字都需要独立声明，一般头文件不应该使用using声明，因为头文件中的内容会被
// 包含到其他文件中去，可能出现意想不到的冲突
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void hexNum();

int main() {
  //  string s1, s2;
  //  cin >> s1 >> s2;
  //  cout << s1 << " " << s2 << endl;

  //  string s = "hello"; // 拷贝初始化，把等号右侧的值拷贝到等号左侧的对象中
  //  string s1 = s;
  //  string s2(s1);
  //  string s3("value");          // 直接初始化
  //  string s4 = string(10, 'x'); // 直接初始化

  //  string inputStr;
  //  string inputStr2;
  //  cin >> inputStr >> inputStr2;
  //  cout << inputStr << inputStr2 << endl;

  //  string input;
  //  while(cin >> input) {
  //    cout << input << endl;
  //  }

  //  string line;
  //  while (getline(cin, line)) {
  //    if (line.empty())
  //      continue;
  //    cout << "size:" << line.size() << "/" << line << endl;
  //  }

  //  // string 的 + 操作必须要保证+号两侧的对象至少有一个是string
  //  类型的，但注意不是
  //  //
  //  要求表达式中所有+的两侧都至少有一个是string类型的，是要求运算到某个加号时
  //  // 它左右两侧至少有一个是string类型的， 比如下方的s5, 虽然第二个加号左右
  //  // 两侧都是字符串字面量，但s1 + "," 的结果是string类型的，而s6这种就不行了
  //  string s1 = "hello";
  //  string s2 = "world";
  //  string s3 = s1 + "," + s2 + '\n';
  //  string s4 = s1 + ",";
  //  string s5 = s1 + "," + "world";
  //  //string s6 = "hello" + "," + s2;

  //  string test = "abce,ff./'ffs1;";
  //  decltype(test.size()) size = 0;
  //  for (auto c : test) {
  //    if (std::ispunct(c)) {
  //      size++;
  //    }
  //  }
  //  for (auto &c : test) {
  //    c = toupper(c);
  //  }
  //  auto &first = test[0];
  //  first = 'v';
  //  cout << test << endl;
  //  cout << size << endl;

  //  hexNum();
  //
  //  std::vector<int> vec;
  //  vec = {1, 2, 3, 4, 5};
  //  cout << vec[0] << endl;

  //  vector<int> v1;
  //  vector<int> v2(v1);     // 拥有v1所有元素的副本
  //  vector<int> v3 = v1;    // 拥有v1所有元素的副本
  //  vector<int> v4(10, -1); // 初始化为10个-1
  //  vector<int> v5(10);     // 包含了10个值初始化的对象，这里都是0
  //  vector<int> v6{1, 2, 9, 10}; // 初始化为{1, 2, 9, 10}
  //  vector<int> v7 = {1, 2, 9, 10}; // 等于于v6
  //  // 当表中的内容无法初始化vector时,就要考虑用这样的值构造vector对象了
  //  vector<string> v8 {10}; // 10个空字符串
  //  vector<string> v9 {10, "hello"}; //10个hello
  //  // vector<string> v9("10"); // 不能用字符串字面量构造vector对象

  //  vector<string> strings;
  //  for (int i = 0; i < 100; ++i) {
  //    strings.push_back("hello");
  //  }

  //  vector<int> v1 = {1, 2, 3, 4, 5};
  //  vector<int> v2 = {1, 9, 3, 4, 5, 6, 7, 8};
  //  auto isEmpty = v1.empty();
  //  auto size = v1.size();
  //  auto &n = v1[0];
  //  vector<int>::size_type size2 = v1.size();
  //
  //  //v1 = {0, 10}; //输出 0， 10
  //  v1 = v2; // 输出 1， 9， 3， 4， 5， 6， 7， 8
  //  for (auto &i : v1) {
  //    cout << i << endl;
  //  }

  vector<int> v1 = {1, 2, 3, 4, 5};
  auto &a = v1[0];
  a = 10;
  //++v1[0];
  cout << v1[0] << endl;

  return 0;
}

void hexNum() {
  const string hexdigits = "0123456789ABCDEF";
  cout << "Enter a hexadecimal number: " << endl;
  string hexnum;
  string::size_type n;
  while (cin >> n) {
    if (n < hexdigits.size()) {
      hexnum += hexdigits[n];
    } else {
      cout << "Invalid hexadecimal number" << endl;
    }
  }
  cout << "Your hexadecimal number is: " << hexnum << endl;
}