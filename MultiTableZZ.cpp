#include <stdio.h>

#pragma warning(disable: 4326 4996 6031)

void main()
{
	void MultiTbl();
	MultiTbl();
	/*****
	for (int nDan = 2; nDan <= 9; nDan++) {
		for (int nRow = 2; nRow <= 9; nRow++)
			printf("%d x %d = %2d\n", nDan, nRow, nDan * nRow);
		putchar('\n');
	}
	*****/
}

void MultiTbl()
{
	void MultiTblDan(int nDan);
	for (int i = 2; i <= 9; i++) {
		MultiTblDan(i);
		putchar('\n');
	}
}

void MultiTblDan(int nDan)
{
	void MultiTblRow(int nDan, int nRow);
	for (int i = 2; i <= 9; i++)
		MultiTblRow(nDan, i);
}

void MultiTblRow(int nDan, int nRow)
{
	printf("%d x %d = %2d\n", nDan, nRow, nDan * nRow);
}
