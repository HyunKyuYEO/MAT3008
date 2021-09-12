#include<stdio.h>
#include<math.h>
float float_eps();
double double_eps();

void machar(int* ibeta, int* it, int* irnd, int* ngrd, int* machep, int* negep,
	int* iexp, int* minexp, int* maxexp, float* eps, float* epsneg,
	float* xmin, float* xmax);

void machar_double(int* ibeta, int* it, int* irnd, int* ngrd, int* machep, int* negep,
	int* iexp, int* minexp, int* maxexp, double* eps, double* epsneg,
	double* xmin, double* xmax);

int main() {
	int ibeta, it, irnd, ngrd, machep, negep, iexp, minexp, maxexp;
	float eps, epsneg, xmin, xmax;

	machar(&ibeta, &it, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp, &eps
	, &epsneg, &xmin, &xmax);

	printf("float eps by machar %.23f\n", eps);

	double deps, depsneg, dxmin, dxmax;
	machar_double(&ibeta, &it, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp, &deps
		, &depsneg, &dxmin, &dxmax);
		
	printf("double eps by the machar_double %.52f\n", deps);
	
	printf("\n");

	eps = float_eps();
	deps = double_eps();
	printf("float eps by my own function = %.23f\n", eps);
	printf("double eps by my own function = %.52f\n", deps);

	return 0;
}

float float_eps() {
	float eps = 1;
	do {
		eps /= 2;
	} while (eps + 1 > 1);

	return eps*2;
}

double double_eps() {
	double deps = 1;
	do {
		deps /= 2;
	} while (deps + 1 > 1);
	
	return deps*2;
}
