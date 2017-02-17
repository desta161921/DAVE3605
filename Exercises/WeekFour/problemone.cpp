#include <iostream>


/**
 *
 * Part III
 * */
void set_to_one(int*a, int*b){
    *a = 1;
    *b = 1;
}

/**
 * Part IV
 * */
void calculate_area_square(int* w, int* l, int* a){
    *a = *w * *l;
}


int main(){
    /** 
     * Part I
     * */
    char c0, c1;
    float f0, f1;
    double d0, d1;

    char* pc0 = &c0;
    char* pc1 = &c1;
    float* pf0 = &f0;
    float* pf1 = &f1;
    double* pd0 = &d0;
    double* pd1 = &d1;

    /*
     * Part II
     */

    std::cout<<"char,char: " <<c0<<" , "<<c1<<std::endl;
    std::cout<<"char*, char* :"<<(void*)pc0<<", "<<(void*)pc1<<std::endl;
    std::cout<<"float,float: " <<f0<<" , "<<f1<<std::endl;
    std::cout<<"float*, float*: " <<pf0<<" , "<<pf1<<std::endl;
    std::cout<<"double, double :"<<d0<<", "<<d1<<std::endl;
    std::cout<<"double*, double* :"<<pd0<<", "<<pd1<<std::endl;
    return 0;
}
