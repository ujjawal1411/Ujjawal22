 #include<stdio.h>
 main()
 {
    int x=10,y;
    y=++x + x++;
    x=y++;
    printf("%d %d", x,y);
 }