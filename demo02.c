#include <stdio.h> 
int main(){
    int a = 10;
    int b = 1;
    int c = 1;

          if(a>b)
            if(a>c){
                printf("a is greater\n");
            }
            else
                   {
                    printf("c is greater\n");
                   } 
          else if(b>c)
                       {
                        printf("b is greter\n");
                       }          
          else{
            printf("c is greater\n");
          }            

}
