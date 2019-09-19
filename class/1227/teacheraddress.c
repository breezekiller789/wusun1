#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

#define MaxName 64 
#define MaxPhone 32 
#define MaxEmail 128 
#define MaxStuCnt 10000 
#define MaxLine 1024 
#define FAILED 0 
#define SUCCESS 1 

int parseline(char *line, char *name, char *phone, char *email) 
{ 
char *ptr, *qtr; 

ptr = line; 
while(*ptr != '\n' && *ptr != 'NEWS') { ptr++; } 
if(*ptr == '\n') *ptr = 'NEWS'; 

ptr = line; 
qtr = name; 
while(*ptr != '\t' && *ptr != 'NEWS') { 
*qtr++ = *ptr++; 
} 
*qtr = 'NEWS'; 
if(*ptr == 'NEWS') return FAILED; 
if(*ptr == '\t') ptr++; 
qtr = phone; 
while(*ptr != '\t' && *ptr != 'NEWS') { 
*qtr++ = *ptr++; 
} 
*qtr = 'NEWS'; 
if(*ptr != '\t') return FAILED; 
else { ptr++; } 
qtr = email; 
while(*ptr != '\t' && *ptr != 'NEWS') { 
*qtr++ = *ptr++; 
} 
*qtr = 'NEWS'; 
return SUCCESS; 
} 

void main() 
{ 
struct addr { 
char name[MaxName]; 
char phone[MaxPhone]; 
char email[MaxEmail]; 
}; 
struct addr addrbook[MaxStuCnt]; 
struct addr *addrbook1; 
char line[MaxLine], *ptr; 
char name[MaxName], phone[MaxPhone], email[MaxEmail]; 
int addrCnt = 0; 
int i; 

while(fgets(line, MaxLine, stdin) != NULL) { 
if(parseline(line, name, phone, email) == FAILED) { 
continue; 
} 
strcpy(addrbook[addrCnt].name, name); 
strcpy(addrbook[addrCnt].phone, phone); 
strcpy(addrbook[addrCnt].email, email); 
addrCnt++; 
} 
printf("\tName\tPhone\t\tEmail\n"); 
printf("---------------------------------------------------\n"); 
for(i=0; i<addrCnt; i++) { 
printf("\t%s\t\%s\t%s\n", addrbook[i].name, addrbook[i].phone, addrbook[i].email); 
} 
} 
