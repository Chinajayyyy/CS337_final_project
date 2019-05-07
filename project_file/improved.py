import struct
import random
from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *

def process(string):
    print 'Processing: ',string
    
filename = "F:\computer graph\hairstyles\strands%s.data"

def hair():
    glClearColor(1,1,1,0.1)   #背景设为白色（red,green,blue,Alpha)
    glClear(GL_COLOR_BUFFER_BIT)
    glOrtho(-0.5, 0.5, 1.0, 2.0, -0.5, 0.5)   #设置三维坐标的显示范围

    #画网格
    '''
    step=0.1
    num_lines = 8
    glLineWidth(3)
    axe_colors=[(1.0,0.0,0.0),(0.0,1.0,0.0),(0.0,0.0,1.0)]
    origin=[-0.3,1.2,-0.3]
    for i in range (3):
        tmp = [-0.3,1.2,-0.3]
        tmp[i] = tmp[i]+0.9
        glColor3f(*axe_colors[i])
        glBegin(GL_LINES)
        glVertex3f(*origin)
        glVertex3f(*tmp)
        glEnd()
        glFlush()
    '''
    glLineWidth(1)            #设置线的长度
    num_strant = struct.unpack('i',f.read(4))
    for i2 in range(0,num_strant[0]):
        x = random.uniform(0,1)
        y = random.uniform(0,1) 
        z = random.uniform(0,1)
        glColor3f(x,y,z)
        glBegin(GL_LINE_STRIP)
        num_vex = struct.unpack('i',f.read(4))
        for x in range(0,num_vex[0]):
            vex_f1 = struct.unpack('fff',f.read(4*3))
            glVertex3f(vex_f1[0],vex_f1[1],vex_f1[2])
        glEnd()
        glFlush()
        if(i2<=400):
            process(vex_f1)
        if(i2%20==0):
            process(vex_f1)
    f.close()

            
def main():
    global f
    num = input("Which hair do you want to draw?:")
    while 1>0:
        try:
            f = open(filename % str("%05d" % num),"rb")
        except IOError:
            num = input("Sorry this number does not exist, try again!:")
            continue
        else:
            break
    global window
    glutInit()
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA)
    glutInitWindowSize(400, 400)
    window = glutCreateWindow("Hair style")
    glutDisplayFunc(hair)
    #glRotatef(90,0.0,1,0.0)
    glutMainLoop()

main()
