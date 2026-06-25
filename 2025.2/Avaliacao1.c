#include <stdio.h>

int main(){
  int k;
  int x, y;

  printf("Qual o tamanho da quadra? ");
  scanf("%d", &k);
  printf("Coordenadas de onde a bola caiu ");
  scanf("%d %d", &x, &y);
    
  if(y > k || y < 0){
    printf("Essa bola caiu fora");
  }else if(x > k || x < k * -1){
    printf("Essa bola caiu fora");
  }else{
    printf("Essa bola caiu dentro");
  }
    
  return 0;
}
