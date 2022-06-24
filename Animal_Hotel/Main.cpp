#include "Animal.h"
#include "Cat.h"
#include "Handler.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	// 변수 선언부
	bool check = true;
	
	// 객체 선언부
	Handler handler;
	
	// 함수 실행부

	handler.ResetRoom();


	while (check)
	{
		handler.ViewList();
		int num;
		handler.SelectMenu();
		cout << "입력 : ";
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
			cout << endl << "잘못 입력하셨습니다." << endl;
		}
	}
	return 0;
};
