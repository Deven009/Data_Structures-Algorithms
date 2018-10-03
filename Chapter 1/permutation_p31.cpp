#include <iterator>
#include <algorithm>
#include <iostream>

template<class T>
void permutations(T list[], int k, int m)
{
    do {
        copy(list, list+m+1, ostream_iterator<T>(cout, ""));
        cout << endl;
    } while (next_permutation(list, list+m+1));

    do {
        copy(list, list+m+1, ostream_iterator<T>(cout, ""));
        cout << endl;
    } while (prev_permutation(list, list+m+1));

}