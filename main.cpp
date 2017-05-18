#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cstring>
#include <ostream>
#define E 10
#define R 1
#define C 1
using namespace std;

double fun (double y);
double Euler_1 (double t0, double q0, double tk, double s);
void Euler_all (int s, double tk, double s, double t0, double q0);

void fun (double y) {
        double f;
        f= (E/R)-(y/(C*R));
        return f;        
};
void Euler_1 (double q0, double t0, double dt) {
        double q;
        q=q0+dt*fun(q0);
        return q;
        cout<<"t: "<<t0+dt<<" q: "<<q<<endl;
};
void Euler_all (int s, double tk, double s, double t0, double q0) {
        
};

int main () {
        cout<<"Enter q0"<<endl;
        double q0;
        std::cin >> q0;
        cout<<"Enter t0"<<endl;
        double t0;
        std::cin >> t0;
        cout<<"Enter dt"<<endl;
        double dt;
        std::cin >> dt;
        cout<<"Enter s"<<endl;
        double s;
        std::cin >> s;
        cout<<"Enter q0"<<endl;
        double q0;
        std::cin >> q0;
}
