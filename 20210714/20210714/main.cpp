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
	/*��P��
	�ȉ���2�i���̌v�Z�ɓ�����B
	1011 + 0101
	110100 + 11011
	1011 + 110011*/

	/*
	����
	(1)   1 0000
	(2) 100 1111
	(3)  11 1110
	*/

	/*��Q��
	�ȉ���16�i���̌v�Z�ɓ�����B
	FF + FF
	ed + 10
	563 + cd*/

	/*
	����
	(1) 1FE
	(2) FD
	(3) 630
	*/

	/*��R��
	char�Aint�Afloat�Adouble�̃T�C�Y�͂��ꂼ�ꂢ����������B*/

	/*
	����
	char :	1byte
	int	:	4byte
	float : 4byte
	*/

	/*��S��
	int judge = true;
	if (judge)
	{
		�@
	}
	else
	{
		�A
	}
	�@�ƇA�ǂ��炪��������邩������B*/

	/*
	����
	�@
	*/

	/*��T��
	for (int i = 0; i < 100; i = i + 3)
	{
		�@
	}
	�@�̏�����������s����邩������B*/

	/*
	����
	34��
	*/

	/*��U��
	int i = 0;
	while (i < 100)
	{
		i = i + 5;
		�@
	}
	�@�̏����͉�����s����邩������B*/
	
	/*
	����
	20��
	*/

	/*��V��
	int array[4][5];
	��L�z��̃T�C�Y�͂�����������B*/

	/*
	����
	20
	*/

	/*��W��
	int array[5][20]
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < �@; ++j)
		{
			array[i][j] = i * �@ + j;
		}
	}
	�@�ɂ͉��Ƃ������������邩������B*/

	/*
	����
	20
	*/

	/*��X��
	�@ testFunc(int a)
	{
		return;
	}
	�@�ɂ�int, float, void�̂ǂꂪ��������������B*/

	/*
	����
	int
	*/

	/*��P�O��
	�Q�_�Ԃ̋��������߂�֐����쐬���Ă��������B*/
	
	/*
	Coordinate();
	*/

	/*��P�P��
	�J�[�h�\���̂��쐬���Ă��������B
	���̃J�[�h�̓g�����v�̃J�[�h�̂��Ƃł��B
	���Ƃ��āA�Ȃ�̃J�[�h�Ȃ̂��������Ă��Ă��������B
	�X�y�[�h��7�ł���A�n�[�g��13�ł���ȂǁB
	���̍\���̂ɂ͌��݂̎����̏���ݒ肷�鏈���ƁA
	���݂̎����̏����J�����鏈��������Ă��������B


	�g�����v�̎R�D�̍\���̂��쐬���Ă��������B
	���̍ۃJ�[�h�ɂ͐�قǍ�����\���̂��g�p���Ă��������B
	�ȉ��̏����𖞂����Ă������ƁB
	�g�����v�̖�����53��(1 �` 13 * 4 + �W���[�J�[1)
	Card card[53];

	�V���b�t���@�\����������B
	card[53]�Ƀ����_���ɃJ�[�h����t�^���Ă��������B
	card[0]���N���u��6�Acard[1]���n�[�g��5�Ƃ������悤�ɁB
	���̍ۓ����J�[�h�͑��݂��Ȃ��悤�ɂ��Ă��������B*/
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

///* Borland-C++�݊��̗����֐��̂��� */
//#define randomize() srand(time(NULL))
//#define random(X)   ((int)(((double)rand() / (double)RAND_MAX) * (X)))
//
//
///* �X�[�c�̔ԍ� */
//#define SPADE   4
//#define HEART   3
//#define DIAMOND 2
//#define CLUB    1
//
///* �G�D�̔ԍ� */
//#define JACK    11
//#define QUEEN   12
//#define KING    13
//#define ACE     14
//
///* �J�[�h�̕\�����@
// SA  �X�y�[�h�̃G�[�X suit=SPADE,  rank=14 (ACE��KING��1��Ƃ��Ĉ���)
// H2  �n�[�g��2        suit=HEART,  rank=2
// D3  �_�C����3        suit=DIAMOND,rank=3
// C10 �N���u��10       suit=CLUB,   rank=10
//*/
//
///* �J�[�h��ۑ� */
//int card[52][2];
//
///* �\���p */
//char str_rank[13][3] = {
//	"2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" , "10" ,
//	"J" , "Q" , "K" , "A" ,
//};
//char str_suit[4][3] = { "C" , "D" , "H" , "S" };
//
//void card_initialize() {
//	int suit, rank, i = 0;
//	/* �J�[�h����� */
//	for (suit = CLUB; suit <= SPADE; suit++)
//	{
//		for (rank = 2; rank <= ACE; rank++)
//		{
//			card[i][0] = suit;
//			card[i][1] = rank;
//			i++;
//		}
//	}
//	/* �J�[�h���V���b�t������ */
//	for (i = 0; i < 52; i++)/* i�Ԗڂ��f�^�����ԖڂƓ��ꊷ�� */
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
///* �J�[�h��\������ */
//void card_print(int suit, int rank)
//{
//	printf("%s%s", str_suit[suit - 1], str_rank[rank - 2]);
//}
//
///* ������œ��͂����J�[�h�̃f�[�^���� suit �� rank �����߂� */
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
//	/* �ł���߂ɐ؂���52������5����\�� */
//	randomize();
//	card_initialize();
//	for (i = 0; i < 5; i++)
//	{
//		card_print(card[i][0], card[i][1]);
//		printf("\n");
//	}
//
//	/* ���͂�����������A5����\�� */
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