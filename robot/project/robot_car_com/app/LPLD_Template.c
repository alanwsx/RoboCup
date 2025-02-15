/*
* --------------"拉普兰德K60底层库"示例工程-----------------
*
* 测试硬件平台:  LPLD_K60 Card
* 版权所有:      北京拉普兰德电子技术有限公司
* 网络销售:      http://laplenden.taobao.com
* 公司门户:      http://www.lpld.cn
*
* 说明:    本工程基于"拉普兰德K60底层库"开发，
*          所有开源驱动代码均在"LPLD"文件夹下，调用说明见文档[#LPLD-003-N]
*
* 文件名:  LPLD_Template.c
* 用途:    Kinetis通用工程模板，用户可根据此模板工程新建自己的工程
*          本功能默认包含所有底层驱动，可以按需裁剪工程不需要的驱动，以减小生成文件
*
*/

//函数说明见function.h，变量说明见variable.h
#include "common.h"
#include "HAL_MCG.h"
#include "HAL_GPIO.h"
#include "HAL_PIT.h"
#include "HAL_FTM.h"
#include "HAL_LPTMR.h"
#include "HAL_UART.h"



#include "control.h"
#include "motor.h"
#include "infrare.h"
#include "util.h"
#include "car.h"
<<<<<<< .mine
#include "move.h"


=======
#include "move.h"
>>>>>>> .r18
//声明中断函数
void init_all()
{
  LPLD_GPIO_Init(PTB, 23, DIR_OUTPUT, OUTPUT_L, IRQC_DIS);
  infrare_init();
  motor_init();
  car_init();
<<<<<<< .mine
  move_init(); //应该在control_init前面执行
  control_init();
=======

 control_init();
   move_init();
  
>>>>>>> .r18
}

int path[20]={23,27,28,29,30,
              31,32,28,27,30,
              29,31,32,27,28,
              29,30,27,28,29};

void main (void)
{
  init_all();
<<<<<<< .mine
  
=======
  move_by_path(20,path);
//do_turn_left();
>>>>>>> .r18
  while(1)
  {
<<<<<<< .mine
    
=======
     
>>>>>>> .r18
  }
  
 }
/********************************************************************/

