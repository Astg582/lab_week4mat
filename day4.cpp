#include <iostream>
void K_mul(int*, int);
void print(int*, int n);
void sum(int* arr, int* arr1, int* arrc, int n);
void fill(int* arr, int n);
void fill(double* arr, int n);
void print(double*, int n);
double scal(double*, double*,  int n);
double pow(double a, int e);
double scrt(double a);
double erkar(double* arr, int n);
double cos(double* arr, double* arr1, int n);

int main(){
    const int s = 100;
    int n = 0;
    std::cout << "enter size your arr" << std::endl;
    std::cin >> n;
    
    int arrc[s] = {0};
    double arr1[s];
    double arr[s];
    fill(arr, n);
    fill(arr1, n);

    std::cout << cos(arr, arr1, n) << std::endl;;
}

double cos(double* arr, double* arr1, int n){
    double a = erkar(arr, n);
    double b = erkar(arr1, n);
    return scal(arr, arr1, n) / (a * b);

}

double erkar(double* arr, int n){
    double tmp = 0;
    for(int i = 0; i < n; ++i){
        tmp += pow(arr[i], 2);
    }
    return scrt(tmp);
}

double scrt(double a){
    double x = 1;
    int end = 10;
    while(end){
        x = (x + (a / x )) / 2;
        --end;
    }
    return x;
}

double pow(double a, int e){
    double tmp = 1;
    while(e){
        tmp *= a;
        --e;
    }
    return tmp;
}

double scal(double* arr, double* arr1, int n){
    double tmp = 0;
    for(int i = 0; i < n; ++i){
        tmp += arr[i] * arr1[i];
    }
    return tmp;
}

void fill(int* arr, int n){
    std::cout << "enter to arr valibles " << std::endl;
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
}

void fill(double* arr, int n){
    std::cout << "enter to arr valibles " << std::endl;
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
}

void sum(int* arr, int* arr1, int* arrc, int n){
    for(int i = 0; i < n; ++i){
        arrc[i] = arr[i] + arr1[i]; 
    }
}

void print(double* arr, int n){
    for(int i = 0; i < n; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void print(int* arr, int n){
    for(int i = 0; i < n; ++i){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

void K_mul(int* arr, int n){
    int k = 0;
    std::cout << "enter to k " << std::endl;
    std::cin >> k;
    for(int i = 0; i < n; ++i){
        arr[i] *= k;
    }
}
