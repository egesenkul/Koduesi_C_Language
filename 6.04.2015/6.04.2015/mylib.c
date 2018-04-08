//
//  mylib.c
//  6.04.2015
//
//  Created by Ege Şenkul on 6.04.2015.
//  Copyright (c) 2015 Ege Şenkul. All rights reserved.
//

#include "mylib.h"
int fact(int n){
    int i, f=1;
    for (i=1; i<=n; i++) {
        f=f*i;
    }
    return f;
}