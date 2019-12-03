#include <stdio.h>

//�������� node �����ͷ� �̷���� ���� 
typedef sturct_node {
	int key;
	struct _node* next;
} node;

node* head, * tail;

//����Ʈ �ʱ�ȭ 
void init_list(void) {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	
	head->next = tail;
	tail->next = tail;
}

//���� ��� ���� 
int delete_next(node* t) {
	node* s;
	
	//tail�� ������ �� ����. 
	if(t->next == tail) {
		return 0;	
	}
	
	s = t->next; //t�� ���� ��带 �����ϱ� ���� �ּҸ� s�� ����.
	t->next = t->next->next; //������ ����� ���� ��带 ����Ű�� �Ѵ�. 
	free(s); //t�� ���� ��带 ����.
	
	return 1;
}
 
node* insert_after(int k, node* t) {
	node* s;
	s = (node*)malloc(sizeof(node));
	
	s->key = k;
	s->next = t->next; //���� ��尡 ����Ű�� ���� ��带 s��尡 ����Ű�� ��
	t->next = s; //���� ��尡 �ڽ��� ����Ű�� �� 
	
	return s;
} 

node* find_node(int k) {
	node* s;
	s = head->next;
	
	//ã�� ��尡 �ƴϰų� tail�� ��� �ݺ��� ���� 
	while(s->key != k && s != tail) {
		s = s->next;
	}
	
	return s;
} 

int delete_node(int k) {
	node* s;
	node* p;
	p = head;
	s = p->next;
	
	//�ش� Ű�� �ƴϰų� �������� ���� �ʾҴٸ� 
	while(s->key != k && s != tail) {
		p = p->next; //p�� s�� ��ĭ�� �Űܰ���. 
		s = p->next;
	}
	
	if(s != tail) {
		p->next = s->next; //������ ����� ���� ��带 ���� ��尡 ����Ű�� �Ѵ�. 
		free(s); //�ش� ��带 �����Ѵ�. 
		
		return 1; //������ ������ �ǹ� 
	}
	
	else
		return 0; //���� ���и� �ǹ� 
} 

int main() {
	
	return 0;
}
