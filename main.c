#include <stdio.h>

#include "foo.h"

int main(int argc, char *argv[])
{

	printf("g_var is %d\n", g_var);
	set_g_var(20);

	printf("g_var is %d\n", get_g_var());
	return 0;

}
