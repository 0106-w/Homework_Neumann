#ifndef SORE_H_INCLUDED
#define SORE_H_INCLUDED
using namespace std;
struct ST
{
    char name[20];
    char number[20];
    float Dscore;//ƽʱ�ɼ�
    float Fscore;//��ĩ�ɼ�
    float Escore;//ʵ��ɼ�
    float Gscore;//�ܳɼ�
    int place;//����
};
ST* readDataFromFile(int *N)//�ļ���ȡ
void calcuscore(ST stu[],int n);//����ѧ���ܳɼ�
void sortscore(ST stu[],int n);//����
void printout(ST stu[],int n);//����ʽ���ѧ����Ϣ


#endif // SORE_H_INCLUDED
