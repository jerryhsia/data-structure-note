//
//  Sort.c
//  DataStructure
//
//  Created by Jerry Hsia on 11/20/14.
//  Copyright (c) 2014 Jerry Hsia. All rights reserved.
//

#include "Sort.h"

int main(int argc, const char * argv[]) {
    int datas[10] = {6, 3, 6, 8, 2, 4, 9, 0, 12, 43};
    LIST* list = init(datas, 10);
    
    bubble_sort(list);
    //select_sort(list);
    //insert_sort(list);
    
    print(list);
    return 0;
}
