#-*- encoding: utf-8 -*-

import tensorflow as tf

# ʹ�úͱ���ģ�ʹ�����һ���ķ�ʽ����������
v1 = tf.Variable(tf.random_normal([1, 2]), name="v1")
v2 = tf.Variable(tf.random_normal([2, 3]), name="v2")
saver = tf.train.Saver() # ����tf.train.Saver�����ڱ���ģ��
with tf.Session() as sess:
    saver.restore(sess, "save/model.ckpt") # �����̻���Ӳ���е�Session�ӱ���·���ٶ�ȡ����
    print("v1:", sess.run(v1)) # ��ӡv1��v2��ֵ��֮ǰ�Ľ��жԱ�
    print("v2:", sess.run(v2))
    print("Model Restored")