/* Name: Ayush Mahant
   Roll_Number: 2019353 */


#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>
#include<pthread.h>

int cx=10;
void *ob(void *va)
{printf("%s %d\n","c1",cx);
	while(cx!=-90)
	{
		cx--;
				printf("%s %d\n","Child decremented :  ",cx);
	}
	printf("%s %d\n","c2",cx);
}

int main()
{
pthread_t id;
pthread_create(&id,NULL,ob,NULL);

printf("%s %d\n","p1",cx);
while(cx!=100)
	{
		cx++;
		printf("%s %d\n","Parent incremented : ",cx);
	}
	printf("%s %d\n","p2",cx);
pthread_join(id,NULL);

//printf("%d\n",cx);
exit(0);}
