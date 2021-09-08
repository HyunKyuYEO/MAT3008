#include<stdio.h>
#include<math.h>
float get_feps();
double get_deps();

int main() {
	int ibeta, it, irnd, ngrd, machep, negep, iexp, minexp, maxexp;
	float eps, epsneg, xmin, xmax;

	machar(&ibeta, &it, &irnd, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp, &eps
	, &epsneg, &xmin, &xmax);

	printf("eps %.23f\n", eps);

	double deps, depsneg, dxmin, dxmax;
	machar_double(&ibeta, &it, &irnd, &irnd, &ngrd, &machep, &negep, &iexp, &minexp, &maxexp, &deps
		, &depsneg, &dxmin, &dxmax);
		
	printf("deps %.52f\n", deps);

	eps = get_feps();
	deps = get_deps();
	printf("feps = %.23f\n", eps);
	printf("deps = %.52f\n", deps);
}

float get_feps() {
	
	float eps = 1;
	do {
		eps /= 2;
	} while (eps + 1 > 1);

	return eps;
}

double get_deps() {
	double deps = 1;
	do {
		deps /= 2;
	} while (deps + 1 > 1);
	
	return deps;
}
