/* Program 2.161 Wide Character Type
 *
 * Written by Humberto Molinares
 * Copyright 2017
 *
 */
#include<stdio.h>
#include<stddef.h>

int main(void) {
	wchar_t w_ch = L'A';

	wchar_t wch = 0;
	scanf("%lc", &wch);
	printf("You entered %lc", wch);
	return 0; }
