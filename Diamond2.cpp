

#include <iostream>
using namespace std;
int main(){
  int i;
  int j;
  int row;
  int s;
  cin >> row;
  s = row-1;
  for(i=1; i<=row; i++)
  {
    for(j=1; j<=s; j++)
      cout << " ";
    s--;
    for(j=1; j<=(2*i-1); j++)
      cout << "*";
    cout << endl;
  }
  s = 1;
  for( i = 1 ;  i <= (row - 1 ); i++){
    for(j=1; j<=s; j++)
      cout << " ";
    s++;
    for(j = 1 ; j <= (2 * ( row - i ) - 1 ); j++)
      cout << "*";
    cout << endl;
  }
  cout << endl;
}
