
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	
	Led[i] = 1;
	
	if ( i == 0 )
	{
		Led[7] = 0;
	}
	else
	{
		Led[i - 1] = 0;
	}
	i++;
	if (i > 7) i = 0;

}
