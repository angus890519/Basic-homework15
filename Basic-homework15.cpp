/* �p������׹��-�򥻽m�ߧ@�~-�@�~15*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/21 10:00*/ 
#include <stdio.h> //��ܮw 
int main(void)
{
	printf("�п�J�{�b���ɶ��G"); 
	int hour,minute; //�w�q�ܼ�
	scanf("%d%d",&hour,&minute); // ��J 
	if((hour==7 && minute>=30)||(hour>=8 && hour<=16)){ //����
	//7:30 �H�e��զ��۲ߡA�̫�@��ҫh�b 17:00�U��
		printf("���G�G�{�b�O�W�Ǯɶ�\n"); //��ܵ��G 
	}
	else{
		printf("���G�G�{�b�O��Ǯɶ�\n"); //��ܵ��G 
	}
	return 0 ; //�^�ǭ� 0 

}
