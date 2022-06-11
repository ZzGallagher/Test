//6.13

//#include<iostream>
//const int Max = 5;
//int main()
//{
//	using namespace std;
//	double fish[Max];
//	cout << "Please enter the weights of your fish: \n";
//	cout << "You may enter up to  " << Max << " fish<q to terminate>.\n";
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max && cin >> fish[i])
//	{
//		if (++i < Max)
//			cout << "fish #"<<i+1<<": ";
//	}
//	double total = 0;
//	for (int j = 0; j < i; j++)
//		total += fish[j];
//	if (i == 0)
//		cout << "No fish\n";
//	else
//		cout << total / i << " = average weight of " << i << " fish\n";
//	cout << "Done.\n";
//	return 0;
//}

//6/14

//#include<iostream>
//const int Max = 5;
//int main()
//{
//	using namespace std;
//	int golf[Max];
//	cout << "Please enter your golf scores.\n"
//		<< "You must enter " << Max << "rounds." << endl;
//	int i;
//	for (i = 0; i < Max; i++)
//	{
//		cout << "round #" << i + 1 << ": ";
//		while (!(cin >> golf[i]))
//		{
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "Please enter a number: ";
//		}
//	}
//	double total = 0;
//	for (i = 0; i < Max; i++)
//		total += golf[i];
//
//	cout << total / Max << "= average score " << Max << ". \n";
//	return 0;
//}

//6.15

//// outfile.cpp -- writing to a file
//#include <iostream> 
//#include <fstream>
//
//int main()
//{
//	using namespace std;
//	char automobile[50];
//	int year;
//	double a_price;
//	double d_price;
//	ofstream outFile;
//	outFile.open("carinfo.txt");
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	d_price = a_price*0.913;
//
//	cout << fixed;
//	cout.precision(2);
//	cout.setf(ios_base::showpoint);
//	cout << "Make and model: " << automobile << endl;
//	cout << "Year: " << year << endl;
//	cout << "Was asking $" << a_price << endl;
//	cout << "Now asking $" << d_price << endl;
//	outFile << fixed;
//	outFile.precision(2);
//	outFile.setf(ios_base::showpoint);
//	outFile << "Make and model: " << automobile << endl;
//	outFile << "Year: " << year << endl;
//	outFile << "Was asking $" << a_price << endl;
//	outFile << "Now asking $" << d_price << endl;
//
//	outFile.close();
//
//	system("pause");
//	return 0;
//}

//6.16

//// sumafile.cpp -- functions with an array argument
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//const int SIZE = 60;
//int main()
//{
//	using namespace std;
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "Enter name of data file: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open())
//	{
//		cout << "Could not open the file " << filename << endl;
//		cout << "Program terminating.\n";
//		exit(EXIT_FAILURE);
//	}
//	double value;
//	double sum = 0.0;
//	int count = 0;
//
//	inFile >> value;
//	while (inFile.good())
//	{
//		++count;
//		sum += value;
//		inFile >> value;
//	}
//	if (inFile.eof())
//		cout << "End of file reached.\n";
//	else if (inFile.fail())
//		cout << "Input terminated by data mismatch.\n";
//	else
//		cout << "Input terminated for unknown reason.\n";
//	if (count == 0)
//		cout << "No data processed.\n";
//	else
//	{
//		cout << "Items read: " << count << endl;
//		cout << "Sum: " << sum << endl;
//		cout << "Average: " << sum / count << endl;
//	}
//	inFile.close();
//	system("pause");
//	return 0;
//}

//1.

//#include<iostream>
//#include<cctype>
//int main()
//{
//	using namespace std;
//	char ch;
//	cout << "Enter: ";
//	//cin.get(ch);
//	//cin >> ch;
//	while (cin>>ch && ch != '@')
//	{
//		if (isalpha(ch))
//		{
//			if (isupper(ch))
//				cout << char(tolower(ch)) << endl;
//			else if (islower(ch))
//				cout << char(toupper(ch))<<endl;
//		}
//		//cin.get(ch);
//		//cin >> ch;
//	}
//	cin.clear();
//	cin.get();
//	return 0;
//}

//2.

//#include<iostream>
//#include<cctype>
//int main()
//{
//	using namespace std;
//	double donation[10] = { 0 }, sum = 0.0, average;
//	int i = 0, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> donation[i];
//		if (cin.fail())
//		{
//			cout << "Not a number! Exit!" << endl;
//			break;
//		}
//		sum += donation[i];
//	}
//	average = sum / i;
//	for (i = 0; i < 10; i++)
//	{
//		if (donation[i]>average)
//			j++;
//	}	
//	cout << "Average = " << average << endl;
//	cout << "Sum = " << sum << endl;
//	cout << "There's " << j << " numbers larger than the average.\n";
//	return 0;
//}

//3.

