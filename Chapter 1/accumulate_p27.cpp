template <class InputIterator, class T>
T accumulate (InputIterator first, InputIterator last, T init)
{
  while (first != last) {
    init += *first;  // or: init=binary_op(init,*first) for the binary_op version
    ++first;
  }
  return init;
}
