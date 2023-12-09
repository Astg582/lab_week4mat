#include <iostream>
double ln(double);
double pow(double, int);
double log(double, double);
int x2(int);


int main(){
    int n = 0;
    int x = 0;
    std::cin >> x;

    std::cout << x2(x) << std::endl;
}

int x2(int num){
    int c = 1;
    while(c){
        if(pow(2, c) == num){
            return num;
        }else if(pow(2, c) > num){
            return pow(2, c - 1);
        }
        ++c;
    }
    return 0;
}

double pow(double a, int b){
    double tmp = 1;
    while(b){
        tmp *= a;
        --b;
    }
    return tmp;
}

double log(double a, double b){
    return ln(a) / ln(b);
}

double ln(double n){
   int e = 1;
   double rec = 0;
   double div = (n - 1) / (n + 1);
   while(e != 100){
        rec += pow(div, (2 * e - 1)) / (2 * e - 1);
        ++e;
   }
   return 2 * rec;
}
