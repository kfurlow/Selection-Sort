#include <stdio.h>

int main(void) {
  int a[9] = {9,8,6,4,3,1,7,2,5};
  int length = sizeof(a) / 4;
  
  printf("Before Selection Sort: ");
  for(int i = 0; i < length; i++){
    printf("%d ", a[i]);
  }
  printf("\n");

  for(int i = 0; i < length-1; i++){
    int min = i;
    
    for(int j = i+1; j < length; j++){
      if(a[min] > a[j]){
        min = j;
      }
    }
    
    int temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
  

  
  printf("After Selection Sort: ");
  for(int i = 0; i < length; i++){
    printf("%d ", a[i]);
  }
  printf("\n");

  
  return 0;
}