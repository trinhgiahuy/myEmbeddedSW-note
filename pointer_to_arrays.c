#include <stdio.h>

int myArray[3][4] = {
  {0,3,6,9}, 
  {1,4,7,19},
  {2,5,8,11}
};

int main(){
  printf("%p %p %p\n", myArr, myArr+1, myArr+2);
  
  int (*arr)[4] = myArray;
  printf("%p\n", arr);
  arr++;
  printf("%p\n", arr);
  arr++;
  printf("%p\n", arr);
  arr++;
  
  arr = myArr;
  printf("%d %d\n", (*arr)[0] , (*arr)[1]));
  printf("%d %d\n", *(*arr + 0), *(*arr+1));
  printf("%d %d\n", *(*(arr+1) + 0)), *(*(arr+1) + 1);
  printf("%d %d\n", *(*(arr+2) + 0)), *(*(arr+2) + 1);
  
  return 0;
}
