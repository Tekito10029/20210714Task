#include<iostream>
#include<stdio.h>


/*
int MidPosition(double x1, double y1, double x2, double y2);
void Coordinate();
*/

/*
int main()
{
*/
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
	Coordinate();
	*/

	/*第１１問
	カード構造体を作成してください。
	このカードはトランプのカードのことです。
	情報として、なんのカードなのかを持っていてください。
	スペードの7である、ハートの13であるなど。
	この構造体には現在の自分の情報を設定する処理と、
	現在の自分の情報を開示する処理を作ってください。


	トランプの山札の構造体を作成してください。
	その際カードには先ほど作った構造体を使用してください。
	以下の条件を満たしておくこと。
	トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
	Card card[53];

	シャッフル機能を実装する。
	card[53]にランダムにカード情報を付与してください。
	card[0]がクラブの6、card[1]がハートの5といったように。
	その際同じカードは存在しないようにしてください。*/
/*
}
*/
/*
void Coordinate()
{
	double x1 = 4;
	double y1 = 4;
	double x2 = 2;
	double y2 = 2;
	
	int Mid = 0;
	int Position;

	Position = MidPosition(x1, y1, x2, y2);

	std::cout << Position << "\n";
}
*/



#pragma region 

///* Borland-C++互換の乱数関数のため */
//#define randomize() srand(time(NULL))
//#define random(X)   ((int)(((double)rand() / (double)RAND_MAX) * (X)))
//
//
///* スーツの番号 */
//#define SPADE   4
//#define HEART   3
//#define DIAMOND 2
//#define CLUB    1
//
///* 絵札の番号 */
//#define JACK    11
//#define QUEEN   12
//#define KING    13
//#define ACE     14
//
///* カードの表示方法
// SA  スペードのエース suit=SPADE,  rank=14 (ACEはKINGの1つ上として扱う)
// H2  ハートの2        suit=HEART,  rank=2
// D3  ダイヤの3        suit=DIAMOND,rank=3
// C10 クラブの10       suit=CLUB,   rank=10
//*/
//
///* カードを保存 */
//int card[52][2];
//
///* 表示用 */
//char str_rank[13][3] = {
//	"2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" , "10" ,
//	"J" , "Q" , "K" , "A" ,
//};
//char str_suit[4][3] = { "C" , "D" , "H" , "S" };
//
//void card_initialize() {
//	int suit, rank, i = 0;
//	/* カードを作る */
//	for (suit = CLUB; suit <= SPADE; suit++)
//	{
//		for (rank = 2; rank <= ACE; rank++)
//		{
//			card[i][0] = suit;
//			card[i][1] = rank;
//			i++;
//		}
//	}
//	/* カードをシャッフルする */
//	for (i = 0; i < 52; i++)/* i番目をデタラメ番目と入れ換え */
//	{
//		int r = random(52);
//		int tsuit = card[r][0];
//		int trank = card[r][1];
//		card[r][0] = card[i][0];
//		card[r][1] = card[i][1];
//		card[i][0] = tsuit;
//		card[i][1] = trank;
//	}
//}
//
///* カードを表示する */
//void card_print(int suit, int rank)
//{
//	printf("%s%s", str_suit[suit - 1], str_rank[rank - 2]);
//}
//
///* 文字列で入力したカードのデータから suit と rank を求める */
//void card_str(int* suit, int* rank, char str[]) {
//	switch (str[0])
//	{
//	case 'S': case 's': *suit = SPADE; break;
//	case 'H': case 'h': *suit = HEART; break;
//	case 'D': case 'd': *suit = DIAMOND; break;
//	case 'C': case 'c': *suit = CLUB; break;
//	}
//	switch (str[1])
//	{
//	case 'A': case 'a': *rank = ACE; break;
//	case 'K': case 'k': *rank = KING; break;
//	case 'Q': case 'q': *rank = QUEEN; break;
//	case 'J': case 'j': *rank = JACK; break;
//	default: *rank = atoi(str + 1); break;
//	}
//}
//
//int main()
//{
//	int i;
//	char str[10];
//
//	/* でたらめに切った52枚から5枚を表示 */
//	randomize();
//	card_initialize();
//	for (i = 0; i < 5; i++)
//	{
//		card_print(card[i][0], card[i][1]);
//		printf("\n");
//	}
//
//	/* 入力した文字から、5枚を表示 */
//	for (i = 0; i < 5; i++)
//	{
//		int suit, rank;
//		//scanf("%s", str);
//		card_str(&suit, &rank, str);
//		card_print(suit, rank);
//		printf("\n");
//	}
//	return 0;
//}
#pragma endregion