#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
FILE* fp;
char* p;
char returnData[64];
char h[100][100];
int x =0;
fp = popen("/sbin/ifconfig eth0", "r");
while (fgets(returnData, 64, fp) != NULL)
{
	char* tmp = returnData;
	p= strtok(tmp, " ");
	while(p)
	{
	strcpy(h[x], p);
	x++;
    	p = strtok(NULL," ");
	}	
	      
}
printf("The IP %s\n",h[7]);
	
pclose(fp);
}
