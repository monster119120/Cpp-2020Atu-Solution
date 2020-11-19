#include <iostream>
#include <algorithm>
#include <cstdio>
#include <limits.h>
using namespace std;


void showOption(){
    cout<<"欢迎使用股票分析系统："<<endl;
    cout<<"1--输入股票价格序列"<<endl;
    cout<<"2--查询股票价格"<<endl;
    cout<<"3--输出升序的股票价格序列"<<endl;
    cout<<"4--输出最大值和最小值的日期"<<endl;
    cout<<"5--一笔交易的最大利润"<<endl;
    cout<<"6--多笔交易的最大利润"<<endl;
    cout<<"7--退出"<<endl;
}

void getPrice(int price[100],int &num){
    num=0;
    for(int i=0;;i++){
        cin>>price[i];
        if(price[i]==-1){
            return;
        }
        num++;
    }
}

void showPrice(int price[100],int &num){
    for(int i=0;i<num;i++){
        cout<<price[i]<<" ";
    }
    cout<<endl;
}

void sortPrice(int price[100],int sortedPrice[100],int num){
    for(int i=0;i<num;i++){
        sortedPrice[i] = price[i];
    }
    sort(sortedPrice,sortedPrice+num);
}

void showIncrePrice(int price[100],int sortedPrice[100],int &num){
    sortPrice(price,sortedPrice,num);
    for(int i=0;i<num;i++){
        cout<<sortedPrice[i]<<" ";
    }
    cout<<endl;
}

void getMaxPirce(int price[100],int num){
    int ans[2];
    int mmin = INT_MAX;//记录最小值
    int mmax = INT_MIN;//记录最大值
    
    for(int i=0;i<num;i++){
        if(price[i]<mmin){
            mmin = price[i];
            ans[0] = i;
        }
        if(price[i]>mmax){
            mmax = price[i];
            ans[1] = i;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
}

int SingleProfit(int prices[100],int num) {
     if(!num){
            return 0;
        }
        int ans=0,mmin=prices[0];
        for(int i=1;i<num;i++){
            ans = max(ans,prices[i]-mmin);
            mmin = min(mmin,prices[i]);
        }
        return ans;
 }

int MultiProfit(int  prices[100],int num) {
  //注：只需要计算连续两天的收益是否为正，为正数则累计即可      
  if(!num){
            return 0;
        }
        int ans=0;
        for(int i=1;i<num;i++){
            if(prices[i]>prices[i-1]){
                ans+=prices[i]-prices[i-1];
            }
        }
        return ans;
    }

int main()
{
    char t;
    int price[100]={-1};
    int sortedPrice[100]={-1};
    int num =0;
    
    showOption();

    while(1){
        cin>>t;
        switch (t){
            case '1':
                getPrice(price,num);
                break;
            case '2':
                showPrice(price,num);
                break;
            case '3':
                showIncrePrice(price,sortedPrice,num);
                break;
            case '4':
                getMaxPirce(price,num);
                break;
            case '5':
                cout<<SingleProfit(price,num)<<endl;
                break;
            case '6':
                cout<<MultiProfit(price,num)<<endl;
                break;
        }
        if(t=='7'){
            break;
        }
    }
    return 0;
}