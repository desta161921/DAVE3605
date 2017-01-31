
/** 
 * Solution extra
 * Recursive version
 *
 * PS: on my desktop the recursion limit seems to be 1 million calls.. scary
 * 
int factorial(int);

int main(){
    std::cout<<"Factorial of 4: "<<factorial(4)<<std::endl;
    std::cout<<"Factorial of 5: "<<factorial(5)<<std::endl;
    std::cout<<"Factorial of 6: "<<factorial(6)<<std::endl;
    std::cout<<"Factorial of 10k: "<<factorial(1000000)<<std::endl;
    return 0;
}

int factorial(int n){
    if(n==0)
	return 1;
    return n*factorial(n-1);
}

**/
