#include <iostream>
#include "SaudiString.h"

using namespace std;

int main()
{
	cout << "----------------\n*Saudi String Library!*\n----------------\n";

	SaudiString String("ThIs Is A sTrInG fOr TeStInG ThE ThE FuNcTiOnS! 12345.");

	cout << "The String : " << String.value << "\n\n";

	cout << setw(30) << "CountLetter('A') = ";
	cout << String.CountLetter('A') << endl;

	cout << setw(30) << "CountLower() = ";
	cout << String.CountLower() << endl;

	cout << setw(30) << "CountUpper() = ";
	cout << String.CountUpper() << endl;

	cout << setw(30) << "CountVowel() = ";
	cout << String.CountVowel() << endl;

	cout << setw(30) << "CountWords('ThE') = ";
	cout << String.CountWords("ThE") << endl;

	cout << setw(30) << "FirstInWords() = ";
	cout << String.FirstInWords() << endl;

	cout << setw(30) << "InvertAll() = ";
	cout << String.InvertAll() << endl;

	cout << setw(30) << "SaudiString::InvertCase('M') = ";
	cout << SaudiString::InvertCase('M') << endl;

	cout << setw(30) << "SaudiString::IsLower('M') = ";
	cout << SaudiString::IsLower('M') << endl;

	cout << setw(30) << "SaudiString::IsUpper('M') = ";
	cout << SaudiString::IsUpper('M') << endl;

	cout << setw(30) << "SaudiString::IsUpper('M') = ";
	cout << SaudiString::IsVowel('M') << endl;

	cout << setw(30) << "Length() = ";
	cout << String.Length() << endl;

	cout << setw(30) << "LowerAll() = ";
	cout << String.LowerAll() << endl;

	cout << setw(30) << "LowerAllFirsts() = ";
	cout << String.LowerAllFirsts() << endl;

	cout << setw(30) << "UpperAll() = ";
	cout << String.UpperAll() << endl;

	cout << setw(30) << "UpperAllFirsts() = ";
	cout << String.UpperAllFirsts() << endl;
}
