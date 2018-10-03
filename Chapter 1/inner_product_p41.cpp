template <class InputIterator1, class InputIterator2, class T>
T inner_product (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, T init)
{
    while (first1!=last1) {
    init += (*first1)*(*first2);
    // or: init = binary_op1 (init, binary_op2(*first1,*first2));
    ++first1; ++first2;
    }
    return init;
}