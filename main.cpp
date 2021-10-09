#include <iostream>
#include <cmath>
#include <string>

struct vect{
    double x;
    double y;
};

void initVect(vect& someVect){
    std::cout << "Please input coordinates x and y" << std::endl;
    std::cin >> someVect.x >> someVect.y;
}

vect addition(vect& a, vect& b){
    vect temp;

    temp.x = a.x + b.x;
    temp.y = a.y + b.y;
    return temp;

}
vect subtract(vect& a, vect& b){
    vect temp;

    temp.x = a.x - b.x;
    temp.y = a.y - b.y;
    return temp;

}
vect scale(vect& a, double scalar){
    vect temp;

    temp.x = a.x * scalar;
    temp.y = a.y * scalar;
    return temp;

}
double length(vect& a){
    vect temp;
    return sqrt(a.x * a.x + a.y * a.y);
}
vect normalize(vect& a){
    vect temp;
    double l= length( a);
    temp.x = a.x / l;
    temp.y = a.y / l;
    return temp;
}

int main() {
    vect a,b;
    std::string command;
    std::cout<<"Chose type of operation please: ""add"", ""subtract"", ""scale"", ""length"", ""normalize""." << std::endl;
    std::cin >> command;
    if(command == "add") {
        std::cout << "Vector a!" << std::endl;
        initVect(a);
        std::cout << "Vector b!" << std::endl;
        initVect(b);
        std::cout << "Result is x = "<< addition(a,b).x <<"; y = "<< addition(a,b).y << std::endl;
    }else if(command == "subtract") {
        std::cout << "Vector a!" << std::endl;
        initVect(a);
        std::cout << "Vector b!" << std::endl;
        initVect(b);
        std::cout << "Result is x = "<< subtract(a,b).x <<"; y = "<< subtract(a,b).y << std::endl;
    }else if(command == "scale") {
        double scalar;
        std::cout << "Vector a!" << std::endl;
        initVect(a);
        std::cout << "Input scalar" << std::endl;
        std::cin >> scalar;
        std::cout << "Result is x = "<< scale(a,scalar).x <<"; y = "<< scale(a,scalar).y << std::endl;
    }else if(command == "length") {

        std::cout << "Vector a!" << std::endl;
        initVect(a);

        std::cout << "Result is " << length(a) << std::endl;
    }else if(command == "normalize") {
        std::cout << "Vector a!" << std::endl;
        initVect(a);
        std::cout << "Result is x = " << normalize(a).x << "; y = " << normalize(a).y << std::endl;
    }

    return 0;
}
