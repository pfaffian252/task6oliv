#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>
void Pifagor(float x, float y, float l, float angle, int n)
{
  float k=0.6, x1, y1;
  x1=x+l*cos(angle);
  y1=y-l*sin(angle);
  line (x, y, x1, y1);
  if (n<=1) return;
  Pifagor(x1, y1, k*l, angle+M_PI_4, n-1);
  Pifagor(x1, y1, k*l, angle-M_PI_4, n-1);
}
int main ()
{
    int n;
    printf("enter the number of levels to draw.\n");
    scanf("%d", &n);
int gd = DETECT;
    int gm;
    initgraph(&gd, &gm,"");

Pifagor(200, 250, 150, 0, n);
getch();
closegraph();
   return 0;

}
