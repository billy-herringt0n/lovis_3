//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//
//typedef struct Node {
//    int data;
//    int priority;
//    struct Node* next;
//} Node;
//
//Node* createNode(int data, int priority) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL) {
//        printf("�� ������� �������� ������!\n");
//        return NULL;
//    }
//    newNode->data = data;
//    newNode->priority = priority;
//    newNode->next = NULL;
//    return newNode;
//}
//
//void enqueue(Node** head, int data, int priority) {
//    Node* newNode = createNode(data, priority);
//    if (*head == NULL) {
//        *head = newNode;
//        return;
//    }
//    if (priority < (*head)->priority) {
//        newNode->next = *head;
//        *head = newNode;
//        return;
//    }
//    Node* current = *head;
//    while (current->next != NULL && current->next->priority <= priority) {
//        current = current->next;
//    }
//    newNode->next = current->next;
//    current->next = newNode;
//}
//
//int dequeue(Node** head) {
//    if (*head == NULL) {
//        printf("������ ����!\n");
//        return -1;
//    }
//    Node* temp = *head;
//    int data = temp->data;
//    *head = (*head)->next;
//    free(temp);
//    return data;
//}
//
//void main() {
//    Node* head = NULL;
//    int choice, priority, data;
//    setlocale(LC_ALL, "RUS");
//    do {
//        printf("1. ������ ����� ������� �������\n");
//        printf("2. ������� ������������ ������� �� �������\n");
//        printf("3. ������� ������ �� �����\n");
//        printf("4. �����\n");
//        printf("�������� ��������: ");
//        scanf("%d", &choice);
//        switch (choice) {
//        case 1:
//            printf("������� ���������� � ������� ������: ");
//            scanf("%d", &data);
//            printf("������� ���������: ");
//            scanf("%d", &priority);
//            enqueue(&head, data, priority);
//            break;
//        case 2: 
//            data = dequeue(&head);
//            printf("�������: %d", data);
//            printf("\n������������ ������� �����!\n");
//            break;
//        case 3:
//            while (head != NULL) {
//                data = dequeue(&head);
//                printf("%d ", data);
//            }
//            printf("\n");
//            break;
//        case 4: 
//            system("cls");
//            printf("�� ��������!\n");
//            break;
//        default:
//            system("cls");
//            printf("����������� �����!\n");
//            break;
//        }
//    } while (choice != 4);
//}