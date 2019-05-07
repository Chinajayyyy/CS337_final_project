//
//  main.cpp
//  find_xyz
//
//  Created by 范哲栋 on 2018/12/10.
//  Copyright © 2018 Shanghai Jiao Tong University. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

struct Point
{
    float x = 0;
    float y = 0;
    float z = 0;
};

float Sum(Point p)
{
    return (p.x+p.y+p.z);
};

int main(int argc, const char * argv[])
{
    string file_name1 = "/Users/Fanzhedong/Desktop/hairstyles/strands0000";
    float flt1;
    Point p1;
    int flag = 0;
    ifstream fin1;
    float x_max = 0;
    float x_min = 0;
    float y_max = 0;
    float y_min = 0;
    float z_max = 0;
    float z_min = 0;
    string tmp;
    string file_name;
    int cnt = 0;
    
    for(int i=1;i<10;i++)
    {
        tmp = file_name1.append(to_string(i));
        //cout << tmp << endl;
        file_name = tmp.append(".data");
        //cout << "compare_file: " << file_name << endl;
        fin1.open(file_name,ios::in|ios::binary);
        
        if(!fin1)
        {
            //cout << "open file1 failed!";
        }
        
        while (fin1.read((char *)&flt1,sizeof(flt1)))
        {
            if (abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
            if(flag == 0)
            {
                p1.x = flt1;
                flag++;
                if(cnt==0)    //初始化
                {
                    x_max = p1.x;
                    x_min = p1.x;
                    cnt++;
                }
                if(p1.x>x_max)
                {
                    x_max = p1.x;
                }
                if(p1.x<x_min)
                {
                    x_min = p1.x;
                }
                //cout << p1.x << ' ' << p2.x << endl;
                continue;
            }
            if(flag == 1)
            {
                p1.y = flt1;
                flag++;
                if(cnt==1)
                {
                    y_max = p1.y;
                    y_min = p1.y;
                    cnt++;
                }
                if(p1.y>y_max)
                {
                    y_max = p1.y;
                }
                if(p1.y<y_min)
                {
                    y_min = p1.y;
                }
                //cout << p1.y << ' ' << p2.y << endl;
                continue;
            }
            if(flag == 2)
            {
                p1.z = flt1;
                flag = 0;
                if(cnt==2)
                {
                    z_max = p1.z;
                    z_min = p1.z;
                    cnt++;
                }
                if(p1.z>z_max)
                {
                    z_max = p1.z;
                }
                if(p1.z<z_min)
                {
                    z_min = p1.z;
                }
                //cout << p1.z << ' ' << p2.z << endl;
            }
            //cout << sum1 << ' ' << sum2 << endl;
        }
        
        file_name1.pop_back();
        //cout << "final_dlt= " << final_dlt << endl;
        //cout << "done!" << endl;
        fin1.close();
        
        //cout << "x_max= " << x_max << endl;
        //cout << "x_min= " << x_min << endl;
        //cout << "y_max= " << y_max << endl;
        //cout << "y_min= " << y_min << endl;
        //cout << "z_max= " << z_max << endl;
        //cout << "z_min= " << z_min << endl;
    }
    
    cnt = 0;
    
    for(int i=10;i<100;i++)
    {
        file_name1.pop_back();
        
        tmp = file_name1.append(to_string(i));
        //cout << tmp << endl;
        file_name = tmp.append(".data");
        //cout << "compare_file: " << file_name << endl;
        fin1.open(file_name,ios::in|ios::binary);
        
        if(!fin1)
        {
            //cout << "open file1 failed!";
        }
        
        while (fin1.read((char *)&flt1,sizeof(flt1)))
        {
            if (abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
            if(flag == 0)
            {
                p1.x = flt1;
                flag++;
                if(cnt==0)    //初始化
                {
                    x_max = p1.x;
                    x_min = p1.x;
                    cnt++;
                }
                if(p1.x>x_max)
                {
                    x_max = p1.x;
                }
                if(p1.x<x_min)
                {
                    x_min = p1.x;
                }
                //cout << p1.x << ' ' << p2.x << endl;
                continue;
            }
            if(flag == 1)
            {
                p1.y = flt1;
                flag++;
                if(cnt==1)
                {
                    y_max = p1.y;
                    y_min = p1.y;
                    cnt++;
                }
                if(p1.y>y_max)
                {
                    y_max = p1.y;
                }
                if(p1.y<y_min)
                {
                    y_min = p1.y;
                }
                //cout << p1.y << ' ' << p2.y << endl;
                continue;
            }
            if(flag == 2)
            {
                p1.z = flt1;
                flag = 0;
                if(cnt==2)
                {
                    z_max = p1.z;
                    z_min = p1.z;
                    cnt++;
                }
                if(p1.z>z_max)
                {
                    z_max = p1.z;
                }
                if(p1.z<z_min)
                {
                    z_min = p1.z;
                }
                //cout << p1.z << ' ' << p2.z << endl;
            }
            //cout << sum1 << ' ' << sum2 << endl;
        }
        
        file_name1.pop_back();
        //cout << "final_dlt= " << final_dlt << endl;
        //cout << "done!" << endl;
        fin1.close();
        
        //cout << "x_max= " << x_max << endl;
        //cout << "x_min= " << x_min << endl;
        //cout << "y_max= " << y_max << endl;
        //cout << "y_min= " << y_min << endl;
        //cout << "z_max= " << z_max << endl;
        //cout << "z_min= " << z_min << endl;
    }
    
    cnt = 0;
    
    for(int i=100;i<515;i++)
    {
        file_name1.pop_back();
        file_name1.pop_back();
        
        tmp = file_name1.append(to_string(i));
        //cout << tmp << endl;
        file_name = tmp.append(".data");
        //cout << "compare_file: " << file_name << endl;
        fin1.open(file_name,ios::in|ios::binary);
        
        if(!fin1)
        {
            //cout << "open file1 failed!";
        }
        
        while (fin1.read((char *)&flt1,sizeof(flt1)))
        {
            if (abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
            if(flag == 0)
            {
                p1.x = flt1;
                flag++;
                if(cnt==0)    //初始化
                {
                    x_max = p1.x;
                    x_min = p1.x;
                    cnt++;
                }
                if(p1.x>x_max)
                {
                    x_max = p1.x;
                }
                if(p1.x<x_min)
                {
                    x_min = p1.x;
                }
                //cout << p1.x << ' ' << p2.x << endl;
                continue;
            }
            if(flag == 1)
            {
                p1.y = flt1;
                flag++;
                if(cnt==1)
                {
                    y_max = p1.y;
                    y_min = p1.y;
                    cnt++;
                }
                if(p1.y>y_max)
                {
                    y_max = p1.y;
                }
                if(p1.y<y_min)
                {
                    y_min = p1.y;
                }
                //cout << p1.y << ' ' << p2.y << endl;
                continue;
            }
            if(flag == 2)
            {
                p1.z = flt1;
                flag = 0;
                if(cnt==2)
                {
                    z_max = p1.z;
                    z_min = p1.z;
                    cnt++;
                }
                if(p1.z>z_max)
                {
                    z_max = p1.z;
                }
                if(p1.z<z_min)
                {
                    z_min = p1.z;
                }
                //cout << p1.z << ' ' << p2.z << endl;
            }
            //cout << sum1 << ' ' << sum2 << endl;
        }
        
        file_name1.pop_back();
        //cout << "final_dlt= " << final_dlt << endl;
        //cout << "done!" << endl;
        fin1.close();
        
        //cout << "x_max= " << x_max << endl;
        //cout << "x_min= " << x_min << endl;
        //cout << "y_max= " << y_max << endl;
        //cout << "y_min= " << y_min << endl;
        //cout << "z_max= " << z_max << endl;
        //cout << "z_min= " << z_min << endl;
    }
    
    cout << "x_max= " << x_max << endl;
    cout << "x_min= " << x_min << endl;
    cout << "y_max= " << y_max << endl;
    cout << "y_min= " << y_min << endl;
    cout << "z_max= " << z_max << endl;
    cout << "z_min= " << z_min << endl;
    
}
