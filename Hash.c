//  Created by João Victor Bravo on 08/2018.
//  Copyright © 2018 João Victor Bravo. All rights reserved.

#include <stdio.h>

int main()
{
    unsigned long long t;
    scanf("%llu", &t);
    unsigned long long int a,b,x,n,c,d,m,counter = 0;
    
    
    for(int ordem = 0; ordem <= t; ordem++)
    {
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
        for(unsigned long int i = 0; i <= n; i++)
        {
            unsigned long long int h = (a * (x+i) + b) % m;
            if (h >= c && h <=d)
                counter++;
        }
        printf("%llu\n", counter);
    }
    
    return 0;
}
