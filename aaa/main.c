//
//  main.c
//  aaa
//
//  Created by 한진섭 on 2019. 3. 28..
//  Copyright © 2017년 한진섭. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0,y=1, sum=0, n,i=3,cnt=0;
    scanf("%d", &n);
    printf("%d %d ", x,y);
    while(i<=n)
    {
        cnt++; sum=x+y;
        printf("%d ", sum);
        if(cnt%2 == 1) x=sum;
        else y=sum;
        i++;
    }
    return 0;
}
