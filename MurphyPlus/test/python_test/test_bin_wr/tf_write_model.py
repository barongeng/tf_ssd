#-*- encoding: utf-8 -*-

import tensorflow as tf

# ������������
v1 = tf.Variable(tf.random_normal([1, 2]), name="v1")
v2 = tf.Variable(tf.random_normal([2, 3]), name="v2")
init_op = tf.global_variables_initializer() # ��ʼ��ȫ������
saver = tf.train.Saver(write_version=tf.train.SaverDef.V1) # ����tf.train.Saver�����ڱ���ģ��
with tf.Session() as sess:
    sess.run(init_op)
    print("v1:", sess.run(v1)) # ��ӡv1��v2��ֵһ���ȡ֮��Ա�
    print("v2:", sess.run(v2))
    saver_path = saver.save(sess, "save/model.ckpt")  # ��ģ�ͱ��浽save/model.ckpt�ļ�
    print("Model saved in file:", saver_path)