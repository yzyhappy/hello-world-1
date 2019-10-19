//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
int main()
{
    double m = 1.78;
    double x = 1.779999, y = 2;
    double z = m / y, z1 = x / y;
    if (z == z1) {
        z = (m + x) / y;
    }
    printf("Z is %.9f\n", z);
    printf("Z1 is %.9f\n", z1);
    return 0;
}
