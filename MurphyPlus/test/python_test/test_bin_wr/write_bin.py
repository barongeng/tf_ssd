#-*- encoding: utf-8 -*-

from struct import *

#�ļ���ʽ��*_oc_ic_oh_ow.bin
file = open(r"test_1_1_1_2.bin", "wb")
val = 12345.413213213
file.write(pack("d",val))
print ("write:",val)

val = 2.432
file.write(pack("d", val))
print ("write:",val)

file.close()