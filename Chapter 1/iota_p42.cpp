template <class ForwardIterator, class T>
void iota (ForwardIterator first, ForwardIterator last, T val)
{
    while (first != last) {
    *first = val;
    ++first;
    ++val;
    }
}