#include "complexNumber.h"


int main()
{

	complexNumber object, object2(4.6, 6.4);
	
	object.setReal(5.1);
	object.setImag(3.2);

	cout << "First complex: ";
	object.print();
	cout << "\n";
	cout << "Real : " << object.getRealPart() << "\n";
	cout << "Imaginary : " << object.getImagPart() << "\n" "\n";

	cout << "Second complex: ";
	object2.print();
	cout << "\n";
	cout << "Real : " << object2.getRealPart() << "\n";
	cout << "Imaginary : " << object2.getImagPart() << "\n" "\n";
	
	complexNumber add = object.addComplex(object2);
	cout << "Addition : ";
	object.print(); cout << " + "; object2.print(); cout << " = "; add.print(); cout << "\n";

	complexNumber sub = object.substractComplex(object2);
	cout << "Substraction : ";
	object.print(); cout << " - "; object2.print(); cout << " = "; sub.print(); cout << "\n";

	complexNumber multi = object.multiplyComplex(object2);
	cout << "Multiplication : ";
	object.print(); cout << " * "; object2.print(); cout << " = "; multi.print(); cout << "\n";

	complexNumber division = object.divisionComplex(object2);
	cout << "Division : ";
	object.print(); cout << " / "; object2.print(); cout << " = "; division.print(); cout << "\n" "\n";

	system("PAUSE");
	return 0;
}