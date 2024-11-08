#include <stdio.h>

int main (void)
{
  // 배열
  // int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다.
  // int subway_2 = 40;
  // int subway_3 = 50;

  // printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
  // printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
  // printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);

  // but 100칸이라면 100 번을 다 선언해야함
  // 그래서 배열이 필요
  
  // 여러개의 정수형 변수를 동시에 생성
  int subway_array[3]; // [0][1][2]
  subway_array[0] = 30;
  subway_array[1] = 40;
  subway_array[2] = 50;

  for (int i =0; i <3; i++)
  {
    printf("지하철 %d 호차에 %d 명이 타고 있습니다\n", i+1, subway_array[i]);
  }
  return 0;
}