#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int r, q;   
  float a, b, c;
  cin >> a >> b >> c;
  
  r = abs(a - b);
  q = abs(a - c);
  
  if (abs(r) < abs(q))
  {
      cout << ("B ") << abs(r) << endl;
  }
  else
  {
      cout << ("C ") << abs(q) << endl;
  }
  
}
