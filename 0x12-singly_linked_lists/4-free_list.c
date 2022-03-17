#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
	free(head);
}
