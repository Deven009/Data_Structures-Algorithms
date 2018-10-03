#include<iostream>
#include<utility>

template <class InputIterator1, class InputIterator2>
pair<InputIterator1, InputIterator2> mismatch (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2 )
{
  while ( (first1!=last1) && (*first1==*first2) )  // or: pred(*first1,*first2), for version 2
  { 
      ++first1; 
      ++first2; 
      }
  return std::make_pair(first1,first2);
}