#include <iostream>
bool if3(int);
bool ifn5(int);
bool increase(int);
bool nincrease(int);
bool big20(int);
bool ifm30(int);
int pow(int, int);
bool armst(int);

int main(){
	int a = 0;

	std::cin >> a; 
	std::cout << armst(a) << std::endl; 
/*	bool (*foo[6])(int) = {if3, ifn5, increase, nincrease, big20, ifm30};
	for(int i = 0; i < 6; ++i){
		std::cout << foo[i](n) << ' ' << std::endl; 
	}*/
}


int pow(int a, int b){
	int tmp = 1;
	while(b){
		tmp *= a;
		--b;
	}
	return tmp;
}  

bool armst(int n){
	int num = n;
	int sum = 0;
	int count = 0;
	while(n){
		n /= 10;
		++count;
	}
	n = num;
	int tmp = count;
	while(tmp){
		sum +=	pow((n % 10), count);
		n /= 10;
		--tmp;
	}
	return (sum == num);
}


bool ifm30(int n){
	int tmp = 1;
	while(n){
		tmp *= n % 10;
		n /= 10;
		if(tmp >= 30){
			return false;
		}
	}
	return true;
}


bool big20(int n){
	int tmp = 0;
	while(n){
 		tmp += n % 10;
		n /= 10;
		if(tmp > 20){
			return true;
		}
	}
	return (tmp > 20);
}

bool nincrease(int n){
	while(n > 9){
		int tmp  = n % 10;
		n /= 10;
		if((n % 10) <= tmp){
			return true;
		}
	}
	return false;
}


bool increase(int n){
	while(n){
		int tmp  = n % 10;
		n /= 10;
		if((n % 10) >= tmp){
			return false;
		}
	}
	return true;
}

bool ifn5(int n){
	while(n){
		if((n % 10) == 5){
			return false;
		}
		n /= 10;
	}
	return true;
}

bool if3(int n){
	while(n){
		if((n % 10) == 3){
			return true;
		}
		n /= 10;
	}
	return false;
}
