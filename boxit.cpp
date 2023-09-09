#include<bits/stdc++.h>

using namespace std;
/*

Implement the class Box  

The class should have the following functions : 


Constructors: 
Box();
Box(int,int,int);
Box(Box);

int getLength(); // Return box's length
int getBreadth (); // Return box's breadth
int getHeight ();  //Return box's height
long long CalculateVolume(); // Return the volume of the box

Overload operator < as specified
bool operator<(Box& b)

Overload operator << as specified
ostream& operator<<(ostream& out, Box& B)

*/

// declared and defined here
class Box 
{
    public:
        // Constructors
        Box() : length(0), breadth(0), height(0) {}
        Box(int l, int b, int h) { length = l; breadth = b; height = h; }

        Box(Box &smolBox) 
        {
            length = smolBox.length;
            breadth = smolBox.breadth;
            height = smolBox.height;
        }

        // getter members
        int getLength() { return length; }

        int getBreadth() { return breadth; }

        int getHeight() { return height; }

        // calc volume function
        long long CalculateVolume() { return length * breadth * height; }

        // operator overloads < & << 
        bool operator<(Box& b);
        friend ostream& operator<<(ostream& out, Box& B);

    private:
        long length;     //l,b,h are long data type, representing the dimensions of the box
        long breadth;
        long height;
        
}; 

bool Box::operator<(Box& b)
{
    if (this->length > b.getLength())
        return false;
    else if (this->length < b.getLength())
        return true;
    if ((this->breadth > b.getBreadth()) && (this->length != b.getLength()))
        return false;
    else if (this->breadth < b.getBreadth())
        return true;
    if ((this->height > b.getHeight()) && (this->breadth != b.getBreadth()) && this->length != b.getLength())
        return false;
    else if (this->height < b.getHeight())
        return true;
    else 
        return 0;
}

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
