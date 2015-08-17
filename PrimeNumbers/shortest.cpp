#include <iostream>
#include <vector>
#include "stdio.h"
using namespace std;
std::vector< int > r;
/*std::vector< int > r, PrimeNumbers(int a, int b) {
  for(int i; i=a<=b; i==a++?r.push_back(i),0:0)
    for(; ++i<a&&a%i; );
  return r;
}
std::vector< int > PrimeNumbers(int a, int b) {
  for(int i; i=a<=b;)
    {
      cout << "\nstart-\n";
      printf("i:%d, a:%d, b:%d, r.size():%d\n", i, a, b, r.size());
      for(; ++i<a&&a%i; )
	{
	  printf("in>> i:%d, a:%d\n", i, a);
	}
	printf("**after>> i:%d, a:%d\n", i, a);
      if(i==a++) {
	printf("**push>> i:%d, a:%d\n", i, a);
	r.push_back(i);
      }
      printf("(end:) a:%d\n", a);
    }
  return r;
  }*/

//
std::vector< int > PrimeNumbers(int a, int b) {
  for(int i; i=a<=b;)
    {
      for(; ++i<a&&a%i; )
	{
	  //skip non-prime numbers
	}
      if(i==a++) {
	r.push_back(i);
      }
    }
  return r;
}


int main() {
  std::vector<int> a = PrimeNumbers(1, 100);
  for(int j=a.size();j--;) 
    std::cout << a[j] << "\t";
  return 0;
}
