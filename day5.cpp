#include <iostream>  
const int s = 3;
void fill(int arr[][s]);
void print(int arr[][s]);
bool sim1(int arr[][s]);
void sum1(int arr[][s], int arr1[][s]);
void mul1(int arr[][s], int arr1[][s], int arrz[][s]);
bool mog1(int arr[][s]);
void tamb(int arr[][s]);

int main(){
    int arr[s][s];
    fill(arr);
    print(arr);
    tamb(arr);
}

void tamb(int arr[][s]){
    for(int i = 0; i < s; ++i){
        int max_t = INT_MIN;
        int* index_t = nullptr;
        int min_s = INT_MAX;
        int* index_s = nullptr;
        for(int j = 0; j < s; ++j){
            if(arr[i][j] > max_t){
                max_t = arr[i][j];
                index_t = &arr[i][j];
            }
            if(arr[j][i] < min_s){
                min_s = arr[j][i];
                index_s = &arr[i][j];
            }
        }
       if(max_t == min_s){
              std::cout <<  *(index_t) << std::endl;
       }
        
    }
}

bool mog1(int arr[][s]){
    for(int i = 0; i < s; ++i){
        int tox = 0;
        int sun = 0;
        int dg = 0;
        int d0 = 0;
        for(int j = 0; j < s; ++j){
            tox += arr[i][j];
            sun += arr[j][i];
            dg += arr[j][j];
            d0 += arr[j][s-1-j];
        }
        if(tox != sun || sun != dg || dg != tox || d0 != dg || d0 != sun || d0 != tox){
                return false;
            
        }
    }
    return true;
}

void mul1(int arr[][s], int arr1[][s], int arrz[][s]){    
    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j){
            int tmp = 0;
            for(int k  = 0; k < s; ++k){
                tmp += arr[i][k] * arr1[k][j];  
            }
            arrz[i][j] = tmp;
        }
    }
}


void sum1(int arr[][s], int arr1[][s]){
    for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j){
            arr[i][j] = arr1[i][j];
        }
    }
}


bool sim1(int arr[][s]){
   for(int i = 0; i < s / 2; ++i){
        for(int j = i + 1; j < s; ++j){
            if(arr[i][j] != arr[j][i]){
                return false;
            }
        }
   }
    return true;
}

void print(int arr[][s]){
    std::cout << std::endl;
    for(int i = 0; i < s; ++i){
        std::cout << std::endl;
        for(int j = 0; j < s; ++j){
            std::cout << arr[i][j] << " ";
        }
    }
}

void fill(int arr[][s]){
  std::cout << "fill arr" << std::endl;
  for(int i = 0; i < s; ++i){
        for(int j = 0; j < s; ++j){
            std::cin >> arr[i][j];
           
        }
    }
}
