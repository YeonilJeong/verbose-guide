#include "Animal.h"
#include "Cat.h"
#include "Handler.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	// ���� �����
	bool check = true;
	
	// ��ü �����
	Handler handler;
	
	// �Լ� �����

	handler.ResetRoom();


	while (check)
	{
		handler.ViewList();
		int num;
		handler.SelectMenu();
		cout << "�Է� : ";
		cin >> num;

		switch (num) {

		case 1:
			handler.CheckIn();
			break;

		case 2:
			handler.CheckOut();
			break;

		case 3:
			handler.ViewList();
			break;
			
		case 4:
			cout << endl << " ";
			return 0;

		default:
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl << "�߸� �Է��ϼ̽��ϴ�." << endl;
		}
	}
	return 0;
};
