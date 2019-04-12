/* 計算機概論實務-基本練習作業-作業15*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/21 10:00*/ 
#include <stdio.h> //函示庫 
int main(void)
{
	printf("請輸入現在的時間："); 
	int hour,minute; //定義變數
	scanf("%d%d",&hour,&minute); // 輸入 
	if((hour==7 && minute>=30)||(hour>=8 && hour<=16)){ //條件
	//7:30 以前到校早自習，最後一堂課則在 17:00下課
		printf("結果：現在是上學時間\n"); //顯示結果 
	}
	else{
		printf("結果：現在是放學時間\n"); //顯示結果 
	}
	return 0 ; //回傳值 0 

}
