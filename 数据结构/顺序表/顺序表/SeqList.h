#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <assert.h>

typedef struct SeqList
{
	size_t _arrary;
	size_t _size;
	struct SeqList *p;
}SeqList;

//��ʼ��˳���
void InitSeqList(SeqList *s, size_t x);

//����˳���

//���˳���

//��ɾ�Ĳ�

//ͷ��
//β��
//����

//ͷɾ
//βɾ
//ɾ��





#endif  /__SEQLIST_H__


