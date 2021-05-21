#include <iostream>  
    #define LENGTH 8  
    using namespace std;  
    //测试用的代码，bubbleSort函数  
    int main() {  
        int temp,number[LENGTH]={95,45,15,78,84,51,24,12};  
        for(int i=0;i<LENGTH;i++)  
            for(int j=0;j<LENGTH-1-i;j++)  
                if(number[j]>number[j+1]) {  
                    temp=number[j];  
                    number[j]=number[j+1];  
                    number[j+1]=temp;  
                } //if end  
        for(int i=0;i<LENGTH;i++) cout<<number[i]<<" ";  
        cout<<endl;  
    }//main end  