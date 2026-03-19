/* links úteis
	- https://petbcc.ufscar.br/time/
	- Wikipedia
		+ [pt] https://pt.wikipedia.org/wiki/Time.h
		+ [en] https://en.wikipedia.org/wiki/C_date_and_time_functions
	- https://pubs.opengroup.org/onlinepubs/007908799/xsh/time.h.html		
		*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	time_t seg;
	seg = time(NULL);
	printf("O numero de horas desde 1 de Janeiro de 1970 e: %d\n", seg/3600);
}