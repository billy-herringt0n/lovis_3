//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//#include <string.h>
//
//typedef struct node {
//	char inf[256];  // информация
//	struct node* next; // ссылка на следующий элемент 
//} node;
//
//// Функции добавления элемента, просмотра списка
//void spstore(void), review(void), del(char* name);
//
//node* find(char* name); // функция нахождения элемента
//node* get_struct(void); // функция создания элемента
//
//node* get_struct(void) {
//	node* p = NULL;
//	char s[256];
//
//	if ((p = (node*)malloc(sizeof(node))) == NULL)  // выделяем память под новый элемент списка
//	{
//		printf("Ошибка при распределении памяти\n");
//		exit(1);
//	}
//
//	printf("Введите название объекта: \n");   // вводим данные
//	scanf("%s", s);
//	if (*s == 0)
//	{
//		printf("Запись не была произведена\n");
//		return NULL;
//	}
//	strcpy(p->inf, s);
//	p->next = NULL;
//	return p;		// возвращаем указатель на созданный элемент
//}
//
///* Последовательное добавление в список элемента (в конец)*/
//void spstore(node** head, node** last) {
//	node* p = NULL;
//	p = get_struct();
//	if (*head == NULL && p != NULL)	// если списка нет, то устанавливаем голову списка
//	{
//		*head = p;
//		*last = p;
//	}
//	else if (*head != NULL && p != NULL) // список уже есть, то вставляем в конец
//	{
//		(*last)->next = p;
//		*last = p;
//	}
//}
//
///* Просмотр содержимого списка. */
//void review(node** head) {
//	node* struc = *head;
//	if (*head == NULL)
//	{
//		printf("Список пуст\n");
//	}
//	while (struc != NULL)
//	{
//		printf("Имя - %s, \n", struc->inf);
//		struc = struc->next;
//	}
//}
//
///* Поиск элемента по содержимому. */
//node* find(node** head, char* name) {
//	node* struc = *head;
//	int k = 0;
//	if (head == NULL)
//	{
//		printf("Список пуст\n");
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
//		printf("Ни одного подходящего элемеента не найдено.");
//	}
//	printf("\n");
//	return NULL;
//}
//
//// Удаление элемента из начала очереди
//void dequeue(node** head) {
//	if (*head == NULL) {
//		printf("Очередь пуста\n");
//		return;
//	}
//	node* temp = *head;
//	*head = (*head)->next;
//	free(temp);
//}
//
//void main() {
//	node* head = NULL, *last = NULL, *result = NULL; // указатели на первый и последний элементы списка
//	int choice;
//	char name[256];
//	setlocale(LC_ALL, "RUS");
//	do {
//		printf("1. Добавить элемент\n");
//		printf("2. Удалить элемент\n");
//		printf("3. Найти элемент\n");
//		printf("4. Просмотреть список\n");
//		printf("5. Выход\n");
//		printf("Выберите действие: ");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			spstore(&head, &last);
//			break;
//		case 2:
//			dequeue(&head);
//          printf("Последний элемент удалён!\n");
//			break;
//		case 3:
//			printf("Введите название объекта для поиска: ");
//			scanf("%s", &name);
//			find(&head, name);
//			break;
//		case 4:
//			system("cls");
//			review(&head);
//			break;
//		case 5:
//			system("cls");
//			printf("До свидание!\n");
//			break;
//		default:
//			system("cls");
//			printf("Некоректный выбор!");
//			break;
//		}
//	} while (choice != 5);
//}