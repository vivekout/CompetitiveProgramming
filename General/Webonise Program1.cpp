#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	int A[9] = {1, 2, 7, -4, 6, 8, -1, 4, 6};
cin>>N;
int I = 0;
int  J = 0;
while (I < N)
{
  if( A[I] % 2 == 0 )
    {
     J = J + 1;
    }

  I = I + 1;
}
cout<<J;
	return 0;
}
