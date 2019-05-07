//
//  main.cpp
//  final
//
//  Created by 范哲栋 on 2018/12/11.
//  Copyright © 2018 Shanghai Jiao Tong University. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


/*int given_Zone1 = 0;
 int given_Zone2 = 0;
 int given_Zone3 = 0;
 int given_Zone4 = 0;
 int given_Zone5 = 0;
 int given_Zone6 = 0;
 int given_Zone7 = 0;
 int given_Zone8 = 0;
 int given_Zone9 = 0;
 int given_Zone10 = 0;
 int given_Zone11= 0;
 int given_Zone12 = 0;
 int given_Zone13 = 0;
 int given_Zone14 = 0;
 int given_Zone15 = 0;
 int given_Zone16 = 0;
 int given_Zone17 = 0;
 int given_Zone18 = 0;
 int given_Zone19 = 0;
 int given_Zone20 = 0;
 int given_Zone21 = 0;
 int given_Zone22 = 0;
 int given_Zone23 = 0;
 int given_Zone24 = 0;
 int given_Zone25 = 0;
 int given_Zone26 = 0;
 int given_Zone27 = 0;
 */

int given_zone[65] = {0};
int compare_zone[65] = {0};
int new_zone[17] = {0};
int new_zone2[17] = {0};

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

void Division1(Point p)
{
    if(p.x < -0.165 && p.x >= -0.33)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[1] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[2] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[3] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[4] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[5] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[6] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[7] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[8] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[9] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[10] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[11] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[12] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[13] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[14] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[15] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[16] += 1 ;
            }
        }
    }                                                                   //done
    
    if(p.x < 0 && p.x >= -0.165)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[17] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[18] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[19] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[20] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[21] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[22] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[23] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[24] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[25] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[26] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[27] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[28] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[29] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[30] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[31] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[32] += 1 ;
            }
        }
    }
    
    if(p.x < 0.165 && p.x >= 0.0)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[33] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[34] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[35] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[36] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[37] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[38] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[39] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[40] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[41] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[42] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[43] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[44] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[45] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[46] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[47] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[48] += 1 ;
            }
        }
    }
    
    if(p.x < 0.33 && p.x >= 0.165)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[49] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[50] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[51] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[52] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[53] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[54] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[55] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[56] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[57] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[58] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[59] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[60] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                given_zone[61] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                given_zone[62] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                given_zone[63] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                given_zone[64] += 1 ;
            }
        }
    }
    
}

void Division2(Point p)
{
    if(p.x < -0.165 && p.x >= -0.33)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[1] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[2] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[3] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[4] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[5] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[6] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[7] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[8] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[9] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[10] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[11] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[12] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[13] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[14] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[15] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[16] += 1 ;
            }
        }
    }
    
    if(p.x < 0 && p.x >= -0.165)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[17] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[18] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[19] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[20] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[21] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[22] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[23] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[24] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[25] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[26] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[27] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[28] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[29] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[30] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[31] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[32] += 1 ;
            }
        }
    }
    
    if(p.x < 0.165 && p.x >= 0.0)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[33] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[34] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[35] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[36] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[37] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[38] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[39] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[40] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[41] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[42] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[43] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[44] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[45] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[46] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[47] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[48] += 1 ;
            }
        }
    }
    
    if(p.x < 0.33 && p.x >= 0.165)
    {
        if(p.y < 1.97 && p.y >= 1.7075)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[49] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[50] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[51] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[52] += 1 ;
            }
        }
        
        if(p.y < 1.7075 && p.y >= 1.445)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[53] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[54] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[55] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[56] += 1 ;
            }
        }
        
        if(p.y < 1.445 && p.y >= 1.1825)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[57] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[58] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[59] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[60] += 1 ;
            }
        }
        
        if(p.y < 1.1825 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.1575)
            {
                compare_zone[61] += 1 ;
            }
            if(p.z < 0.1575 && p.z >= 0.015)
            {
                compare_zone[62] += 1 ;
            }
            if(p.z < 0.015 && p.z >= -0.1275)
            {
                compare_zone[63] += 1 ;
            }
            if(p.z < -0.1275 && p.z >= -0.27)
            {
                compare_zone[64] += 1 ;
            }
        }
    }
    
}

