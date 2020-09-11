/*
  라이선스 정보 입력
*/

#include <stdio.h>

int main(int argc , char* argv[] ) {
   
   int age = 0;
   char name[50];
  
   printf("이름을 입력하세요");
   scanf("%s",name);
   printf("나이를 입력하세요");
   scanf("%d" , &age);
  
   printf("name : %d" , name);
   printf("age : %d" , age);
   return 0;
}
