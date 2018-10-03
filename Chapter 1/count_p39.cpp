#include <iterator>

template <class _Iterator> 
struct iterator_traits {
    typedef typename _Iterator::iterator_category iterator_category; 
    typedef typename _Iterator::value_type value_type;
    typedef typename _Iterator::difference_type difference_type;
    typedef typename _Iterator::pointer pointer;
    typedef typename _Iterator::reference reference;
};

template <class InputIterator, class T>
typename iterator_traits<InputIterator>::difference_type
count (InputIterator first, InputIterator last, const T& val)
{
    typename iterator_traits<InputIterator>::difference_type ret = 0;
    while (first != last) {
        if (*first == val) ++ret;
        ++first;
        }
    return ret;
}