struct Unit
{
    int num;
    int index;
};

int PartSort(Unit* array,int left,int right)
{
    int& key = array[right].num;
    while(left < right)
    {
        while(left < right && array[left].num >= key)
        {
            ++left;
        }
        while(left < right && array[right].num <= key)
        {
            --right;
        }
        swap(array[left],array[right]);
    }
    swap(array[left].num,key);
    return left;
}

void QuickSort(Unit* array,int left,int right)
{
    assert(array);
    if(left >= right)//表示已经完成一个组
    {
        return;
    }
    int index = PartSort(array,left,right);//枢轴的位置
    QuickSort(array,left,index - 1);
    QuickSort(array,index + 1,right);
}

void Sort(Unit* array,int left,int right)
{
    int max_index;
    for(int i=left;i<=right;i++)
    {
        max_index = i;
        for(int j=i+1;j<=right;j++)
        {
            if(array[j].num > array[max_index].num)
            {
                max_index = j;
            }
        }
        if(i!=max_index)
        {
            Unit tmp;
            tmp = array[i];
            array[i] = array[max_index];
            array[max_index] = tmp;
            //max_index = j;
        }
    }
}

/*void Division2(Point p)
{
    if(p.x < -0.11 && p.x >= -0.33)
    {
        if(p.y < 1.97 && p.y >= 1.62)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[1] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[2] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[3] += 1 ;
            }
        }
        
        if(p.y < 1.62 && p.y >= 1.27)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[4] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[5] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[6] += 1 ;
            }
        }
        
        if(p.y < 1.27 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[7] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[8] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[9] += 1 ;
            }
        }
    }
    
    if(p.x < 0.11 && p.x >= -0.11)
    {
        if(p.y < 1.97 && p.y >= 1.62)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[10] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[11] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[12] += 1 ;
            }
        }
        
        if(p.y < 1.62 && p.y >= 1.27)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[13] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[14] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[15] += 1 ;
            }
        }
        
        if(p.y < 1.27 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[16] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[17] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[18] += 1 ;
            }
        }
    }
    
    if(p.x < 0.33 && p.x >= 0.11)
    {
        if(p.y < 1.97 && p.y >= 1.62)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[19] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[20] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[21] += 1 ;
            }
        }
        
        if(p.y < 1.62 && p.y >= 1.27)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[22] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[23] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[24] += 1 ;
            }
        }
        
        if(p.y < 1.27 && p.y >= 0.92)
        {
            if(p.z < 0.30 && p.z >= 0.11)
            {
                compare_zone[25] += 1 ;
            }
            if(p.z < 0.11 && p.z >= -0.08)
            {
                compare_zone[26] += 1 ;
            }
            if(p.z < -0.08 && p.z >= -0.27)
            {
                compare_zone[27] += 1 ;
            }
        }
    }
    
}*/


