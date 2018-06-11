#include <iostream>
#include <stdio.h>
#include <array>
#include <string>
using namespace std;
/*Array: dinamic size (there's not a method to add elements), not allow reallocation,
random access, rewrite values is guaranteed, vectors are better
array[index]: without check range
arra.at(index): with check range
define tuples using arrays
*/
int main(){
  array<int, 4> numbers = {1,2,3,4};
  typedef array<string,3> words;//Sintax to define a array in c++
  words a = {"hello", "cruel", "world"};//Sintax to create a tuple
  cout << get<0>(a);
  for(int i; i < numbers.size(); i++){
    printf("Array index %d has value: %d\n", i, numbers[i]);
  }
  //numbers = {3,4,5};
  cout << numbers.size() << '\n';
  return 0;
}
