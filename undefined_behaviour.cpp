#include <iostream>
#include <cmath>
using namespace std;

struct Cls {
    Cls(char c, double d, int i){
        cout << "&this: " << this << endl;
        this->c = c;
        //cout << "&c: " << & this->c << "\t" << (int* ) & this->c << endl;
        this->d = d;
        cout << "&d: " << & this->d << endl;
        this->i = i;
        cout << "&i: " << & this->i << endl;
    }

private:
    char c;
    double d;
    int i;
};

void spy(Cls* cls) {
    cout << cls << endl;
    double* pd = (double* ) cls;
    pd++;
    //cout << "pd = " <<  pd << endl;
    cout << "d = " << *pd << endl;
    int* pi = (int* ) ++pd;
    //cout << "pi = " << pi << endl;
    cout << "i = " << *pi << endl;
    char* pc = (char* ) cls;
    //cout << "pc = " << pc << endl;
    cout << "c = " << *pc << endl;
}

void spy2(Cls& cls) {
    Cls *p = &cls;
    double* pd = (double* ) p;
    pd++;
    //cout << "pd = " <<  pd << endl;
    cout << "d = " << *pd << endl;
    int* pi = (int* ) ++pd;
    //cout << "pi = " << pi << endl;
    cout << "i = " << *pi << endl;
    char* pc = (char* ) p;
    //cout << "pc = " << pc << endl;
    cout << "c = " << *pc << endl;
}

char &get_c(Cls &cls) {
    /* ... */
    Cls *p = &cls;
    char* pc = (char* )p;
    return *pc;
}

double &get_d(Cls &cls) {
    /* ... */
    Cls *p = &cls;
    double* pd = (double* ) p;
    return *++pd;
}

int &get_i(Cls &cls) {
    /* ... */
    Cls *p = &cls;
    double* pd = (double* ) p;
    pd++;
    //cout << "*pd = " << *pd << endl;
    int* pi = (int *) ++pd;
    return *pi;
}


int main() {
    Cls cls('z', 12.345, 7);
    //cout << &cls << endl;
    //spy2(cls);
    cout << get_c(cls) << endl ;
    cout << get_d(cls) << endl ;
    cout << get_i(cls) << endl ;
    return  0;
}
