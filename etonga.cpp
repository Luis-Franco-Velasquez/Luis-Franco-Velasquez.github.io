#include <iostream>
#include <cstdlib>

using namespace std;

double product(double num1, double num2)
{
    double total = num1 * num2;
    return (total);
}

double sum(double num1, double num2)
{
    double total = num1 + num2;
    return (total);
}

double quotient(double num1, double num2)
{
    double total = num1 / num2;
    return (total);
}
double difference(double num1, double num2)
{
    double total= num1 - num2;
    return(total);
}

void operation(char op);

int main()
{
    char cont = 'y' , op;

    while (cont=='y' || cont=='Y')
    {
        system("cls");
        cout<<"Please Select Operation (*,/,-,+): ";
        cin>>op;

        cout<<endl;

        operation(op);

        cout<<"Do you want to perform other operation: (Press Y/y if yes, other key if NO)"<<endl;
        cin>>cont;
    }
    return 0;
}

void operation(char op)
{
    int proceed=1;

    switch (op)
    {
        case '*':cout<<"you selected multiplication!!"<<endl<<endl; break;
        case '+':cout<<"you selected addition!!"<<endl<<endl; break;
        case '/':cout<<"you selected division!!"<<endl<<endl; break;
        case '-':cout<<"you selected subtraction!!"<<endl<<endl; break;
        default: cout<<"invalid output"<<endl<<endl; proceed = 0;
    }

    if (proceed==1)
    {
        double firstnum, secondnum;

        cout<<"please input 1st number: "; cin>>firstnum;
        cout<<"please input 2nd number: "; cin>>secondnum;

        switch(op)
        {
            case '*':cout<<"the product of "<<firstnum<<" "<<op<<" "<<secondnum<< " is = "<<product(firstnum,secondnum); break;
            case '+':cout<<"the addition of "<<firstnum<<" "<<op<<" "<<secondnum<<" is = "<<sum(firstnum,secondnum); break;
            case '/':cout<<"the quotient of"<<firstnum<<" "<<op<<" "<<secondnum<<" is = "<<quotient(firstnum,secondnum); break;
            case '-':cout<<"the difference of "<<firstnum<<" "<<op<<" "<<secondnum<<" is = "<<difference(firstnum,secondnum); break;
        }
        cout<<endl;
    }
}
