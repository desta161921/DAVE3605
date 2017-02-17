#include <iostream>


/**
 * Part IV
 * */
void print_int_array(int* arr, int size){
    for(int i=0; i<size; i++){
        std::cout<<*(arr+i)<<std::endl;
    }
}

/**
 * Part VI - the constant size way
 *
 * Problem: Works only on arrays of size 10
 * */

void print_int_array_cpp(int (&a)[10]){
    for(int i=0; i<10; i++){
        std::cout<<a[i]<<std::endl;
    }
}

/**
 *
 * Part VI - the better way
 * 
 * */

template<class T, size_t N>
void print_int_array_cpp(int(&a)[N]){
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int at_three_v1 = a[2];
    int at_three_v2 = *(a+2);

    int at_thirteen = a[12];
    std::cout<<at_thirteen<<std::endl;


    print_int_array(a, 10);


    /**
     * Part V
     * */
    int* arr = new int[20];
    for(int i=19; i>=0; i--){
        *(arr+i) = i;
    }
    print_int_array(arr,20);

    /**
     * Part VI test
     * */
    print_int_array_cpp(a);
    print_int_array_cpp(arr);
    return 0;
}
