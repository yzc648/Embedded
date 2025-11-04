#include <stdio.h>

typedef enum {        //枚举Speed
    GPIO_Speed_2MHz,
    GPIO_Speed_10MHz,
    GPIO_Speed_50MHz,
} GPIO_Speed_Type;

typedef struct {   //初始化
    GPIO_Speed_Type GPIO_Speed
} GPIO_InitTypeDef;

void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct);

int main() {
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_StructureInit(&GPIO_InitStructure);
    printf("GPIO_Speed: %d\n", GPIO_InitStructure.GPIO_Speed);//测试
    return 0;
}

void GPIO_StructureInit(GPIO_InitTypeDef* GPIO_InitStruct) {
    GPIO_InitStruct->GPIO_Speed = GPIO_Speed_2MHz; //默认值
}