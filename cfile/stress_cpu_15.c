#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
  
int main() {

   char stress[500];
   char cpu_num[10];
   char timeout[10];

   srand(time(NULL));

   sprintf(cpu_num, "%d",12);
   sprintf(timeout, "%d", 15);

   strcpy(stress, "stress --cpu ");
   strcat(stress, cpu_num);
   strcat(stress, " --timeout ");
   strcat(stress, timeout);
   strcat(stress, "s");

   system(stress);

   return 0;
}  
