#include <iostream>

using namespace std;

class complex
{
private:
	
public:
	float r,i;
	void get_complex();
	void display();

	complex operator +(complex);
	complex operator -(complex);
	complex operator *(complex);
	complex operator /(complex);
};



void complex :: get_complex ()
{
	cin>>r>>i;
}

void complex ::display()
{
	cout<<r<<"+i("<<i<<")/n";
}

complex complex :: operator +(complex c)
{
	complex temp;
	temp.r=r+c.r;
	temp.i=i+c.i;
	return temp;
}

complex complex :: operator - (complex c)
{
	complex temp;
	temp.r=r-c.r;
	temp.i=i-c.i;
 	return temp;
}

complex complex :: operator * (complex c)
{
	complex temp;
	temp.r=r*c.r-i*c.i;
	temp.i=i*c.r+r*c.i;
	return temp;
}

complex complex :: operator / (complex c)
{
	complex temp;
	temp.r=(r*c.r+i*c.i)/(c.r*c.r+c.i*c.i);
	temp.i=(i*c.r-r*c.i)/(c.r*c.r+c.i*c.i);
	return temp;
}


int main()
{
	complex c1,c2,c3;

	cout<<"enter 1st complex no="<<endl;
	c1.get_complex();
	cout<<"enter 1st complex no="<<endl;
	c2.get_complex();


	c3=c1 + c2;
	cout<<"Addition"<<endl;
	c3.display();

	c3=c1 - c2;
	cout<<"Substraction"<<endl;
	c3.display();

	c3=c1 * c2;
	cout<<"Multiplication"<<endl;
	c3.display();

	c3=c1/c2;
	cout<<"Divide"<<endl;
	c3.display();


}