#include<stdio.h>

#include<stdlib.h>

#include<string.h>



int main(){

FILE* fp;

char* p;

char returnData[64];


fp = popen("/sbin/ifconfig eth0", "r");


while (fgets(returnData, 64, fp) != NULL)

{
	char* tmp = returnData;
	
p= strtok(tmp, " ");
	
while(p)
	
{
	printf("%s\n", p);
    	
p = strtok(NULL," ");
	
}	
	      

}

pclose(fp);
}
