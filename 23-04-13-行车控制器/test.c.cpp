#include<iostream>

using namespace std;

void meun() {

	printf("\t*------------------*\n");
	printf("\t|------------------|\n");
	printf("\t|    <<�г�ң��>>  |\n");
	printf("\t|------------------|\n");
	printf("\t|----- 0.��ͣ -----|\n");
	printf("\t|------------------|\n");
	printf("\t|  1.��ͣ | 2.���� |\n");
	printf("\t|------------------|\n");
	printf("\t|  3.  �� | 4.  �� |\n");
	printf("\t|------------------|\n");
	printf("\t|  5.  �� | 6.  �� |\n");
	printf("\t|------------------|\n");
	printf("\t|  7.  �� | 8.  �� |\n");
	printf("\t|------------------|\n");
	printf("\t|9.������|10.������|\n");
	printf("\t* -----------------*\n\n");

}

int main() {
	
	int choose = 0;
	int choose_1 = 0;
	do
	{
		meun();
		cout << "����:";
		cin >> choose;

		switch (choose)
		{
		case 1: cout << "\t\t����ͣ" << endl;
			system("pause");
			system("cls");
			break;
		case 2:cout << "\t\t������" << endl;
			system("pause");
			system("cls");;
			break;
		case 3:cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 4:cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 5:cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 6:cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 7: cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 8: cout << "\t\t��" << endl;
			system("pause");
			system("cls");;
			break;
		case 9: cout << "\t\t����" << endl;	
			system("pause");
			system("cls");;
			break;
		case 10: cout << "\t\t����" << endl;
			system("pause");
			system("cls");;
			break;
		}
			

	} while (choose);

	return 0;
}
