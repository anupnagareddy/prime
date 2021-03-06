
# Sieve of Eratosthenes

## Usage on linux :

  compile program using
  `g++ prime.cc -o prime` or any name you want

  assuming executable prime in the current directory
  `./prime 1000` prints 1000 prime numbers on stdout
  
  `./prime 1000000 > primes.txt` genrates a file with primes upto a million
    included primes.txt as an example

----------------------------------------
## History
In mathematics, the sieve of Eratosthenes is a simple,
ancient algorithm for finding all prime numbers up to any given limit.

It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2.
The multiples of a given prime are generated as a sequence of numbers starting from that prime, with
constant difference between them that is equal to that prime. This is the sieve's key distinction from using trial division to sequentially
test each candidate number for divisibility by each prime.

It is one of the most efficient ways to find all of the smaller primes.
https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
has an excellent animation of how the prime numbers are marked

-----------------------------------------

## Sieve of Eratosthenes flowgraph:

1->  Make an array of n integers

2->  Initially, let i be equal 2, the first prime number.

3->  Starting from i, count up in increments of i and mark each of these numbers greater than i itself in the list. These numbers will be 2i, 3i, 4i, etc.;
      Note that some of them may have already been marked.

4->  Find the first number greater than i in the list that is not marked.
      If there was no such number then move to step 6.

5->  Otherwise, let i now equal this number (which is the next prime), and repeat from step 3

6-> Print the array of integers whcih havent been marked  (they are the prime numbers)
