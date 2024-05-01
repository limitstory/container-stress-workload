#include <stdio.h>
#include <stdlib.h> // malloc(), free()
#include <string.h>

#define KB 1024
#define MB 1048576
#define GB 1073741824

#define DEFAULT_MEMORY_ALLOCATION 134217728 //128MB


int main() {
    
    void* ptr[100];

    while (1)
    {
        printf("Dummy Output\n");
        for (int i = 0; i < 30; i++)
        {
            ptr[i] = (void*)malloc(DEFAULT_MEMORY_ALLOCATION);
            
            if (!ptr[i])
            {
                printf("Malloc() failed\n");
                exit(EXIT_FAILURE);
            }
                
            memset(ptr[i], '*', DEFAULT_MEMORY_ALLOCATION);
            sleep(2);
        }
        printf("Malloc complete\n");
        
        for (int i = 0; i < 30; i++)
        {
            free(ptr[i]);
            sleep(1);
        }
        printf("free complete\n");  
    } 
   
   return 0;
}
