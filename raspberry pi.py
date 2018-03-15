#!/usr/bin/python3

import serial
import time
import datetime
import pymssql
ser = serial.Serial('/dev/ttyACM0', 9600)




conn = pymssql.connect("kennys-iot.database.windows.net", "kenny@kennys-iot", "IoT+1234", "kennys-iot")
cursor = conn.cursor()  



count=0
while(count<1000000):
    date11 = (datetime.datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    # read from Arduino
    aa = ser.readline()
    bb = str(aa)
    cc = bb.split(',')
    cc1 = cc[0]
    cc11 = cc1.split('V')
    cc111 = cc11[1]
    cc2 = cc[1]
    cc3 = cc[2]
    cc4 = cc[3]
    cc5 = cc[4]
    cc51 = cc5.split('\\')
    cc511 = cc51[0]
    cursor.execute("INSERT dbo.data (datetime,value1,value2,value3,value4,value5) VALUES ('" + date11 + "','" + cc111 + "','" + cc2 + "','" + cc3 + "','" + cc4 + "','" + cc511 + "')")
    conn.commit()
    count +=1
    print (date11,cc111,cc2,cc3,cc4,cc511)
    if count == 999999:
        break