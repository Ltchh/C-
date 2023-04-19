#include<iostream>

using namespace std;

void meun() {

	printf("\t*------------------*\n");
	printf("\t|------------------|\n");
	printf("\t|    <<行车遥控>>  |\n");
	printf("\t|------------------|\n");
	printf("\t|----- 0.急停 -----|\n");
	printf("\t|------------------|\n");
	printf("\t|  1.暂停 | 2.启动 |\n");
	printf("\t|------------------|\n");
	printf("\t|  3.  上 | 4.  下 |\n");
	printf("\t|------------------|\n");
	printf("\t|  5.  东 | 6.  西 |\n");
	printf("\t|------------------|\n");
	printf("\t|  7.  南 | 8.  北 |\n");
	printf("\t|------------------|\n");
	printf("\t|9.慢速上|10.慢速下|\n");
	printf("\t* -----------------*\n\n");

}

int main() {
	
	int choose = 0;
	int choose_1 = 0;
	do
	{
		meun();
		cout << "按键:";
		cin >> choose;

		switch (choose)
		{
		case 1: cout << "\t\t已暂停" << endl;
			system("pause");
			system("cls");
			break;
		case 2:cout << "\t\t已启动" << endl;
			system("pause");
			system("cls");;
			break;
		case 3:cout << "\t\t上" << endl;
			system("pause");
			system("cls");;
			break;
		case 4:cout << "\t\t下" << endl;
			system("pause");
			system("cls");;
			break;
		case 5:cout << "\t\t东" << endl;
			system("pause");
			system("cls");;
			break;
		case 6:cout << "\t\t西" << endl;
			system("pause");
			system("cls");;
			break;
		case 7: cout << "\t\t南" << endl;
			system("pause");
			system("cls");;
			break;
		case 8: cout << "\t\t北" << endl;
			system("pause");
			system("cls");;
			break;
		case 9: cout << "\t\t慢上" << endl;	
			system("pause");
			system("cls");;
			break;
		case 10: cout << "\t\t慢下" << endl;
			system("pause");
			system("cls");;
			break;
		}
			

	} while (choose);

	return 0;
}
