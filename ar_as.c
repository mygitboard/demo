
#include"he.h"
ar_as(int *arr[],int c){
srand(time(0));
for(int i=0;i<c;i++){
        arr[i]=rand() % 100 +1;
    }
}
