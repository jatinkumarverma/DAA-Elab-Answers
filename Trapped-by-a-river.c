
#include <stdio.h>
#include <math.h>
int main()
{
    float ramp1,rate1,time1,speed1,distance,wor;
    char ch[20];
    scanf("%s",ch);
    scanf("%f",&ramp1);
    scanf("%f",&rate1);
    scanf("%f",&wor);
    time1=sqrt(2.0*ramp1/rate1);
    speed1=time1*rate1;
    distance=speed1*speed1/9.805;
    if(distance<(wor-5)){   
        printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, SPLASH!",ch,speed1,ramp1,distance,wor);
    }
    else if(distance>(wor-5)&&distance<wor){   
        printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, BARELY MADE IT!",ch,speed1,ramp1,distance,wor); 
    }
    else{   
        printf("%s will reach a speed of %0.2f m/s on a %0.0f ramp crossing %0.1f of %0.1f meters, LIKE A BOSS!",ch,speed1,ramp1,distance,wor);
    }
    return 0;
}
