#include <stdio.h>

int main(){
  int at1, at2, at3;
  int sen1, sen2, sen3;
  int qntmov = 0;
  
  printf("Insira os valores atuais\n");
  scanf("%d %d %d", &at1, &at2, &at3);
  printf("Insira a senha do cadeado\n");
  scanf("%d %d %d", &sen1, &sen2, &sen3);
  
  //Bloco número Atual 1 e Senha 1
  if(at1 - sen1 >= 0){
    if((at1 - (sen1 + 10)) * -1 < at1 - sen1){
      qntmov += (at1 - (sen1 + 10)) * -1;
    }else{
      qntmov += at1 - sen1;
    }
  }else if(at1 - sen1 < 0){
    if((sen1 - (at1 + 10)) * -1 < sen1 - at1){
      qntmov += (sen1 - (at1 + 10)) * -1;
    }else{
      qntmov += sen1 - at1;
    }
  }
  //Bloco número Atual 2 e Senha 2
  if(at2 - sen2 >= 0){
    if((at2 - (sen2 + 10)) * -1 < at2 - sen2){
      qntmov += (at2 - (sen2 + 10)) * -1;
    }else{
      qntmov += at2 - sen2;
    }
  }else if(at2 - sen2 < 0){
    if((sen2 - (at2 + 10)) * -1 < sen2 - at2){
      qntmov += (sen2 - (at2 + 10)) * -1;
    }else{
      qntmov += sen2 - at2;
    }
  }
  //Bloco número Atual 3 e Senha 3
  if(at3 - sen3 >= 0){
    if((at3 - (sen3 + 10)) * -1 < at3 - sen3){
      qntmov += (at3 - (sen3 + 10)) * -1;
    }else{
      qntmov += at3 - sen3;
    }
  }else if(at3 - sen3 < 0){
    if((sen3 - (at3 + 10)) * -1 < sen3 - at3){
      qntmov += (sen3 - (at3 + 10)) * -1;
    }else{
      qntmov += sen3 - at3;
    }
  }
  
  printf("Rolagens mínimas\n%d", qntmov);
    
  return 0;
}
