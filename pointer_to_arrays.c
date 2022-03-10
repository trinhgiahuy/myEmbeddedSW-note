#include <stdio.h>

int myArray[3][4] = {
  {0,3,6,9}, 
  {1,4,7,19},
  {2,5,8,11}
};

int main(){
  printf("%p %p %p\n", myArr, myArr+1, myArr+2);
  
  int *arr[4] ;             //Array of 4 pointers (4*4 or 4*8 bytes dpend on 32/64 bits platform)
  int (*arr)[4] = myArray;  //pointer to array of 4 integer, initialize to first array of myAeeay
  printf("%p\n", arr);
  arr++;
  printf("%p\n", arr);
  arr++;
  printf("%p\n", arr);
  arr++;
  
  arr = myArr;
  printf("%d %d\n", (*arr)[0] , (*arr)[1]));                //Exp: 0 3
  printf("%d %d\n", *(*arr + 0), *(*arr+1));                //Exp: 0 1
  printf("%d %d\n", *(*(arr+1) + 0)), *(*(arr+1) + 1);      //Exp: 1 4
  printf("%d %d\n", *(*(arr+2) + 0)), *(*(arr+2) + 1);      //Exp: 2 5
  
  return 0;
}
