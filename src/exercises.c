/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  // A simple for loop that prints 0 thru 9
  for(int i=0; i<10; i++) {
    printf("%d\n", i);
  }

  //1. Rewrite the given for loop as an equivalent while loop
   /* for(int i=10; i<20; i+=3) {
    printf("%d ", i);
  }
  printf("\n"); */
  
  int i=10;
  while(i<20){

    printf("%d ", i);
    i=i+3;
  }
 
 printf("\n\n");





  //2. Rewrite the given while loop as an equivalent for loop
  
  
  
  
 /* int k = 3;
  while(k > -4) {
    printf("%d ", k);
    k--;
  }*/

  for(int k=3;k>-4;k--){
    printf("%d  ", k);
  }

  printf("\n");

  //3. Print numbers 1 thru n separated by a comma except for
  //   the last one; example: 1, 2, 3, 4, 5

  int z;
  for(z=1;z<=n;z++){
  
  printf("%d, ", z);
  }

  printf("\n\n");

  //4. Print squares of numbers 1 thru n separated by a comma
  //   except for the last one; example: 1, 4, 9, 16, 25

    for(z=1;z<=n;z++){

printf("%d  ", z*z);


    }
    printf("\n\n");

  //5. Compute the summation of numbers 1 thru n and print
  //   the result; example: 1 + 2 + 3 + 4 + 5 = 15

int sum=0;

for(z=1;z<=n;z++){
 
 sum=sum + z;

}

printf("Sum of numbers is %d", sum);
 
  //6. Compute the summation of squares of numbers 1 thru n
  //   and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55

int sum1= 0;
int sq;

for(z=1;z<=n;z++){

sq=z*z;
sum1 = sum1 + sq;

}


printf("Sum of squraes of numbers is %d", sum1);

printf("\n\n");

  //7. Compute the summation of even numbers 1 thru n and print
  //   the result; example (n=5): 2 + 4 = 6

int sum3 = 0;
for(z=1;z<=n;z++){
  
  if(z % 2 == 0){
 sum3 = sum3+z;

  }

}

 printf("Sum of even numbers is %d", sum3);

 printf("\n\n");


  //8. Write a solution to the following variation of the FizzBuzz
  //   problem.  Print out integers 1 thru n, one to a line, except
  //   that if the integer is divisible by 7 print "Foo" instead.
  //   If the integer is divisible by 11 print "Bar" instead.  If
  //   the integer is divisible by both 7 and 11, print "FooBar"
  //   instead.

for(z=1;z<=n;z++){

if((z%7==0) && (z%11==8)){
  printf("Foobar\n");
} 


 else if(z%7==0){

printf("Foo\n");


 }
  
 else if (z%11==0){
  printf("Bar\n");
 }

else{
  printf("%d\n", z);
}


}



  return 0;
}