int main(int argc, const char * argv[])
{
    string file_name1 = "/Users/Fanzhedong/Desktop/hairstyles/strands00001.data";
    string file_name2 = "/Users/Fanzhedong/Desktop/hairstyles/strands0000";
    string file_name3 = "/Users/Fanzhedong/Desktop/111/output.txt";
    string str_line;
    float flt1;
    float flt2;
    int flt3;
    Point p1;
    Point p2;
    int flag = 0;
    //float sum1 = 0;
    //float sum2 = 0;
    ifstream fin1;
    ifstream fin2;
    ifstream fin3;
    //int cnt = 1; //numbers of file has read in
    float dlt = 0;
    float final_dlt = 0;
    string tmp;
    string file_name;
    string final_file;
    Unit data[65];
    int new_cnt = 1;
    
    fin3.open(file_name3);
    for(int i=0;i<16;i++)
    {
        fin3 >> flt3;
        new_zone[new_cnt] = flt3;
        new_cnt++;
    }
    /*for(int i=1;i<17;i++)
    {
        cout << new_zone[i] << endl;
    }*/
    
    //读取元文件
    fin1.open(file_name1,ios::in|ios::binary);
    if(!fin1)
    {
        //cout << "open file1 failed!";
    }
    while (fin1.read((char *)&flt1,sizeof(flt1)))
    {
        if(abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
        if(flag == 0)   //读p1点的x坐标
        {
            p1.x = flt1;
            flag++;
            continue;
        }
        if(flag == 1)   //读p1点的y坐标
        {
            p1.y = flt1;
            flag++;
            continue;
        }
        if(flag == 2)
        {
            p1.z = flt1;
            flag = 0;   //读p1点的z坐标
        }
        Division1(p1);
    }
    fin1.close();
    
    //将所有区域内的点的数量按从大到小排序
    /*for(int l=1;l<65;l++)
    {
        data[l].num = given_zone[l];
        data[l].index = l;
    }
    Sort(data,1,64);
    for(int l=1;l<65;l++)
    {
        cout << data[l].num << ' ' << data[l].index << endl ;
    }*/
    
    /*for(int i=1;i<65;i++)
     {
     cout << "Zone" << i << ": " << given_zone[i] << endl;
     }*/
    
    //读取待测文件
    for(int i=2;i<515;i++)
    {
        //if(i==372 || i==274) continue;
        for(int k=0;k<65;k++)               //初始化数组
        {
            compare_zone[k] = 0;
        }
        
        dlt = 0;
        if(i<100&&i>=10)
        {
            file_name2.pop_back();
        }
        if(i>=100&&i<515)
        {
            file_name2.pop_back();
            file_name2.pop_back();
        }
        
        tmp = file_name2.append(to_string(i));
        //cout << tmp << endl;
        file_name = tmp.append(".data");
        //cout << "compare_file: " << file_name << endl;
        
        fin2.open(file_name,ios::in|ios::binary);
        
        if(!fin2)
        {
            cout << "open " << file_name << " failed!" << endl;
            file_name2.pop_back();
            continue;
        }
        
        flag = 0;
        
        while (fin2.read((char *)&flt2,sizeof(flt2)))           //读一个文件中的所有分隔
        {
            
            if (abs(flt2-1.4013e-41)<1e-30||abs(flt2-1.4013e-43)<1e-30) continue;
            if(flag == 0)
            {
                p2.x = flt2;    //读p2的x坐标
                flag++;
                continue;
            }
            if(flag == 1)
            {
                p2.y = flt2;    //读p2的y坐标
                flag++;
                continue;
            }
            if(flag == 2)
            {
                p2.z = flt2;
                flag = 0;
            }
            Division2(p2);
        }
        
        /*for(int q=1;q<65;q++)
        {
            cout << q << ":" << compare_zone[q] << endl;
        }*/
        int new_ccnt = 0;
        for(int q=1;q<17;q++)
        {
            new_zone2[q] = compare_zone[1+new_ccnt*4] + compare_zone[1+new_ccnt*4+1] + compare_zone[1+new_ccnt*4+2] + compare_zone[1+new_ccnt*4+3];
            new_ccnt++;
            //cout << new_zone2[q] << endl;
        }
        
        
        /*for(int i=1;i<28;i++)
         {
         cout << "Zone" << i << ": " << compare_zone[i] << endl;
         }
         */
        /*
        for(int j=1;j<65;j++)
        {
            dlt += abs(given_zone[j]-compare_zone[j]);
        }*/
        
        for(int j=1;j<17;j++)
        {
            dlt += abs(new_zone[j]-new_zone2[j]);
        }
        
        //cnt++;
        //cout << i << ": " << dlt << endl;
        if(i==2)
        {
            final_dlt = abs(dlt);
            final_file = file_name;
        }
        if(abs(dlt)<final_dlt)
        {
            final_dlt = abs(dlt);
            final_file = file_name ;
        }
        file_name2.pop_back();
        //cout << "final_dlt= " << final_dlt << endl;
        //cout << "done!" << endl;
        fin2.close();
    }
    
    cout << "min_dlt:= " << final_dlt << endl;
    cout << "min_dlt_file:= " << final_file << endl;
    
    /*
     for(int i=10;i<100;i++)
     {
     dlt = 0;
     file_name2.pop_back();
     
     tmp = file_name2.append(to_string(i));
     //cout << tmp << endl;
     file_name = tmp.append(".data");
     //cout << "compare_file: " << file_name << endl;
     fin1.open(file_name1,ios::in|ios::binary);
     fin2.open(file_name,ios::in|ios::binary);
     
     
     if(!fin1)
     {
     //cout << "open file1 failed!";
     }
     if(!fin2)
     {
     //cout << "open " << file_name << " failed!" << endl;
     file_name2.pop_back();
     fin1.close();
     continue;
     }
     
     while (fin1.read((char *)&flt1,sizeof(flt1)) && fin2.read((char *)&flt2,sizeof(flt2)))
     {
     if (abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
     if(flag == 0)
     {
     p1.x = flt1;
     p2.x = flt2;
     flag++;
     //cout << p1.x << ' ' << p2.x << endl;
     continue;
     }
     if(flag == 1)
     {
     p1.y = flt1;
     p2.y = flt2;
     flag++;
     //cout << p1.y << ' ' << p2.y << endl;
     continue;
     }
     if(flag == 2)
     {
     p1.z = flt1;
     p2.z = flt2;
     flag = 0;
     //cout << p1.z << ' ' << p2.z << endl;
     sum1 = Sum(p1);
     sum2 = Sum(p2);
     }
     //cout << sum1 << ' ' << sum2 << endl;
     dlt += sum1 - sum2 ;
     }
     //cnt++;
     if(abs(dlt)<final_dlt)
     {
     final_dlt = abs(dlt);
     final_file = file_name2;
     }
     //cout << "final_dlt= " << final_dlt << endl;
     //cout << "dlt= " << dlt << endl;
     //cout << "done!" << endl;
     file_name2.pop_back();
     fin1.close();
     fin2.close();
     }
     
     for(int i=100;i<515;i++)
     {
     dlt = 0;
     file_name2.pop_back();
     file_name2.pop_back();
     
     tmp = file_name2.append(to_string(i));
     //cout << tmp << endl;
     file_name = tmp.append(".data");
     //cout << "compare_file: " << file_name << endl;
     fin1.open(file_name1,ios::in|ios::binary);
     fin2.open(file_name,ios::in|ios::binary);
     
     
     if(!fin1)
     {
     //cout << "open file1 failed!";
     }
     if(!fin2)
     {
     //cout << "open " << file_name << " failed!" << endl;
     file_name2.pop_back();
     fin1.close();
     continue;
     }
     
     while (fin1.read((char *)&flt1,sizeof(flt1)) && fin2.read((char *)&flt2,sizeof(flt2)))
     {
     if (abs(flt1-1.4013e-41)<1e-30||abs(flt1-1.4013e-43)<1e-30) continue;
     if(flag == 0)
     {
     p1.x = flt1;
     p2.x = flt2;
     flag++;
     //cout << p1.x << ' ' << p2.x << endl;
     continue;
     }
     if(flag == 1)
     {
     p1.y = flt1;
     p2.y = flt2;
     flag++;
     //cout << p1.y << ' ' << p2.y << endl;
     continue;
     }
     if(flag == 2)
     {
     p1.z = flt1;
     p2.z = flt2;
     flag = 0;
     //cout << p1.z << ' ' << p2.z << endl;
     sum1 = Sum(p1);
     sum2 = Sum(p2);
     }
     //cout << sum1 << ' ' << sum2 << endl;
     dlt += sum1 - sum2 ;
     }
     //cnt++;
     if(abs(dlt)<final_dlt)
     {
     final_dlt = abs(dlt);
     final_file = file_name2;
     }
     //cout << "final_dlt= " << final_dlt << endl;
     //cout << "dlt= " << dlt << endl;
     //cout << "done!" << endl;
     file_name2.pop_back();
     fin1.close();
     fin2.close();
     }
     */
    
    //cout << "min_dlt:= " << final_dlt << endl;
    //cout << "min_dlt_file:= " << final_file << endl;
    
    return 0;
    
}


