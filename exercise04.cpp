#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &length, int &width);

// Do not change the main() function
int main() {
   int length, width;

  cout<<"input length : ";
  cin>> length;

  cout<<"input width : ";
  cin>>width ;
  
   input(length, width);
   print(length, width);
  
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
   cout << "Length : " << len << ", Width  : " << wth << endl;
}

// Implement the Input Function here
void input(int &length, int &width)
{
  length = 10;
  width = 5;
}