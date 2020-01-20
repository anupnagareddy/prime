
/*
  simple implementation of
  Sieve of Eratosthenes to find prime numbers

  takes the maximum number len upto which primes numbers have to be found
  as an argument and prints prime numbers upto len on stdout

*/

/* ----------------------------------------------------------------------------------------------------------------*/

//inlcude the neccessary headers
#include <cstdio>
#include <cstdlib>


void print(int *buffer,const int &len) {
// function to print the numbers which havent been marked
//Test
for (int i=0;i<len;i++) {
  // print only those numbers which are unmarked
  // or which numbers have their corresponding value in the buffer as 0

    if (!buffer[i])
      printf("%d\n",i);
  }
}

void mark(int* buffer,const int &start,const int& len) {
  // take start and length to iterate through multiples of start till len

  int coeff = 2;
  // start from the multiple of the number start excluding the number itself

/*
   mark all multiples of start hence essentially makie them unprime
   by assigning them the value 1
   increment coeff to move to next multiple
   break out of the loop when the multiple of i exceeded the length of buffer
*/
  for(int i=start*coeff; i<len; i=start*coeff) {
    buffer[i] = 1; // mark the number unprime
    coeff++;

  }
}

int main(int argc,char *argv[]) {

int len  = atoi(argv[1]);
// store the number of primes to be taken in a variable

int *buffer = new int[len];
// create a new buffer for number of primes to be found

/*
  start loop from 2 since all numbers are a multiple of 1
*/

for (int i=2;i<len;i++) {

// if the current number hasnt been marked then mark it or proceed to next number

  if (!buffer[i])
    mark(buffer,i,len);
}

print(buffer,len); //print the array of length len

delete[] buffer;
// deallocate memory used for the buffer and return
return 0;

}
