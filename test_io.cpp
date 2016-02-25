//
// Created by tangsong on 2/22/16.
//
#include <iostream>


void helloCPlus();
void readUnknow();
void countCountinueSame();

/**
 * "main1111"
 */
int main()
{
//    helloCPlus();

    // 1.1.4.3 读取数量不定的输入数据
//    readUnknow();

    // 1.1.4.6
    countCountinueSame();
    return 0;
}

void helloCPlus() {
    std::__1::cout << "Enter two number : " << std::__1::endl;
    int v1 = 0, v2 = 0;
    std::__1::cin >> v1 >> v2;
    std::__1::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::__1::endl;
    std::__1::cout << "The * of " << v1 << " and " << v2 << " is " << v1 * v2 << std::__1::endl;


    std::__1::cout << "The sum of ";
    std::__1::cout << v1;
    std::__1::cout << " and ";
    std::__1::cout << v1 + v2;
    std::__1::cout << std::__1::endl;


    std::__1::cout << "/*";
    std::__1::cout << "*/";
//    std::cout << /* "*/" */;
    std::__1::cout << /* "*/" /* "/*" */;

    std::__1::cout << std::__1::endl;

    //1.1.4
    int sum = 0, val = 1;
    //只要val的值小于10,while循环就会持续执行
    while (val <= 10) {
        sum += val;
        ++val;
    }

    std::__1::cout << "Sum of 1 to 10 inclusive is " << sum << std::__1::endl;
}


void readUnknow() {
    int sum = 0, value = 0;
    while (std::cin >> value) {
        sum += value;
    }

    std::cout << "Sum is : " << sum << std::endl;
}

void countCountinueSame() {
    int currVal = 0, val = 0;
    if (std:: cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            } else {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }

}

