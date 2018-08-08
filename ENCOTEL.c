//  Created by João Victor Bravo on 08/08/2018.
//  Copyright © 2018 João Victor Bravo. All rights reserved.

#include <stdio.h>


int main(void) {
    char lala;
    while (scanf("%c", &lala) != EOF) {
        if (65 <= lala && lala <= 67)
            printf("%d", 2);
        
        else if (68 <= lala && lala <= 70)
            printf("%d", 3);
        
        else if (71 <= lala && lala <= 73)
            printf("%d", 4);
        
        else if (74 <= lala && lala <= 76)
            printf("%d", 5);
        
        else if (77 <= lala && lala <= 79)
            printf("%d", 6);
        
        else if (80 <= lala && lala <= 83)
            printf("%d", 7);
        
        else if (84 <= lala && lala <= 86)
            printf("%d", 8);
        
        else if (87 <= lala && lala <= 90)
            printf("%d", 9);
        
        else
            printf("%c", lala);
    }
    return 0;
}
