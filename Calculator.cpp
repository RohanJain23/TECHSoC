#include <iostream>
using namespace std;
int main()
{   
float a;
float b;
int opr;
int opr2;
int c;
float d;
float y;
float A;
float B;
float C;
float x;
float z;
float m;
float n;
int i;
int disc;
int deno;
int result = 1;


cout << "Which operation would you like to perform?  \n";
cout << "Write: \n";
cout << "1 for addition \n";
cout << "2 for subtraction \n";
cout << "3 for multiplication \n";
cout << "4 for division \n";
cout << "5 for trigonometric functions \n";
cout << "6 for exponential functions \n";
cout << "7 for quadratic functions \n";
cout << "Any other number for logarithmic functions \n";
// if(opr == 5){
// cin >> c;    
// }
// else{
// cin >> a;
// cin >> b;
// }
// cout << "Enter values for a and b. \n";
// cout <<"a=";
// cin >> a;
// cout <<"b=";
// cin >> b;
cin >> opr;
if(opr == 1){
    cout << "Enter values for a and b: \n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a+b=";
    cout << a+b;
}
else if (opr == 2){
    cout << "Enter values for a and b: \n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a-b=";
    cout << a-b;
}
else if (opr == 3){
    cout << "Enter values for a and b: \n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a*b=";
    cout << a*b;
}
else if (opr == 4){
    cout << "Enter values for a and b: \n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "a/b=";
    cout << a/b;
}
else if (opr == 5){
    cout << "Which trigonometric operation would you like to perform? \n";
    cout << "Write: \n";
    cout << "1 for sin function \n";
    cout << "2 for cos function \n";
    cout << "3 for tan function \n";
    cin >> opr2;
    if (opr2 == 1){
        cout << "Give value of angle 'c' in degrees \n";
        cout << "c=";
        cin >> c;
        c= c%360;
        d= c*3.14/180;
        y = d - d*d*d/6 + d*d*d*d*d/120 - d*d*d*d*d*d*d/5040;
        cout << "sin c=";
        cout << y;
    }
    else if (opr2 == 2){
        cout << "Give value of angle 'c' in degrees \n";
        cout << "c=";
        cin >> c;
        c= c%360;
        d= c*3.14/180;
        y = 1 - d*d/2 + d*d*d*d/24 - d*d*d*d*d*d/720;
        cout << "cos c=";
        cout << y;
    }
    else if (opr2 == 3){
        cout << "Give value of angle 'c' in degrees \n";
        cout << "c=";
        cin >> c;    
        c= c%360;
        d= c*3.14/180;
        y =  d + d*d*d/3 + d*d*d*d*d*2/15 + d*d*d*d*d*d*d*17/315 + d*d*d*d*d*d*d*d*d*62/2835 + d*d*d*d*d*d*d*d*d*d*d*150/10000;
        cout << "tan c=";
        cout << y;
    }
    }
else if (opr == 6){
    cout << "Enter the base 'a' and exponent 'b'. \n";
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    for (i = 0; i < b; i++)
{
    result *= a;
}
    cout << "a^b=";
    cout << result;
}
else if (opr == 7){
    cout << "Enter the values of A,B and C in the following quadratic equation: ";
    cout << "Ax^2 + Bx + C \n";
    cout << "A=";
    cin >> A;
    cout << "B=";
    cin >> B;
    cout << "C=";
    cin >> C;
    m = B*B - 4*A*C;
    if (m > 0){
        m = n;
        for(i = 0; i<10 ; i++)
        {   
             m = (m+n/m)/2;
        }
        x = (-B + m)/(2*A);
        z = (-B - m)/(2*A);
        cout << "The Roots of the equation are " << z << "and " << x;
    }
    else if (B*B - 4*A*C == 0){
        x = -B/(2*A);
        cout << "The Root of the equation is " << x;
    }
    else{
    cout << "The roots are imaginary!!";
    }
}

else{
    cout << "Enter the number the natural log of which you want to find \n";
    cout << "a=";
    cin >> a;
    if (0 < a && a < 2){
        b = (a-1) - ((a-1)*(a-1))/2 + ((a-1)*(a-1)*(a-1))/3 - ((a-1)*(a-1)*(a-1)*(a-1))/4 + ((a-1)*(a-1)*(a-1)*(a-1)*(a-1))/5 - ((a-1)*(a-1)*(a-1)*(a-1)*(a-1)*(a-1))/6;
        cout << "log a= ";
        cout << b;
    }
    else if (a > 2){
        cout << "Unable to compute.";
    }
    else {
        cout << "Inappropriate value of a!!";
    }
}
return 0;
}


 