//
//  power.c
//  test
//
//  Created by Jeme Jbareen on 11/17/19.
//  Copyright © 2019 Jeme Jbareen. All rights reserved.
//

#include <stdio.h>
#include"myMath.h"

double Pow(double x, int y)
{
    double sum=1;
    if ( y==0){
        return 1;
    }
    while (y!=0)
    {
        if (y>0)
        {
            sum=sum*x;
            y--;
        }
        else if  (y<0)
        {
        sum=sum/x;
        y++;
        }
    }
    return sum;
}
double Exp(int x){
    double e =2.71828;
    return Pow(e,x);
}


