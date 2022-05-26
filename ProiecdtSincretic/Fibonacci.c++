#include <iostream>

using namespace std;
int main() {

  int i, n;

  
  int t1 = 0, t2 = 1;

  
  int nextTerm = t1 + t2;

  
  cout<<"Enter the number of terms: ";
  cin >> n;

  
  cout << "Fibonacci Series: " << t1 << " "<< t2 << " ";

  
  for (i = 3; i <= n; ++i) {
    cout << nextTerm << " ";
    
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}