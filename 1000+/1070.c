#include <stdio.h>
#include <string.h>

/*
    水题 注意当单价相同的时候选择容量最大的
*/
int main()
{
    int T, n, vol, tag, vol_min;
    double min, per, price;
    char brand[102], brand_min[102];
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        tag = min = 0;
        while (n--)
        {
            scanf("%s", brand);
            scanf("%lf", &price);
            scanf("%d", &vol);
            if (vol < 200)
                continue;
            else if (vol < 1000)
            {
                per = (double) price / (vol / 200);
                if (tag)
                {
                    if (per < min  || (per == min && vol > vol_min))
                    {
                        min = per;
                        vol_min = vol;
                        strcpy(brand_min, brand);
                    }
                }
                else
                {
                    min = per;
                    vol_min = vol;
                    strcpy(brand_min, brand);
                    tag = 1;
                }
            }
            else if (vol >= 1000)
            {
                per = price / 5.0;
                if (tag)
                {
                    if (per < min || (per == min && vol > vol_min))
                    {
                        min = per;
                        vol_min = vol;
                        strcpy(brand_min, brand);
                    }
                }
                else
                {
                    min = per;
                    vol_min = vol;
                    strcpy(brand_min, brand);
                    tag = 1;
                }
            }
        }
        printf("%s\n", brand_min);
    }
    return 0;
}
