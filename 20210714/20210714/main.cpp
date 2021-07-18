#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

	/*第１問
	以下の2進数の計算に答えよ。
	1011 + 0101
	110100 + 11011
	1011 + 110011*/

	/*
	答え
	(1)   1 0000
	(2) 100 1111
	(3)  11 1110
	*/

	/*第２問
	以下の16進数の計算に答えよ。
	FF + FF
	ed + 10
	563 + cd*/

	/*
	答え
	(1) 1FE
	(2) FD
	(3) 630
	*/

	/*第３問
	char、int、float、doubleのサイズはそれぞれいくつか答えよ。*/

	/*
	答え
	char :	1byte
	int	:	4byte
	float : 4byte
	*/

	/*第４問
	int judge = true;
	if (judge)
	{
		①
	}
	else
	{
		②
	}
	①と②どちらが処理されるか答えよ。*/

	/*
	答え
	①
	*/

	/*第５問
	for (int i = 0; i < 100; i = i + 3)
	{
		①
	}
	①の処理が何回実行されるか答えよ。*/

	/*
	答え
	34回
	*/

	/*第６問
	int i = 0;
	while (i < 100)
	{
		i = i + 5;
		①
	}
	①の処理は何回実行されるか答えよ。*/
	
	/*
	答え
	20回
	*/

	/*第７問
	int array[4][5];
	上記配列のサイズはいくつか答えよ。*/

	/*
	答え
	20
	*/

	/*第８問
	int array[5][20]
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < ①; ++j)
		{
			array[i][j] = i * ① + j;
		}
	}
	①には何という数字が入るか答えよ。*/

	/*
	答え
	20
	*/

	/*第９問
	① testFunc(int a)
	{
		return;
	}
	①にはint, float, voidのどれが正しいか答えよ。*/

	/*
	答え
	int
	*/

	/*第１０問
	２点間の距離を求める関数を作成してください。*/

/*
int Coordinate(int Position1, int Position2)
{
	return Position1 - Position2;
}
int main()
{
	printf("距離の差は%dです\n", Coordinate(5, 3));
}
*/

	/////////////////////////////////////////////////////////////////
	//第１１問
	//カード構造体を作成してください。
	//このカードはトランプのカードのことです。
	//情報として、なんのカードなのかを持っていてください。
	//スペードの7である、ハートの13であるなど。
	//この構造体には現在の自分の情報を設定する処理と、
	//現在の自分の情報を開示する処理を作ってください。
	////////////////////////////////////////////////////////////////

/*
struct card
{
public:
	int GetCard_num() { return card_num; }
	int GetCard_pattern() { return card_pattern; }
	void SetCardNum(int set_num);
	void SetCardPattern(int set_pattern);
private:
	int card_pattern;
	int card_num;
};
int main()
{
	card cards;
	int cardnum, cardpattern;
	printf("トランプのスートを入力してください。\ns = スペード\nh = ハート\nc = クラブ\nd = ダイヤ\n");
	scanf_s("%c", &cardpattern);
	printf("トランプの数字を入力してください(1～13)\n");
	scanf_s("%d", &cardnum);
	cards.SetCardPattern(cardpattern);
	cards.SetCardNum(cardnum);
	printf_s("トランプは %c の %d です", cards.GetCard_pattern(), cards.GetCard_num());
}
void card::SetCardNum(int set_num)
{
	card_num = set_num;
}
void card::SetCardPattern(int set_pattern)
{
	card_pattern = set_pattern;
}
*/

	//////////////////////////////////////////////////////
	//トランプの山札の構造体を作成してください。
	//その際カードには先ほど作った構造体を使用してください。
	//以下の条件を満たしておくこと。
	//トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
	//Card card[53];
	//////////////////////////////////////////////////////

/*
struct Cards
{
public:
	int GetCard_num() { return card_num; }
	int GetCard_pattern() { return card_pattern; }
	void SetCardNum(int set_num);
	void SetCardPattern(int set_pattern);
private:
	int card_pattern;
	int card_num;
	int card_card[53];
};
*/

	//////////////////////////////////////////////////////
	//シャッフル機能を実装する。
	//card[53]にランダムにカード情報を付与してください。
	//card[0]がクラブの6、card[1]がハートの5といったように。
	//その際同じカードは存在しないようにしてください。
	//////////////////////////////////////////////////////

/*
struct card
{
	char mark;
	int num;
};

int main()
{
	struct card trump[53];
	int i;
	int a;
	int b;
	struct card c;

	// 配列（トランプ）初期化
	for (i = 0; i < 13; i++) {
		trump[i + 0].mark = 's';
		trump[i + 13].mark = 'd';
		trump[i + 26].mark = 'h';
		trump[i + 39].mark = 'c';
		trump[i + 40].mark = 'j';

		trump[i + 0].num = i + 1;
		trump[i + 13].num = i + 1;
		trump[i + 26].num = i + 1;
		trump[i + 39].num = i + 1;
		trump[i + 40].num = 0;
	}

	// 乱数SEED設定
	srand((int)time(NULL));

	// トランプを100回切る
	for (i = 0; i < 100; i++) {
		a = rand() % 53;
		b = rand() % 53;
		memcpy(&c, &trump[a], sizeof(c));
		memcpy(&trump[a], &trump[b], sizeof(c));
		memcpy(&trump[b], &c, sizeof(c));
	}

	// 最初の５枚表示 
	for (i = 0; i < 5; i++) {
		printf("%c-%d ", trump[i].mark, trump[i].num);
	}

	return 0;
}
*/