#include<stdio.h>
#include<stdlib.h>
#include"student.h"
#include"student_list.h"

 
//ѧ���������ѧ����Ϣ
void list_Add(STU** head, STU* p)
{
		p->next = *head;
		*head = p;
}

//��ӡѧ��������Ϣ
void print_Stuent_List(STU* head)
{
	while (head != NULL)
	{
		show_One_Node(head);
		head = head->next;
	}
}

//��ʾһ��ѧ���ڵ���Ϣ
bool show_One_Node(STU* p)
{
	if (NULL != p)
	{
		printf("id:%d\n", p->id);
		printf("name:%s\n", p->name);
		printf("age:%d\n", p->age);
		printf("Chinese:%.2lf\n", p->transcript.Chinese);
		printf("Math:%.2lf\n", p->transcript.Math);
		printf("English:%.2lf\n", p->transcript.English);
		printf("\n");
	}
	else return false;
	return true;
}

//����ѧ��id�������в���һ���ڵ�
STU *find_One_Student_Node(STU *head,int id)
{
	for (;;)
	{
		if (head == NULL) return NULL;
		if (head->id == id) return head;
		else head = head->next;
	}
	return NULL;
}

//����ѧ������ĳ���ڵ����һ���ڵ�
STU* find_last_node(STU* head, STU* p)
{
	STU* temp = NULL;
	if (head == NULL) return NULL;
	while (head->next != NULL)
	{
		if (head->next == p) return head;
		head = head->next;
	}
	return NULL;
}

//ȡ������ĳ���ڵ�
STU* take_Out_One_Node(STU **head,STU *p)//���head==p==NULL ����
{
	if (NULL==p) { printf("��Ϲȡ���ڵ㣡����\n"); return NULL; }
	STU* temp = NULL;
	if (*head == p)
	{
		temp = *head;
		*head = (*head)->next;
	}
	else {
		temp = p;
		STU* node = find_last_node(*head, p);
		node->next = temp->next;
	}
	temp->next = NULL;
	return temp;
}

//����һ���ڵ�
void delete_One_Node(STU **head,STU *p)
{
	STU* temp = take_Out_One_Node(head,p);
	free(temp);
}

void destroy_List(STU* head)
{
	if (head == NULL) return;
	destroy_List(head->next);
	free(head);
}

//ʵ������ת�������µ�����
STU *reverse_Output_List(STU *head)
{
	STU* head1=NULL;
	STU* temp = NULL;
	while (head != NULL)
	{
		temp=take_Out_One_Node(&head,head);
		list_Add(&head1, temp);
	}
	
	return head1;
}