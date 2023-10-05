/*
The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these squares is :
4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80 

Hint:
    See Fibonacci sequence

Ref:
    http://oeis.org/A000045

The function perimeter has for parameter n where n + 1 is the number of squares (they are numbered from 0 to n) and returns the total perimeter of all the squares.
    perimeter(5)  should return 80
    perimeter(7)  should return 216
*/

typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n){
    ull fib[n+1];
    ull sum = 0;
    for (int i=0; i<=n+1; i++){
      if (i == 0 || i == 1) fib[i] = i;
      else fib[i] = fib[i-1] + fib[i-2];
    }
    for (int j=1; j<=n+1; j++){
      sum += fib[j];
    }
    return sum*4;
  }
};
