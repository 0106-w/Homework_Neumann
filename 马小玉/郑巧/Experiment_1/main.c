#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include"score.h"
int main()
{
    printf("******************************\n");
	printf("       ѧ���ɼ��������ϵͳ        \n");
    printf("******************************\n\n");
    int N = 0;     //ѧ������
    ST stu[100];
	SS *p = &stu[0];//�ṹ������ָ��
	printf("������ѧ����Ŀ(С��100):");//�ֶ�����ѧ����Ϣ
	scanf("%d", &N);
	readData(p, N);
	calcuScore(P, N);//�����ܳɼ�
	sortScore(p, N);//����
	printOut(p, N);//�����������ѧ����Ϣ
	free(p);//�ͷŶ�̬�ڴ�ռ�
	printf("\n");
	return 0;
}
