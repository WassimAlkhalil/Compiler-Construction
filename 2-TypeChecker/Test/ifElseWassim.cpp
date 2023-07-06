
/**************************** WASSIM **************************/

struct test
{
    int a;
};

void foo(){

    return;
}

double compare(double firstValue, double secondValue){
    if (firstValue >= secondValue) {
        return firstValue;
    } else {
        return secondValue;
    }
}
double division(double dividend, double divisor){
     double result = dividend / divisor;
    return result;
}
int main(){

    int a = 5;

    if (a >= 0) {
       division(2.0,4.0);
    } else {
       compare(2.0,4.0);
    }
    return 0;
}