#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

void rest_number(){
  int N;
  cin >> N;
  int count = 1;
  while (count <= 10000) {
    if (count % N == 2){
      cout << count << '\n';
    }
    count ++;
  }
}

void mult_table(){
  int N;
  int count = 1;
  cin >> N;
  while(count <= 10){
    printf("%d x %d = %d\n", count, N, count * N);
    count ++;
  }
}

void average(){
  vector<float> averages;
  int N;
  cin >> N;
  float x,a,b,c,average;
  while(N != 0){
    cin >> a >> b >> c;
    average = (a*2.0 + b*3.0 + c*5.0) / 10.0;

    averages.push_back(average);

    N -= 1;
  }
  for (int i = 0; i < averages.size(); i++){
    printf("%.1f\n", averages[i]);
  }
 }

void highest_position(){
  vector<int> numbers;
  int first, num;
  cin >> first;
  numbers.push_back(first);
  for (int i = 0; i <= 98; i++){
    cin >> num;
    numbers.push_back(num);
    if (num > first) first = num;
  }

  int e = 0;
  while (numbers[e] != first){
    e++;
  }
  cout << first << endl << e+1 << endl;
}

int main(){
  //mult_table();
  //average();
  highest_position();
  return 0;
}
