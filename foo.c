#include "foo.h"


int g_var = 1;
void set_g_var(int var)
{
	g_var = var;
}

int get_g_var(void)
{
	return g_var;
}
