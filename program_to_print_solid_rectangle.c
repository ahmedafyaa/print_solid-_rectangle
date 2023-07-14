#include <stdio.h>
#define uint8 char 
#define uint32 int
int main(void) {
 uint8 counter_1=0,counter_2=0;
  for(counter_1=0;counter_1<3;counter_1++){
    for(counter_2=0;counter_2<5;counter_2++)
      printf("*");
    printf("\n");
  }
  
}