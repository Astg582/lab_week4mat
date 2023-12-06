#include <iostream>
double sqrt1(double);
double ln(double);
double pow(int, int);
double ln(double x);
double log(double, double);
bool eran(int, int, int);

int main(){
	int n = 0;
	int b = 0;
	int c = 0;
	std::cin >> n;
	std::cout << log(n, 2) << std::endl;	
	return 0;
}

bool eran(int a, int b, int c){
	return (a <= b + c) && (b <= c + a) && (c <= a + b);
}

double log(double a, double b){
	return ln(a) / ln(b);
}

double pow(double n, int e){
	double tmp = 1;
	while(e){
		tmp *= n;
		--e;
	}
	return tmp;
}


double ln(double x){
	if(x < 1){
		throw std::invalid_argument(" ");
	}
	int n = 1;
	double tmp = 0;
	double r = (x - 1) / (x + 1);
	while(n != 1000){
		tmp += pow(r , (2 * n - 1)) / (2 * n - 1); 
		++n;
	} 
	return tmp * 2;
}


double sqrt1(double n){
		double x = 1;
		for(int i = 5; i != 0; --i){
			x = (x + (n / x)) / 2;
		}
	return x;
}
