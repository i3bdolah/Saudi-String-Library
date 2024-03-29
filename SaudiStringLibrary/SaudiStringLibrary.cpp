#include <iostream>
#include "SaudiString.h"

using namespace std;

int main()
{
	cout << "----------------\n*Saudi String Library!*\n----------------\n";

	SaudiString String("ThIs Is A sTrInG fOr TeStInG ThE ThE FuNcTiOnS! 12345.");

	cout << "The String : " << String.value << "\n\n";

	cout << setw(35) << "CountLetter('A') = ";
	cout << String.CountLetter('A') << endl;

	cout << setw(35) << "CountLower() = ";
	cout << String.CountLower() << endl;

	cout << setw(35) << "CountUpper() = ";
	cout << String.CountUpper() << endl;

	cout << setw(35) << "CountVowel() = ";
	cout << String.CountVowel() << endl;

	cout << setw(35) << "CountWords() = ";
	cout << String.CountWords() << endl;

	cout << setw(35) << "FirstInWords() = ";
	cout << String.FirstInWords() << endl;

	cout << setw(35) << "InvertAll() = ";
	cout << String.InvertAll() << endl;

	cout << setw(35) << "InvertCase('M') = ";
	cout << SaudiString::InvertCase('M') << endl;

	cout << setw(35) << "IsLower('M') = ";
	cout << SaudiString::IsLower('M') << endl;

	cout << setw(35) << "IsUpper('M') = ";
	cout << SaudiString::IsUpper('M') << endl;

	cout << setw(35) << "IsVowel('M') = ";
	cout << SaudiString::IsVowel('M') << endl;

	cout << setw(35) << "Length() = ";
	cout << String.Length() << endl;

	cout << setw(35) << "LowerAll() = ";
	cout << String.LowerAll() << endl;

	cout << setw(35) << "LowerAllFirsts() = ";
	cout << String.LowerAllFirsts() << endl;

	cout << setw(35) << "UpperAll() = ";
	cout << String.UpperAll() << endl;

	cout << setw(35) << "UpperAllFirsts() = ";
	cout << String.UpperAllFirsts() << endl;
	
	cout << setw(35) << "TrimLeft(' Abdullah Ban ') = ";
	cout  <<  "|" << SaudiString::TrimLeft(" Abdullah Ban ") << "|" << endl;
	
	cout << setw(35) << "TrimRight(' Abdullah Ban ') = ";
	cout << "|" << SaudiString::TrimRight(" Abdullah Ban ") << "|" << endl;

	cout << setw(35) << "TrimAll(' Abdullah Ban ') = ";
	cout << "|" << SaudiString::TrimAll(" Abdullah Ban ") << "|" << endl;

	cout << setw(35) << "ReplaceWord('ThE','A') = ";
	cout << String.ReplaceWord("ThE","A") << endl;

	cout << setw(35) << "RemovePunctuations() = ";
	cout << String.RemovePunctuations() << endl;

	cout << setw(35) << "ReverseWords() = ";
	cout << String.ReverseWords() << endl;

	cout << setw(35) << "PrintWordSeparately() = ";
	String.PrintWordSeparately();
}
