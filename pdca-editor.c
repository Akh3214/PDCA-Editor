#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;
	time_t timer;
	time(&timer);
	struct tm *tm_now;
	tm_now = localtime(&timer);
	
	const int date = (tm_now->tm_year + 1900) * 10000 + (tm_now->tm_mon + 1)*100 + tm_now->tm_mday;
	for(;;) {
	scanf("%d", &n);
	printf("%d\n", dateplusdays(date, n));
	}
	return EXIT_SUCCESS;
}
