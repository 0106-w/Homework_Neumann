#include"sore.h"
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
//��ȡѧ��������Ϣ
void readData(ST stu[],int N)
{
    printf("�밴�����¸�ʽ����ѧ����Ϣ��ѧ�ţ�������ƽʱ�ɼ�����ĩ�ɼ�\n")
    for(int i=0;i<N;i++)
    {
        printf("��%d��ѧ����",i+1);
        scanf("%s %s %f %f",&stu[i].number,&stu[i].name,&stu[i].Dscore,&stu[i].Fscore);
        printf("\n");
    }
    printf("******�ɼ�¼�����******");

}
ST* readDataFromFile(int *N)
{
    printf("\n\n-----��һ�������ļ���ȡѧ���ɼ���Ϣ-----\n\n");
    ST *stu;//�����¿ռ䣬��ȡ�ļ���ÿ��ѧ����Ϣ
    FILE *fp=NULL;
    int count=0;
    int index=0;
    fp=fopen("data.txt","r");

    //��ȡѧ����Ŀ
    if(fp!=NULL)
    {
        fscanf(fp,"%d",&count);
        *N=count;
    }
    else
    {
        printf("��ȡʧ��");
        getchar();
    }
    printf("ѧ����ĿΪ��%d\n",count);
    getchar();

    //������ѧ������洢�ռ�
    stu=(ST*)malloc(count*sizeof(ST));

    //��ȡÿ��ѧ����Ϣ
    while ((!feof(fp)) && (index < count))
	{

		//�����ļ����ݵ��ڴ�
		fscanf(fp, "%s%s%f%f\n", (stu[index].number), (stu[index].name), &stu[index].DScore, &stu[index].FScore);

		//���ԭʼѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��\n", (stu[index].number), (stu[index].name), stu[index].DScore, stu[index].FScore);

		index++;


	}

	fclose(fp);

	return stu;
}
//����N��ѧ�����Ե������ɼ�
void calcuScore(ST stu[], int N)
{


	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].Gscore = 0.2*stu[i].Dscore + 0.8*stu[i].Fscore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].Gscore);

	}
}


//���������ɼ�����
int cmpBigtoSmall(const void *a, const void *b)
{

	ST *aa = (ST *)(a);
	ST *bb = (ST *)(b);



	if ((*aa).Gscore < (*bb).Gscore)  return 1;

	else if ((*aa).Gscore > (*bb).Gscore)  return -1;

	else
		return 0;

}

void sortScore(ST stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}


//����һ���ĸ�ʽ���N��ѧ������Ϣ
void printOut(ST stu[], int N)
{


	printf("\n------������: �����ܳɼ����ѧ��������Ϣ!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("��%d����Ϣ ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].Gscore);
	}


}
