#include <stdio.h>
#include <assert.h>

#define BLOCKS 3

int move(int *a, int *b)
{
	int i,j;
	for(i=BLOCKS; i>=0 ;i--){
		if(b[i-1] == 0) {
			// 空きがある
			
			// 移動元の一番上のブロックを探す
			for(j=0;j<BLOCKS;j++){
				if(a[j] != 0) {
					break; // 一番上のブロック深度数
				}
			}
			
			if(i == BLOCKS) {
				// 移動先の最大深度にあるか
				// 移動できる
				
				b[i-1] = a[j];
				a[j] = 0;
				
				if(j < BLOCKS) {
					int temp = a[BLOCKS];
					a[BLOCKS] = a[BLOCKS - 1];
				}
				
				return 1;
				
			} else {
				// なにか入ってる
				if(a[j] < b[i-1]) {
					// 大きさを比較し移動先のほうが大きければ 移動できる
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
	
	// 入力用
	char input;
	char input2;
	int i;
	
	// 初期化
	for(i=0;i<BLOCKS;i++)
	{
		TA[i] = i+1;
		TB[i] = TC[i] = 0;
//		printf("%d:[%d]\n",i,TA[i]);
	}
	


	// メインループ的なやつ
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

// 1.自分の重みより重い場所を探す
// 2.次のブロックで自分より重い場所を探す
// 3.移動できなければ、次の塔へ移動
// 4.自分よりも重いブロックが複数あれば、自分の重みに近い方に移動する



