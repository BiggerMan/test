#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int getTime(void)
{
	time_t t;
	char *wday[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	t=time(NULL);
	printf("current time:%s",ctime(&t));

	struct tm *p=NULL;
	time(&t);
	p=localtime(&t);
	printf("%d/%d/%d ",1900+p->tm_year,1+p->tm_mon,p->tm_mday);
	printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);
	return 0;
}


