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

#define LEN 150

void main()
{
	char buff[LEN];
	time_t tempoCorrente;
	struct tm *data_atual; //ponteiro para estrutura definida da biblioteca
	
	/* -----------------------------------------------------------
	Variáveis da struct tm:
	
	int tm_sec -> segundos de 0 a 59
	int tm_min -> minutos de 0 a 59
	int tm_hour -> horas de 0 a 24
	int tm_mday -> dia do mês de 1 a 31
	int tm_mon -> mês do ano de 0 a 11
	int tm_year -> ano, a partir de 1900
	int tm_wday -> dia da semana de 0 (domingo) a 6 (sábado)
	int tm_yday -> dia do ano de 1 a 365
	int tm_isdst -> indica horário de verão se for diferente de 0
	----------------------------------------------------------- */
	
	// Obtendo hora corrente
	tempoCorrente = time(NULL);
	
	// Convertendo para hora local
	data_atual = localtime(&tempoCorrente);
	
	// Mostrando hora e data no formato padrão
	printf("%s", asctime(data_atual));
	
	strftime(buff, LEN, "Hoje e %A, %b %d.\n", data_atual);
	fputs(buff, stdout);
	strftime(buff, LEN, "A hora e %I:%M:%S %p.\n", data_atual);
	fputs(buff, stdout);
	
	/* 3.1 */
	printf("\nDia do ano:\t%d\n", data_atual->tm_yday);
}