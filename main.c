
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int ret;
	char *n = NULL;
	char c = 'a';
	char *p = &c;

	printf("%d: ",ft_printf("%%\n"));
	printf("%d: ",printf("%%\n"));
	printf("%d: ",ft_printf("%c\n",'a'));
	printf("%d: ",printf("%c\n",'a'));
	printf("%d: ",ft_printf("%s\n","Hell word!"));
	printf("%d: ",printf("%s\n","Hell word!"));
	printf("%d: ",ft_printf("%d\n",-1234));
	printf("%d: ",printf("%d\n",-1234));
	printf("%d: ",ft_printf("%i\n",-1234));
	printf("%d: ",printf("%i\n",-1234));
	printf("%d: ",ft_printf("%u\n",56789));
	printf("%d: ",printf("%u\n",56789));
	printf("%d: ",ft_printf("%x\n",1000));
	printf("%d: ",printf("%x\n",1000));
	printf("%d: ",ft_printf("%X\n",1000));
	printf("%d: ",printf("%X\n",1000));
	printf("%d: ",ft_printf("%p\n",p));
	printf("%d: ",printf("%p\n",p));

	ft_printf("\033[34m===========================\033[m\n");
	printf("%d: ",ft_printf("%d\n",0));
	printf("%d: ",printf("%d\n",0));
	printf("%d: ",ft_printf("%d\n",INT_MIN));
	printf("%d: ",printf("%d\n",INT_MIN));
	printf("%d: ",ft_printf("%s\n",""));
	printf("%d: ",printf("%s\n",""));
	printf("%d: ",ft_printf("%s\n",n));
	printf("%d: ",printf("%s\n",n));
	printf("%d: ",ft_printf("%c is pointed %p. %d is %s.\n",c,p,100,"hundred"));
	printf("%d: ",printf("%c is pointed %p. %d is %s.\n",c,p,100,"hundred"));

	return 0;
}