//#include<iostream>
//int main()
//{
//	using namespace std;
//	char ch;
//	
//	cout << "Please enter one of the following choices: \n"
//			"c) carnivore    p) pianist\n"
//			"t) tree    g) game";
//
//	cin >> ch;
//	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
//	{
//		cout << "Please enter a c,p,t or g: ";
//		cin >> ch;
//	}
//	switch (ch)
//	{
//	case 'c':
//		cout << "A maple is a carnivore.\n";
//		break;
//	case 'p':
//		cout << "A maple is a pianist.\n";
//		break;
//	case 't':
//		cout << "A maple is a tree.\n";
//		break;
//	case 'g':
//		cout << "A maple is a game.\n";
//		break;
//	}
//	return 0;
//}

//4.

//#include<iostream>
//struct bop
//{
//	char fullname[81];
//	char title[81];
//	char bopname[81];
//	int preference;
//};
//int main()
//{
//	using namespace std;
//	bop arr[4] = { { "Afullname", "Atitle", "Abopname", 0 },
//			{ "Bfullname", "Btitle", "Bbopname", 1 },
//			{ "Cfullname", "Ctitle", "Cbopname", 2 },
//			{ "Dfullname", "Dtitle", "Dbopname", 1 } };
//
//	cout << "Benevolent Order of Programers Report\n"
//		<< "a. display by name      b. display by title\n"
//		<< "c. display by bopname   d. display by preference\n"
//		<< "q. quit" << endl;
//	cout << "Enter your choice:";
//	char ch;
//	cin >> ch;
//	while (ch != 'q')
//	{
//		int i;
//		switch (ch)
//		{
//			case 'a':
//				for (i = 0; i < 4; i++)
//					cout << arr[i].fullname << endl;
//				break;
//			case 'b':
//				for (i = 0; i < 4; i++)
//					cout << arr[i].title << endl;
//				break;
//			case 'c':
//				for (i = 0; i < 4; i++)
//					cout << arr[i].bopname << endl;
//				break;
//			case 'd':
//				for (i = 0; i < 4; i++)
//				{
//					if (arr[i].preference==0)
//						cout << arr[i].fullname << endl;
//					else if (arr[i].preference == 1)
//						cout << arr[i].title << endl;
//					else
//						cout << arr[i].bopname << endl;
//				}					
//				break;
//		}
//		cout << "Next choice: ";
//		cin >> ch;
//	}
//	cout << "Bye!" << endl;
//	return 0;
//}

//5.

//#include<iostream>
//int main()
//{
//	using namespace std;
//	double income, tax;
//	cout << "Enter your income: ";
//	cin >> income;
//	while (!(cin.fail()) && income >= 0)
//	{
//		if (income <= 5000)
//			tax = 0;
//		else if (income <= 15000)
//			tax = (income - 5000)*0.1;
//		else if (income <= 35000)
//			tax = 10000 * 0.1 + (income - 15000)*0.15;
//		else
//			tax = 10000 * 0.1 + 20000 * 0.15 + (income - 35000)*0.2;
//		cout << "income = " << income << " tvarps\n"
//			<< "tax = " << tax << " tvarps\n";
//		cout << "Enter your income: ";
//		cin >> income;
//	}
//	return 0;
//}

//6.

//#include<iostream>
//#include<string>
//using namespace std;
//struct donation
//{
//	string name;
//	double charge;
//};
//int main()
//{
//	int num=4;
//	int i;
//	cout << "Enter the number of donors: ";
//	(cin >> num).get();
//	donation *ptr = new donation[num];
//	for (i = 0; i < num; i++)
//	{
//		cout << "Enter name: ";
//		getline(cin, ptr[i].name);
//		cout << "Enter money: ";
//		(cin >> ptr[i].charge).get();
//	}
//	cout << "Grand Patrons:\n";
//	int j = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (ptr[i].charge>10000)
//		{
//			cout << ptr[i].name << " donates " << ptr[i].charge << endl;
//			j++;
//		}
//	}
//	if (j == 0)
//		cout << "none\n";
//	cout << "\nPatrons:\n";
//	j = 0;
//	for (i = 0; i < num; i++)
//	{
//		if (ptr[i].charge<=10000)
//		{
//			cout << ptr[i].name << " donates " << ptr[i].charge << endl;
//			j++;
//		}
//	}
//	if (j == 0)
//		cout << "none\n";
//
//	delete[]ptr;
//
//	return 0;
//}

//7.

//#include<iostream>
//#include<string>
//int main()
//{
//	using namespace std;
//	int type1 = 0,type2 = 0,type3 = 0;
//	string word;
//	cout << "Enter words (q to quit): " << endl;
//	cin >> word;
//	while (word != "q")
//	{
//		if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
//			type1++;
//		else if (isalpha(word[0]))
//			type2++;
//		else
//			type3++;
//		cin >> word;
//	}
//	cout << type1 << " words beginning with vowels\n"
//		<< type2 << " words beginning with consonants\n"
//		<< type3 << " others" << endl;
//	return 0;
//}

//8.