#include <iostream>
using namespace std;

class Rectangle
{
private:
	float length;
	float width;
public:
	void setLength(float len)
	{
		if (len > 0)
			length = len;
		else
			cout << "Error, Length must be more than zero value";
	}

	float getLength()
	{
		return length;
	}

	void setWidth(float wd)
	{
		if (wd > 0)
			width = wd;
		else
			cout << "Error, Width must be more than zero value"
	}

	float getWidth()
	{
		return width;
	}

	float getArea()
	{
		return length * width;
	}
};

int main()
{
	cout >> "First OOP \n";

	Rectangle box;
	box.setLength(5);
	box.setWidth(5);

	cout << "Rectangle Area is: " << box.getArea << " \n";
}