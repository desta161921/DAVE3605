#include <iostream>

int main(){
    /**
     * Part I/II
     while(true){
     new int[100000000L];
     }

     **/

    /**
     * Part III
     * */

    int* array_of_ints = new int[100];
    for(int i=0; i<100; i++)  {
        std::cout<<array_of_ints[i]<<std::endl;
    }


    /**
     * If we forget to delete we get a memory leak
     * */
    delete[] array_of_ints;

    return 0;
}
