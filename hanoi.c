#include <stdio.h>
#include <assert.h>

#define BLOCKS 3

int move(int *a, int *b)
{
	int i,j;
	for(i=BLOCKS; i>=0 ;i--){
		if(b[i-1] == 0) {
			// �󂫂�����
			
			// �ړ����̈�ԏ�̃u���b�N��T��
			for(j=0;j<BLOCKS;j++){
				if(a[j] != 0) {
					break; // ��ԏ�̃u���b�N�[�x��
				}
			}
			
			if(i == BLOCKS) {
				// �ړ���̍ő�[�x�ɂ��邩
				// �ړ��ł���
				
				b[i-1] = a[j];
				a[j] = 0;
				
				if(j < BLOCKS) {
					int temp = a[BLOCKS];
					a[BLOCKS] = a[BLOCKS - 1];
				}
				
				return 1;
				
			} else {
				// �Ȃɂ������Ă�
				if(a[j] < b[i-1]) {
					// �傫�����r���ړ���̂ق����傫����� �ړ��ł���
					b[i-1] = a[j];
					a[j] = 0;
					return 1;
				}
			}
		}
	}
	
	return 0;
	
}


int main() {
	
	int TA[BLOCKS];
	int TB[BLOCKS];
	int TC[BLOCKS];
	
	// ���͗p
	char input;
	char input2;
	int i;
	
	// ������
	for(i=0;i<BLOCKS;i++)
	{
		TA[i] = i+1;
		TB[i] = TC[i] = 0;
//		printf("%d:[%d]\n",i,TA[i]);
	}
	


	// ���C�����[�v�I�Ȃ��
	while(1){
		printf("TA  TB  TC\n");
		for(i=0;i<BLOCKS;i++){
			printf("[%d] [%d] [%d]\n",TA[i],TB[i],TC[i]);
		}
		
		input = getchar();
		if(input == 'a') {
			if(move(TA,TB) == 0){
				printf("miss\n");
			}
		}
		
		if(input == 'c') {
			move(TA,TC);
		}
		
		if(input == 'e'){ break;}
		
	}
}

// 1.�����̏d�݂��d���ꏊ��T��
// 2.���̃u���b�N�Ŏ������d���ꏊ��T��
// 3.�ړ��ł��Ȃ���΁A���̓��ֈړ�
// 4.���������d���u���b�N����������΁A�����̏d�݂ɋ߂����Ɉړ�����



