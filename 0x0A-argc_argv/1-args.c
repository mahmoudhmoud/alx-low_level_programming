#include <stdio.h>


/**
 *main-kayaktab aadad dyal arguments lidazo
 *@argc:aadad commandline  arguments.
 *@argv:pointer to an array dyal commmand line arguments.
 *Return:zero-success, non-zero-fail.
 */


int main(int argc, char *argv[] __attribute__((unused)))

{

	printf("%d\n", argc - 1);
	return (0);

}
