
#include <iostream>
#include <stdio.h>

int main()

{
    
 int i,dias=0,ndias=0;
 float faturamento[30] = {22174.1664,24537.6698,26139.6134,0,0,26742.6612,0,
                          42889.2258,46251.174,11191.4722,0,0,3847.4823,373.7838,
                          2659.7563,48924.2448,18419.2614,0,0,35240.1826,43829.1667,
                          18235.6852,4355.0662,13327.1025,0,0,25681.8318,1718.1221,
                          13220.495,8414.91}, maior = 0, menor,media,contador;
                    
     menor=faturamento[0];     
     contador=0;
    for(i = 0; i<30; i++)
    

      
      {  if (faturamento[i]>0)
      
      {   dias=dias+1;
          contador+=faturamento[i];}
         if (faturamento[i]>maior)
          { maior=faturamento[i];}
        if (faturamento[i]>0 && faturamento[i]<menor)
          { menor=faturamento[i];}
          
         
      }
       media=contador/dias;
    for(i = 0; i<30; i++){
       if (faturamento[i]>media)
        { ndias=ndias+1;}}
      
      
      printf("Faturamento total: %f\n",contador);
      printf("Maior faturamento foi: %f\n",maior);
      printf("Menor faturamento foi: %f\n",menor);
      printf("Média do faturamento foi: %f\n",media);
      printf("Número de dias em que faturamento diário foi superior a média mensal: %i",ndias);
     return 0;
}