//
//  main.c
//  13
//
//  Created by 이예림 on 11/27/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
    //학번, 이름, 학점 멤버 적절히 정의
    int ID; //학번
    char name[20]; //이름 20자
    float grade; //점수
};

int main(int argc, const char * argv[]) {
    // 변수를 선언하고 적절한 값으로 초기화
    struct student stud = {123, "yerim", 4.3};
    struct student *stdPtr;
    
    stdPtr = &stud;
    
    // 학번, 이름, 학점을 다른 값으로 변경
    stdPtr->ID = 123456;
    strcpy(stud.name, "LEE");
    stud.grade = 3.7;
    
    //학번, 이름, 학점 각각 출력
    printf("ID : %i, name : %s, grade : %lf\n", stud.ID, stud.name, stud.grade);
    
    return 0;
}

