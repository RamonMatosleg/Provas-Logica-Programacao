#include <stdio.h>

int main(){
  int km;
    
  printf("Quantos km serão percorridos por essa partícula? ");
  scanf("%d", &km);
  
  km = km - 3;
  km = km % 8;
  
  if(km == 3){
    printf("O sensor 1 captou a partícula");
  }else if(km == 4){
    printf("O sensor 2 captou a partícula");
  }else if(km == 5){
    printf("O sensor 3 captou a partícula");
  }else{
    printf("Nenhum sensor captou a partícula");
  }
    
  return 0;
}
