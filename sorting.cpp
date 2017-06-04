#include <iostream>
#include <algorithm>

using namespace std;

int main () {
          int A[];
          int n;
          for ( int i=0 ; i < n ; i++ )
          { int temp = A[ i ];
            int j =i;
              while( j > 0 && temp < A[j-1] )
              { A[j]=A[j-1];
                j=j-1;
              }
            A[j] = temp;
            return 0;
}
          
          
