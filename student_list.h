#ifndef _STUDENT_LIST_H_
#define _STUDENT_LIST_H_

#include"student.h"

//ѧ���������ѧ����Ϣ
void list_Add(STU** head, STU* p);

//��ӡѧ��������Ϣ
void print_Stuent_List(STU* head);

//ѧ�������в���һ���ڵ�
STU *find_One_Student_Node(STU *head,int id);

//��ʾһ��ѧ���ڵ���Ϣ
bool show_One_Node(STU *p);

//����ѧ������ĳ���ڵ����һ���ڵ�
STU* find_last_node(STU *head,STU *p);

//ȡ������ĳ���ڵ�
STU* take_Out_One_Node(STU** head, STU* p);

//ɾ��ĳ���ڵ�
void delete_One_Node(STU **head,STU* p);

//�ݹ���������
void destroy_List(STU* head);

//ʵ������ת�������µ�����
STU* reverse_Output_List(STU* head);

#endif // 

