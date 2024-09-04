#include <iostream>
#include <iomanip> 

int main() {

    float faturamento_sp = 67836.43;
    float faturamento_rj = 36678.66;
    float faturamento_mg = 29229.88;
    float faturamento_es = 27165.48;
    float faturamento_outros = 19849.53;


    float total_faturamento = faturamento_sp + faturamento_rj + faturamento_mg + faturamento_es + faturamento_outros;

   
   float percentual_sp = (faturamento_sp / total_faturamento) * 100;
   float percentual_rj = (faturamento_rj / total_faturamento) * 100;
   float percentual_mg = (faturamento_mg / total_faturamento) * 100;
   float percentual_es = (faturamento_es / total_faturamento) * 100;
   float percentual_outros = (faturamento_outros / total_faturamento) * 100;

  
      printf("Percentual de representação de cada estado:\n");
      printf("SP: %.2f\n",percentual_sp);
      printf("RJ: %.2f\n",percentual_rj);
      printf("MG: %.2f\n",percentual_mg);
      printf("ES %.2f\n",percentual_mg);
      printf("OUTROS: %.2f\n",percentual_outros);

    return 0;
}