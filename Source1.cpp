//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <string.h>
//
//typedef struct node {
//	char inf[256];  // ����������
//	struct node* next; // ������ �� ��������� ������� 
//} node;
//
//// ������� ���������� ��������, ��������� ������
//void spstore(void), review(void), del(char* name);
//
//node* find(char* name); // ������� ���������� ��������
//node* get_struct(void); // ������� �������� ��������
//
//node* get_struct(void) {
//	node* p = NULL;
//	char s[256];
//
//	if ((p = (node*)malloc(sizeof(node))) == NULL)  // �������� ������ ��� ����� ������� ������
//	{
//		printf("������ ��� ������������� ������\n");
//		exit(1);
//	}
//
//	printf("������� �������� �������: \n");   // ������ ������
//	scanf("%s", s);
//	if (*s == 0)
//	{
//		printf("������ �� ���� �����������\n");
//		return NULL;
//	}
//	strcpy(p->inf, s);
//	p->next = NULL;
//	return p;		// ���������� ��������� �� ��������� �������
//}
//
///* ���������������� ���������� � ������ �������� (� �����)*/
//void spstore(node** head, node** last) {
//	node* p = NULL;
//	p = get_struct();
//	if (*head == NULL && p != NULL)	// ���� ������ ���, �� ������������� ������ ������
//	{
//		*head = p;
//		*last = p;
//	}
//	else if (*head != NULL && p != NULL) // ������ ��� ����, �� ��������� � �����
//	{
//		(*last)->next = p;
//		*last = p;
//	}
//}
//
///* �������� ����������� ������. */
//void review(node** head) {
//	node* struc = *head;
//	if (*head == NULL)
//	{
//		printf("������ ����\n");
//	}
//	while (struc != NULL)
//	{
//		printf("��� - %s, \n", struc->inf);
//		struc = struc->next;
//	}
//}
//
///* ����� �������� �� �����������. */
//node* find(node** head, char* name) {
//	node* struc = *head;
//	int k = 0;
//	if (head == NULL)
//	{
//		printf("������ ����\n");
//	}
//	while (struc)
//	{
//		if (strstr(struc->inf, name) != NULL) {
//			printf("%s ", struc->inf);
//			k++;
//		}
//		struc = struc->next;
//	}
//	if (k == 0) {
//		printf("�� ������ ����������� ��������� �� �������.");
//	}
//	printf("\n");
//	return NULL;
//}
//
//// �������� �������� �� ������ �������
//void dequeue(node** head) {
//	if (*head == NULL) {
//		printf("������� �����\n");
//		return;
//	}
//	node* temp = *head;
//	*head = (*head)->next;
//	free(temp);
//}
//
//void main() {
//	node* head = NULL, *last = NULL, *result = NULL; // ��������� �� ������ � ��������� �������� ������
//	int choice;
//	char name[256];
//	setlocale(LC_ALL, "RUS");
//	do {
//		printf("1. �������� �������\n");
//		printf("2. ������� �������\n");
//		printf("3. ����� �������\n");
//		printf("4. ����������� ������\n");
//		printf("5. �����\n");
//		printf("�������� ��������: ");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			spstore(&head, &last);
//			break;
//		case 2:
//			dequeue(&head);
//          printf("��������� ������� �����!\n");
//			break;
//		case 3:
//			printf("������� �������� ������� ��� ������: ");
//			scanf("%s", &name);
//			find(&head, name);
//			break;
//		case 4:
//			system("cls");
//			review(&head);
//			break;
//		case 5:
//			system("cls");
//			printf("�� ��������!\n");
//			break;
//		default:
//			system("cls");
//			printf("����������� �����!");
//			break;
//		}
//	} while (choice != 5);
//}