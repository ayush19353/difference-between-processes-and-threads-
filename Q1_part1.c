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

int cx=10;

int main()
{
pid_t pid=fork();
int* dd;


 
if(pid<0)
{


	printf("%s\n","No child process created" );
}






else if(pid==0)
{
printf("%s %d\n","c1",cx);

while(cx!=-90)
	{cx--;printf("%s%d\n","c ",cx);
	}
printf("%s %d\n","c2",cx);


}
else if(pid>0)
{
printf("%s %d\n","p1",cx);

while(cx!=100)
	{cx++;printf("%s%d\n","p ",cx);
}
//printf("%d\n",cx );
printf("%s %d","p2",cx);
waitpid(pid,dd,0);

}


//printf("%d\n",cx);


return 0;}

