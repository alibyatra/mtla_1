//
//  main.c
//  test
//
//  Created by Jeme Jbareen on 11/17/19.
//  Copyright © 2019 Jeme Jbareen. All rights reserved.
//

#include <stdio.h>
#include "myMath.h"
int main(int argc, const char * argv[]) {
    double x=0;
    printf("please inset a real number:\n");
    scanf("%lf",&x);
    double y1 = sub(add(Exp(x),pow(x,3)),2);
    printf("The value of f(x)=e^x+x^3-2 at the point:%f is :%f\n",x,y1);
    double y2 = add(mul(3,x),mul(2,pow(x,2)));
    printf("The value of f(x)=3x+2x^2 at the point :%f is :%f\n",x,y2);
    double y3 = sub(div(mul((pow(x,3)),4),5),mul(x,2));
    printf("The value of f(x)=(4x^3)/5-2x at the point:%f is: %f\n",x,y3);
    return 0;
}
