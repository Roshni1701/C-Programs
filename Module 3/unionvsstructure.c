// union vs structure
#include <stdio.h>
#include <string.h>

union unionJob
{
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
	strcpy(  uJob.name, "Roshni");
    strcpy(  sJob.name, "Ankit");
    printf("Union Name: %s", uJob.name);
    printf("\nStructure Name: %s", sJob.name);
    printf("\nsize of union = %d bytes", sizeof(uJob));
    printf("\nsize of structure = %d bytes", sizeof(sJob));
   return 0;
}