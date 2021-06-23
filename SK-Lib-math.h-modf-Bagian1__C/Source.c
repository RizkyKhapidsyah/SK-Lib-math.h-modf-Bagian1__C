/* modf example */
#include <stdio.h>      /* printf */
#include <math.h>       /* modf */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, fractpart, intpart;

	param = 3.14159265;
	fractpart = modf(param, &intpart);
	printf("%f = %f + %f \n", param, intpart, fractpart);

	_getch();
	return 0;
}