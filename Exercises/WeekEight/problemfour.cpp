#include <iostream>

class FloatBox {
    private:
        float m_value;
    public:
        FloatBox(float value) : m_value{value}{
        }

        float value() const{
            return m_value;
        }
};

template<typename T>
class Box{
    T m_value;
    public:
        Box(T value) : m_value{value}{
        }

        T value() const{
            return m_value;
        }
};

template<typename T>
T add(T a, T b){
    return a + b;
}

template<int N, int M>
struct pow{
    enum{
        value = N * pow<N,M-1>::value
    };
};

template<int N>
struct pow<N,0>{
    enum {
        value = 1
    };
};


int main(){
    Box<float> fBox(3.0);
    Box<Box<float>> box_fbox(fBox);
    std::cout<<box_fbox.value().value()<<std::endl;



    auto value = pow<3,3>::value;
    std::cout<<"Value of 3^3: " <<value<<std::endl;
    auto value2 = pow<3,8>::value;
    std::cout<<"Value of 3^8: " <<value2<<std::endl;
    return 0;
}
