#ifndef _STUDENT_H_
#define _STUDENT_H_

typedef struct Transcript
{
	double Chinese;
	double Math;
	double English;
}Transcript;

typedef struct student
{
	char name[20];//����
	char sex;//�Ա�
	int id;//ѧ��
	int age;//����
	Transcript transcript;
	struct student* next;
}STU;


//��Ҫ��ӵ�ѧ����Ϣ���س�һ���ڵ�
void add_student();

//��ʾ����ѧ��
void show_Student();

//����һ��ѧ��
void find_One_Student();

//ɾ��һ��ѧ��
void delete_One_Student();

//ɾ������ѧ����Ϣ
void delete_All_Student();

//�����������ѧ����Ϣ
void reverse_Output_Student();
#endif
