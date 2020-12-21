#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include"student_list.h"
#include"student.h"

STU* head = NULL;

//��Ҫ��ӵ�ѧ����Ϣ���س�һ���ڵ�
void add_student()
{
	STU* p = (STU*)malloc(sizeof(STU));
	if (NULL == p)
	{
		printf("error\n");
		exit(-1);
	}
	printf("id:"); scanf_s("%d", &p->id); while (getchar() != '\n');
	if (find_One_Student_Node(head, p->id) != NULL) {
		printf("���id�Ѿ�����!!!\n");
		return;
	}
	printf("name:"); scanf_s("%s", p->name,20); while (getchar() != '\n');
	printf("age:"); scanf_s("%d", &p->age); while (getchar() != '\n');
	printf("Chinese:"); scanf_s("%lf", &(p->transcript.Chinese)); while (getchar() != '\n');
	printf("Math:"); scanf_s("%lf", &(p->transcript.Math)); while (getchar() != '\n');
	printf("English:"); scanf_s("%lf", &(p->transcript.English)); while (getchar() != '\n');
	list_Add(&head, p);
}

//��ʾ����ѧ��
void show_Student()
{
	print_Stuent_List(head);
}

//����һ��ѧ��
void find_One_Student()
{
	printf("Please input id:");
	int id; scanf_s("%d", &id);
	while (getchar() != '\n');
	if (!show_One_Node(find_One_Student_Node(head, id))) printf("���޴���\n");
}

//ɾ��һ��ѧ��
void delete_One_Student()
{
	printf("Please input the id to be deleted:");
	int id;
	scanf_s("%d", &id);
	while (getchar()!= '\n');
	STU* temp = find_One_Student_Node(head, id);
	if (NULL == temp)
	{
		printf("�޷�ɾ�������޴���\n");
		return;
	}
	delete_One_Node(&head,temp);
}

//ɾ������ѧ����Ϣ
void delete_All_Student()
{
	destroy_List(head);
	head = NULL;//ͷָ��ָ���˱����ٵĵ�ַ��Ҫ����ΪNULL

}


void reverse_Output_Student()
{
	STU *new_head=reverse_Output_List(head);
	print_Stuent_List(new_head);
}