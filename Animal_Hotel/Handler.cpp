#include "Handler.h"
#include "Cat.h"

void Handler::CheckIn()

{
	char name[20]; 
	// char �迭 ����

	int roomNum;

	cout << "����� � �����Դϱ�?" << endl;
	cin >> name;
	cout << "ȣ�� �� ��ȣ�� �Է��ϼ���." << endl;
	cin >> roomNum;

	if (hotel[roomNum - 1]->getage() != 0)
	{
		cout << "���� ���� ���ֽ��ϴ�." << endl;
		return CheckIn();
	}

	if (strcmp(name, "�����") == 0)
	{
		char _name[20];
		cout << "�̸��� �Է��ϼ���." << endl;
		cin >> _name;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Cat(_name, 3, (char*)"�����");
		cout << "�ɳ� ����~" << endl;

	}

	if (strcmp(name, "������") == 0)

	{
		char _name[20];
		cout << "�̸��� �Է��ϼ���." << endl;
		cin >> _name;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Cat(_name, 3, (char*)"������");
		cout << "�۸� ����~" << endl;
	}
}

void Handler::CheckOut()

{
	char name[20];

	int roomNum;

	cout << "����� � �����Դϱ�?" << endl;
	cin >> name;
	cout << "ȣ�� �� ��ȣ�� �Է��ϼ���." << endl;
	cin >> roomNum;

	if (strcmp(name, hotel[roomNum - 1]->getname()) == 0)
	{
		if (strcmp(hotel[roomNum - 1]->getspecies(), (char*)"�����") == 0)
			cout << "�ɳ� ����~" << endl;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Animal((char*)"���", 0, (char*)"null");
	}

	if (strcmp(name, hotel[roomNum - 1] -> getname()) == 0)
	{ 
		if (strcmp(hotel[roomNum - 1] -> getspecies(), (char*)"������") == 0)
		cout << "�۸� ����~" << endl;

		delete hotel[roomNum - 1];
		hotel[roomNum - 1] = new Animal((char*)"���", 0, (char*)"null");
	}

	ViewList();

}

void Handler::ViewList()

{
	for (int i = 0; i < 8; i++)
	{
		cout << i + 1 << "��° �� : ";
		cout << hotel[i]->getname() << endl;
	}
}

void Handler::ResetRoom()
{
	for (int i = 0; i < 8; i++) {
		hotel[i] = new Animal((char*)"���", 0, (char*)"null");
	}
}

void Handler::SelectMenu()
{
	cout << "=====================================================" << endl;
	cout << "||                                                 || " << endl;
	cout << " || �������� ����̸� ���� �ְ��� �ü��� ����    ||  " << endl;
	cout << "  || The Animal Hotel�� ���� ���� ȯ���մϴ�.      ||    " << endl;
	cout << "   ||                                              ||     " << endl;
	cout << "=====================================================" << endl;
	cout << "   || ���Ͻô� ���� ���� ��ȣ�� �Է����ּ���.    ||    " << endl;
	cout << "  || 1. ���� ����                                  ||   " << endl;
	cout << " || 2. ���� ���                                   ||  " << endl;
	cout << "|| 3. �ܿ� ����                                    ||  " << endl;
	cout << "|| 4. ����                                         ||  " << endl;
	cout << "=====================================================" << endl;
}
