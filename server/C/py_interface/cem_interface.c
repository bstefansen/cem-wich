#include <float.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cem_interface.h"
#include "cem/globals.h"

#define return_on_error(stmt)                 \
  {                                           \
    const int status = (stmt);                \
    if (status != SUCCESS) return status; \
  }

int cem_initialize(void);
int cem_update(void);
int cem_finalize(void);


int initialize() {
	int status = cem_initialize();

	if (status == 0)
		return SUCCESS;
	else
		return FAILURE;
}

int update() {
	if (cem_update() == 0)
		return SUCCESS;
	else
		return FAILURE;
}

int finalize() {
	cem_finalize();
	return SUCCESS;
}

int add_nums(int a, int b);

int testFunc(int a, int b) {
	return add_nums(a, b);
}
