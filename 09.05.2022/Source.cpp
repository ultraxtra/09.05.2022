#include<iostream>

using namespace std;

namespace Class {
	namespace Drib
	{
		class Drob {
		public:
			int chiselnik;
			int znamenik;

			Drob() {
				chiselnik = 10;
				znamenik = 5;
			}
			Drob(int chiselnik, int znamenik) : Drob(){
				this->chiselnik = chiselnik;
				this->znamenik = znamenik;
			}

			~Drob() {
				chiselnik = 0;
				chiselnik = 0;
			}
			void Show() {
				cout << "My drib = " << chiselnik << "/" << znamenik << endl;
			}
		};
	}
	namespace _2DTochka
	{
		class Tochka2D
		{
		public:
			double xKord;
			double yKord;
			Tochka2D() {
				xKord = 2.7;
				yKord = 3.4;
			}

			Tochka2D(double xKord, double yKord) : Tochka2D() {
				this->xKord = xKord;
				this->yKord = yKord;
			}
			~Tochka2D() {
				xKord = 0;
				yKord = 0;
			}
			void Print() {
				cout << "A" << xKord << ":" << yKord << endl;
			}

		};

	}

	namespace _3DTochka
	{
		class Tochka3D
		{
		public:
			double xKord;
			double yKord;
			double zKord;

			Tochka3D() {
				xKord = 2.7;
				yKord = 3.4;
				zKord = 5.7;
			}

			Tochka3D(double xKord, double yKord, double zKord) : Tochka3D() {
				this->xKord = xKord;
				this->yKord = yKord;
				this->zKord = zKord;
			}
			~Tochka3D() {
				xKord = 0;
				yKord = 0;
				zKord = 0;
			}
			void Print() {
				cout << "A " << xKord << ":" << yKord << ":" << zKord << endl;
			}

		};
	}

}

using Class::Drib::Drob;
using Class::_2DTochka::Tochka2D;
using Class::_3DTochka::Tochka3D;

int main() {
	Drob* inst1 = new Drob(2, 3);
	inst1->Show();
	Tochka2D* inst2 = new Tochka2D(3.7, 5.5);
	inst2->Print();
	Tochka3D* inst3 = new Tochka3D(1.7, 4.5, 9.5);
	inst3->Print();
	return 0;
}