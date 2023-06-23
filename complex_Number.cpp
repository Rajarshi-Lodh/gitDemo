#include<iostream>
using namespace std;
struct complex_number
{
    float r,i;
};
void display(float r1,float r2, float c1,float c2);
void addComplex(float r1,float r2, float c1,float c2);
void subtractComplex(float r1,float r2, float c1,float c2);
void multiplyComplex(float r1,float r2, float c1,float c2);
void divisionComplex(float r1,float r2, float c1,float c2);
int main()
{
    struct complex_number c1,c2;
    int o;
    cout<<"Enter the real part of 1st complex number: ";
    cin>>c1.r;
    cout<<"Enter the imaginary part of 1st complex number: ";
    cin>>c1.i;
    cout<<"Enter the real part of 1st complex number: ";
    cin>>c2.r;
    cout<<"Enter the imaginary part of 1st complex number: ";
    cin>>c2.i;
    display(c1.r,c1.i,c2.r,c2.i);
    do
    {
        cout<<"Enter the operation to do (+ - * /):\nEnter 1 --> Addition\nEnter 2 --> Subtraction\nEnter 3 --> Multiplication\nEnter 4 --> Division\nEnter 0 --> Exit\n";
        cin>>o;
        switch(o)
        {
            case 1:
                addComplex(c1.r,c1.i,c2.r,c2.i);
                break;
            case 2:
                subtractComplex(c1.r,c1.i,c2.r,c2.i);
                break;
            case 3:
                multiplyComplex(c1.r,c1.i,c2.r,c2.i);
                break;
            case 4:
                divisionComplex(c1.r,c1.i,c2.r,c2.i);
            default:
                if(o!=0)
                   cout<<"Invalid Operation";
        }
    } while (o!=0);
    return 0;
}
void display(float r1,float c1, float r2,float c2)
{
    cout<<"1st complex number: "<<r1<<" + i"<<c1<<endl;
    cout<<"1st complex number: "<<r2<<" + i"<<c2<<endl;
}
void addComplex(float r1,float c1, float r2,float c2)
{
    float r,c;
    r=r1+r2;
    c=c1+c2;
    if(c>=0)
        cout<<"Addition result: "<<r<<" + i"<<c<<endl;
    else
        cout<<"Addition result: "<<r<<" - i"<<-c<<endl;
}
void subtractComplex(float r1,float c1, float r2,float c2)
{
    float r,c;
    r=r1-r2;
    c=c1-c2;
    if(c>=0)
        cout<<"Subtraction result: "<<r<<" + i"<<c<<endl;
    else
        cout<<"Subtraction result: "<<r<<" - i"<<-c<<endl;
}
void multiplyComplex(float r1,float c1, float r2,float c2)
{
    float r,c;
    r=(r1)*(r2)-(c1)*(c2);
    c=(r1)*(c2)+(r2)*(c1);
    if(c>=0)
        cout<<"Multiplication result: "<<r<<" + i"<<c<<endl;
    else
        cout<<"Multiplication result: "<<r<<" - i"<<-c<<endl;
}
void divisionComplex(float r1,float r2, float c1,float c2)
{
    float r,c;
    r=((r1*r2)+(c1*c2))/((r2*r2)+(c2*c2));
    c=((c1*r2)-(r1*c2))/((r2*r2)+(c2*c2));
    if(c>=0)
        cout<<"Multiplication result: "<<r<<" + i"<<c<<endl;
    else
        cout<<"Multiplication result: "<<r<<" - i"<<-c<<endl;
}