int showList();
void gotoxy(int x, int y);
void printPeople();

//���α׷� ����� �ϵ��ũ�κ��� �޸𸮷� ��� ����� �����͸� �ε���
void loadMembers();

//1. ȸ������ ��� ����� �޸��� ��� ����� �����͸� ȭ������ �����
void printMembers();

//2. ȸ����� ��� ����� ���� �޴��� �����ϰ� ��
//generateNewID();getMemberName();getMemberAddress();getMemberMobile(); �Լ��� �̿���
//�ű� ȸ���� ����� ������ �Է¹ް�, �Է��� �Ϸ�Ǹ� �޸𸮿� �����Ѵ�.
void registerMember();

//�ű� ȸ�� ���Խ� �ο����� ���̵� ����(���� �ִ� ��ȣ +1)
int generateNewID();

//ȸ�� �̸��� �Է¹���(�˻�, ���� � �����)
//������ �̸� �����͸� ����, ���� �Ǵ� ��ҽ� -1 ����
char * getMemberName();

//ȸ�� �ּҸ� �Է¹���(�˻�, ���� � �����)
//������ �ּ� �����͸� ����, ���� �Ǵ� ��ҽ� -1 ����
char * getMemberAddress();

//ȸ�� ��ȭ��ȣ �Է¹���(�˻�, ���� � �����)
//������ ��ȭ��ȣ �����͸� ����, ���� �Ǵ� ��ҽ� -1 ����
char * getMemberMobile();

//3. ȸ���˻� ��� ����� ���� �޴��� �����ϰ� ��
//getMemberName();getMemberAddress();getMemberMobile(); �Լ��� �̿���
//�˻��� ȸ�� ������ �Է¹ް�, �Է��� �Ϸ�Ǹ� �޸��� �����ͷκ��� �˻��� �����Ѵ�.
void searchMember();

//4. �������� ��� ����� ���� �޴��� �����ϰ� ��
//searchMember(); �Լ��� �̿��� ������ ȸ���� �˻��Ͽ� ������ ��
//������ ȸ���� ������ ������ �޸𸮿� �����Ѵ�.
void editMember();

//5. ȸ������ ��� ����� ���� �޴��� �����ϰ� ��
//searchMember(); �Լ��� �̿��� ������ ȸ���� �˻��Ͽ� ������ ��
//������ ȸ���� ������ �޸𸮿��� �����Ѵ�.
void deleteMember();

//6. ����.
//�޸��� ������ ��������� ������.
void save();








typedef struct members{
	int memID;
	char memName[20];
	char memAddress[50];
	char memMobileNumber[50];
} MEMBERS;