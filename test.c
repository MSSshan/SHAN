#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(int argc, const char *argv[])
{
	linklist H, H1, p;
	H = linklist_create();
	H1 = linklist_create();
	int sum;
	if (H == NULL) {
		printf("linklist create failed!\n");
		return -1;
	}

	linklist_tail_insert(H, 5);
	linklist_tail_insert(H, 3);
	linklist_tail_insert(H, 4);
	linklist_tail_insert(H, 7);
	linklist_tail_insert(H, 20);
	linklist_tail_insert(H, 15);
	linklist_tail_insert(H, 12);

	linklist_show(H);
	linklist_sort_ascend(H);
	linklist_show(H);

	H = linklist_free(H);


	return 0;
}
