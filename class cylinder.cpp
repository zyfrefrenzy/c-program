/*a c++ class cylinder program for calculating area of a cylinder and volume of the
cylinder
NAME frenzy gatheru
REG NO BSE-05-0163/2024
*/
#include<iostream>
using namespace std;

	class cylinder{
		
		public:
			const double pi=3.142;
			double radius;
			double height;
			
			double calculateSurfaceArea(){
				return 2*pi*radius*radius+2*pi*radius*height;
			}
			
			double calculateVolume(){
				return pi*radius*radius*height;
			}
		
	};
	
	int main(){
		cylinder cl,c2;
		cl.height=10;
		cl.radius=7;
		double volume,area;
		volume=cl.calculateVolume();
		area=cl.calculateSurfaceArea();
		cout<<"volume:"<<volume<<endl;
		cout<<"area:"<<area<<endl;
		
		return 0;
		
			
		
	
	}

