#ifndef CIRCLE_H
#define CIRCLE_H
#include <math.h>
class Circle{
    public:
        Circle();
        Circle(double x , double y , double r);
        void setX(double x);
        void setY(double y);
        void setR(double r);
        double getX();
        double getY();
        double getR();
        double area;

    private:
        double x;
        double y;
        double r;
};

Circle::Circle(){
    x = 0;
    y = 0;
    r = 1;
    area = M_PI * pow(r , 2);
}

Circle::Circle(double x , double y , double r){
    x = this -> x;
    y = this -> y;
    r = this -> r;    
}

double Circle::getX(){
    return x;
}
double Circle::getY(){
    return y;
}
double Circle::getR(){
    return r;
}

void Circle::setX(double x){
    this -> x = x;
}

void Circle::setY(double y){
    this -> y = y;
}

void Circle::setR(double r){
    this -> r = r;
}

#endif