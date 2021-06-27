 #include <iostream>
 using namespace std;
int main(){
    int t;
    for (int i = 0; i < t; ++i) {
        int n,m;
        for (int j = 0; j < n; ++j) {
            char ar[m];
            int count=0;
            for (int k = 0; k < m; ++k) {  
                if (ar[k]=='#'){
                    count++;
                }
            }   
        }
        printf("%d",count);
    }
