#include "sys.h"
#include "delay.h"

#include "led.h"

#include "bmp.h"
#include "oled.h"
void display(void);
int main(void){ 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
	delay_init(168);  //��ʼ����ʱ����
	LED_Init();				//��ʼ��LED�˿� 	
//	TIM3_Int_Init(5000-1,8400-1);	//��ʱ��ʱ��84M����Ƶϵ��8400������84M/8400=10Khz�ļ���Ƶ�ʣ�����5000��Ϊ500ms   
	OLED_Init();
	OLED_ColorTurn(0);//0������ʾ��1 ��ɫ��ʾ
  OLED_DisplayTurn(0);//0������ʾ 1 ��Ļ��ת��ʾ
	OLED_Clear();


		OLED_WR_Byte(0x2e,OLED_CMD); //�رչ���
		OLED_WR_Byte(0x2a,OLED_CMD); //ˮƽ��ֱ��ˮƽ�������� 29/2a
		OLED_WR_Byte(0x00,OLED_CMD); //�����ֽ�
		OLED_WR_Byte(0x00,OLED_CMD); //��ʼҳ 0
		OLED_WR_Byte(0x07,OLED_CMD); //����ʱ����
		OLED_WR_Byte(0x07,OLED_CMD); //��ֹҳ 1
		OLED_WR_Byte(0x00,OLED_CMD); //��ֱ����ƫ����
	//	display();
		//OLED_WR_Byte(0x2F,OLED_CMD); //��������
					OLED_Display_128x64(TOP);
					delay_ms(5000);
	while(1)
	{

	display();
//OLED_Display_128x64(bmp3);
//		
//	delay_ms(2000);	
//	delay_ms(2000);	
//		OLED_Clear();

	}
}
void display(void)
{
	unsigned char a;
	a=100;

				OLED_Display_128x64(gImage_001);
			delay_ms(a);
			OLED_Display_128x64(gImage_002);
		delay_ms(a);
			OLED_Display_128x64(gImage_003);
		delay_ms(a);
			OLED_Display_128x64(gImage_004);
		delay_ms(a);
			OLED_Display_128x64(gImage_005);
		delay_ms(a);	
			OLED_Display_128x64(gImage_006);
		delay_ms(a);
			OLED_Display_128x64(gImage_007);
		delay_ms(a);
			OLED_Display_128x64(gImage_008);
		delay_ms(a);
			OLED_Display_128x64(gImage_009);
		delay_ms(a);
			OLED_Display_128x64(gImage_010);
		delay_ms(a);
			OLED_Display_128x64(gImage_011);
		delay_ms(a);
			OLED_Display_128x64(gImage_012);
		delay_ms(a);
			OLED_Display_128x64(gImage_013);
		delay_ms(a);
			OLED_Display_128x64(gImage_014);
		delay_ms(a);
		  OLED_Display_128x64(gImage_015);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_016);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_017);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_018);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_019);	
		delay_ms(a);
			OLED_Display_128x64(gImage_020);
		delay_ms(a);
			OLED_Display_128x64(gImage_021);
		delay_ms(a);
			OLED_Display_128x64(gImage_022);
		delay_ms(a);
			OLED_Display_128x64(gImage_023);
		delay_ms(a);
			OLED_Display_128x64(gImage_024);
		delay_ms(a);
		  OLED_Display_128x64(gImage_025);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_026);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_027);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_028);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_029);
		delay_ms(a);
			OLED_Display_128x64(gImage_030);
		delay_ms(a);
			OLED_Display_128x64(gImage_031);
		delay_ms(a);
			OLED_Display_128x64(gImage_032);
		delay_ms(a);
			OLED_Display_128x64(gImage_033);
		delay_ms(a);
			OLED_Display_128x64(gImage_034);
		delay_ms(a);
		  OLED_Display_128x64(gImage_035);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_036);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_037);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_038);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_039);
		delay_ms(a);
			OLED_Display_128x64(gImage_040);
		delay_ms(a);
			OLED_Display_128x64(gImage_041);
		delay_ms(a);
			OLED_Display_128x64(gImage_042);
		delay_ms(a);
			OLED_Display_128x64(gImage_043);
		delay_ms(a);
			OLED_Display_128x64(gImage_044);
		delay_ms(a);
		  OLED_Display_128x64(gImage_045);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_046);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_047);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_048);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_049);
		delay_ms(a);
			OLED_Display_128x64(gImage_050);
		delay_ms(a);
			OLED_Display_128x64(gImage_051);
		delay_ms(a);
			OLED_Display_128x64(gImage_052);
		delay_ms(a);
			OLED_Display_128x64(gImage_053);
		delay_ms(a);
			OLED_Display_128x64(gImage_054);
		delay_ms(a);
		  OLED_Display_128x64(gImage_055);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_056);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_057);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_058);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_059);
		delay_ms(a);
			OLED_Display_128x64(gImage_060);
		delay_ms(a);
			OLED_Display_128x64(gImage_061);
		delay_ms(a);
			OLED_Display_128x64(gImage_062);
		delay_ms(a);
			OLED_Display_128x64(gImage_063);
		delay_ms(a);
			OLED_Display_128x64(gImage_064);
		delay_ms(a);
		  OLED_Display_128x64(gImage_065);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_066);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_067);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_068);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_069);	
		delay_ms(a);
			OLED_Display_128x64(gImage_070);
		delay_ms(a);
			OLED_Display_128x64(gImage_071);
		delay_ms(a);
			OLED_Display_128x64(gImage_072);
		delay_ms(a);
			OLED_Display_128x64(gImage_073);
		delay_ms(a);
			OLED_Display_128x64(gImage_074);
		delay_ms(a);
		  OLED_Display_128x64(gImage_075);	
		delay_ms(a);
		  OLED_Display_128x64(gImage_076);	
				
}		
