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
double Euler_1 (double t0, double q0, double dt);
void Euler_all (double s, double tk, double t0, double q0);

double fun (double y) {
        double f;
        f= (E/R)-(y/(C*R));
        return f;        
};
double Euler_1 (double t0, double q0, double dt) {
        double q;
        q=q0+dt*fun(q0);
        return q;
        cout<<"t: "<<t0+dt<<" q: "<<q<<endl;
};
void Euler_all (double s, double tk, double t0, double q0) {
        while (t0<tk) {
                q0=Euler_1 (q0, t0, ((tk-t0)/s));
                t0=t0+dt;
        };
};

int main () {
        cout<<"Enter q0"<<endl;
        double q0;
        std::cin >> q0;
        cout<<"Enter t0"<<endl;
        double t0;
        std::cin >> t0;
        cout<<"Enter tk"<<endl;
        double tk;
        std::cin >> tk;
        cout<<"Enter s"<<endl;
        double s;
        std::cin >> s;
        cout<<"Enter q0"<<endl;
        double q0;
        std::cin >> q0;
        double dt;
        dt=(tk-t0)/s;
        Euler_all (s, tk, t0, q0);
        return 0;
}
