#include <iostream>


typedef unsigned int RGBA;
typedef unsigned char colorpart;

int main(){

    RGBA color = 0x01020304;
    colorpart* alpha = (colorpart*) &color;
    colorpart* blue = alpha +1;
    colorpart* green = alpha + 2;
    colorpart* red = alpha +3;

    /**
     *
     * Brighten the red part of the color:
     * */
    std::cout<<"Color before brightening red: " <<std::hex<<color<<std::endl;
    (*red)++;
    std::cout<<"Color after brightening red: "<<std::hex<<color<<std::endl;

}
