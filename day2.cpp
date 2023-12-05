#include <iostream>
#include <cmath>

int pow1 (int);
bool putag(int a, int b, int c);
double nerq(double a, double b);
double sin(double a, double b);
double cos(double a, double b);
double tg(double a, double b);
double ctg(double a, double b);
int fact(int a);
double pow1(int i, int x);
double h(int i, int x);
double sum(int n, int x);
bool ideal(int a);
bool parz(int a);
int parzn(int n);

int main(){
    double a = 0;
    double b = 0;
    
    std::cin >> a;
    std::cout << parzn(a) << std::endl;
}

bool parz(int a){
    if( a < 2 ){
        return false;
    }
    for(int i = 2; i <= a / 2; ++i){
        if(!(a % i)){
            return false;
        }
    } 
    return true;
}

int parzn(int n){
    if(n < 1){
        return - 1;
    }
    int j = 0;
    int i = 1;
    while(n != j){
            ++i;
            if(parz(i)){
                ++j;
            }
    }
    return i;
}

bool ideal(int a){
    int d = 0;
    int i = 1;
    while(i <= a / 2){
        if(!(a % i)){
            d += i;
        }
        ++i;
    }
    return d == a;
}

double sum(int n, int x){
    int i = 1;
    double s = 0;
    while(i <= n){
        s += h(i , x);
        ++i;
    }
    return s;
}

double pow1(int i, int x){
    if(x == 0){
        return 1;
    }
    return i * pow1(i, x - 1);
}

double h(int i, int x){
    int k = (i & 1) ? -1 : 1; 
    return k * (pow1(x, i + 1) / (fact(3 * i) + pow(2, i + 1)));
}

int fact(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a * fact(a - 1);
}

double nerq(double a, double b){
    return std::sqrt(pow1(a) + pow1(b));
}

double sin(double a, double b){
    return a / (nerq(a, b));
}

double cos(double a, double b){
    return b / std::sqrt(pow1(a) + pow1(b));
}

double tg(double a, double b){
    return a / b;
}

double ctg(double a, double b){
    return b / a;
}



bool putag(int a, int b, int c){
    if(a > b && a > c){
        return pow1(a) == pow1(b) + pow1(c);
    }else if(b > a && b > c){
        return pow1(b) == pow1(a) + pow1(c);
    }else {
        return pow1(c) == pow1(a) + pow1(b);
    }    
    return false;
}

int pow1 (int a){
    int b = 2;
    int tmp = 1;
    while(b){
        tmp *= a;
        --b;
    }
    return tmp;
}
