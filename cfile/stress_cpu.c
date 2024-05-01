#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
  
int main() {

   char stress[500];
   char cpu_num[10];
   char timeout[10];

   srand(time(NULL));

   sprintf(cpu_num, "%d",4);
   sprintf(timeout, "%d", 100);

   strcpy(stress, "stress --cpu ");
   strcat(stress, cpu_num);

   system(stress);

   return 0;
}  
