template <class ForwardIterator, class T>
void fill (ForwardIterator first, ForwardIterator last, const T& val)
{
    while (first != last) {
    *first = val;
    ++first;
    }
}