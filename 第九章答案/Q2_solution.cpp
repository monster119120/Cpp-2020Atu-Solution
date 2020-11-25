#include <iostream>
#include <cstring>

using namespace std;

void showOption(){
    cout<<"欢迎来到Logo绘制系统："<<endl;
    cout<<"1--笔向上"<<endl;
    cout<<"2--笔向下"<<endl;
    cout<<"3--左转"<<endl;
    cout<<"4--右转"<<endl;
    cout<<"5 n--前进n格（n为正整数）"<<endl;
    cout<<"6--打印20*20数组"<<endl;
    cout<<"9--数据结束（标记）"<<endl;
}

//direction: 1:north 2:east 3:south 4:west
int change_direction(int cmd, int direction)
{
    switch(cmd)
    {
        case 1: direction=1; break;
        case 2: direction=3; break;
        case 3: direction=direction-1; if (direction==0) direction=4; break;
        case 4: direction=direction+1; if (direction==5) direction=1; break;
    }

    return direction;
}

int step_forward(int arr[20][20], int direction, int *x, int *y)
{
    int num;
    cin>>num;
    switch(direction)
    {
        case 1: if (*x-num<0) {cout<<"ERROR!"<<endl; return -1;}
                for(int i=1;i<=num;i++) arr[*x-i][*y]=1;
                *x = *x-num;
                break;
        case 2: if (*y+num>19) {cout<<"ERROR!"<<endl; return -1;}
                for(int i=1;i<=num;i++) arr[*x][*y+i]=1;
                *y=*y+num;
                break;
        case 3: if (*x+num>19) {cout<<"ERROR!"<<endl; return -1;}
                for(int i=1;i<=num;i++) arr[*x+i][*y]=1;
                *x=*x+num;
                break;
        case 4: if (*y-num<0) {cout<<"ERROR!"<<endl; return -1;}
                for(int i=1;i<=num;i++) arr[*x][*y-i]=1;
                *y=*y-num;
                break;
    }

    return 1;
}

void print_array(int arr[20][20])
{
    for (int i=0; i<20; i++){
        for (int j=0; j<20; j++){
            if (arr[i][j]==0) cout<<' ';
            else cout<<'*';
        }
        cout<<endl;
    }
}

int handle_command(int arr[20][20], int cmd, int direction, int *x, int *y)
{
    switch(cmd)
    {
        case 1: direction =change_direction(cmd, direction); break;
        case 2: direction =change_direction(cmd, direction); break;
        case 3: direction =change_direction(cmd, direction); break;
        case 4: direction =change_direction(cmd, direction); break;
        case 5: step_forward(arr, direction, x, y); break;
        case 6: print_array(arr); break;
    }

    return direction;
}

int main()
{
    int floor[20][20], direction=1, command, x=0, y=0;
    memset(floor,0,sizeof(floor));

    showOption();

    while(1)
    {
        cin>>command;
        if (command ==9) break;
        direction = handle_command(floor, command, direction, &x, &y);
    }

    return 0;
}



