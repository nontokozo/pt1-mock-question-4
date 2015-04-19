///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:Nontokozo
// Student No:211509006
// Date: 19/04/2015
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

# include <iostream>
using namespace std;

class Animal
{
public:
	virtual void name()
	{

	};
	virtual void does()
	{};

protected:
	string naam;
	string doe;

};

class Bird : public Animal
{
public:
	void name()
	{
		
		cout << "Name:" << "Bird" << endl;
	}

	void does()
	{
		cout << "Fly" << endl;
	}
};


class Dog : public Animal
{
public:
	void name()
	{
		cout << "Name:" << "Dog" << endl;
	}

	void does()
	{
		cout << "buck" << endl;
	}
};

int main()
{
	Animal *anmlprt[2];
	Bird brdptr;
	Dog dogptr;

	anmlprt[0] = &brdptr;
	anmlprt[1] = &dogptr;

	for (int i = 0; i < 2; i++)
	{
		anmlprt[i]->name();
		cout << " ";

		anmlprt[i]->does();
		cout << endl;

		
	}

	system("pause");
	return 0;




}
