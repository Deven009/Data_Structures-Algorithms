#include <iterator>
#include <algorithm>
#include <iostream>

template<class T>
void permutations(T list[], int k, int m)
{// 生成 list[k:m] 的所有排列
 // 假设 k<=m
    // 将排列逐个输出
    do {
        copy(list, list+m+1, ostream_iterator<T>(cout, ""));
        cout << endl;
    } while (next_permutation(list, list+m+1));
}