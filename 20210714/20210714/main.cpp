#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
int Coordinate(int Position1, int Position2)
{
	return Position1 - Position2;
}
int main()
{
	printf("�����̍���%d�ł�\n", Coordinate(5, 3));
}
*/

	/////////////////////////////////////////////////////////////////
	//��P�P��
	//�J�[�h�\���̂��쐬���Ă��������B
	//���̃J�[�h�̓g�����v�̃J�[�h�̂��Ƃł��B
	//���Ƃ��āA�Ȃ�̃J�[�h�Ȃ̂��������Ă��Ă��������B
	//�X�y�[�h��7�ł���A�n�[�g��13�ł���ȂǁB
	//���̍\���̂ɂ͌��݂̎����̏���ݒ肷�鏈���ƁA
	//���݂̎����̏����J�����鏈��������Ă��������B
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
	printf("�g�����v�̃X�[�g����͂��Ă��������B\ns = �X�y�[�h\nh = �n�[�g\nc = �N���u\nd = �_�C��\n");
	scanf_s("%c", &cardpattern);
	printf("�g�����v�̐�������͂��Ă�������(1�`13)\n");
	scanf_s("%d", &cardnum);
	cards.SetCardPattern(cardpattern);
	cards.SetCardNum(cardnum);
	printf_s("�g�����v�� %c �� %d �ł�", cards.GetCard_pattern(), cards.GetCard_num());
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
	//�g�����v�̎R�D�̍\���̂��쐬���Ă��������B
	//���̍ۃJ�[�h�ɂ͐�قǍ�����\���̂��g�p���Ă��������B
	//�ȉ��̏����𖞂����Ă������ƁB
	//�g�����v�̖�����53��(1 �` 13 * 4 + �W���[�J�[1)
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
	//�V���b�t���@�\����������B
	//card[53]�Ƀ����_���ɃJ�[�h����t�^���Ă��������B
	//card[0]���N���u��6�Acard[1]���n�[�g��5�Ƃ������悤�ɁB
	//���̍ۓ����J�[�h�͑��݂��Ȃ��悤�ɂ��Ă��������B
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

	// �z��i�g�����v�j������
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

	// ����SEED�ݒ�
	srand((int)time(NULL));

	// �g�����v��100��؂�
	for (i = 0; i < 100; i++) {
		a = rand() % 53;
		b = rand() % 53;
		memcpy(&c, &trump[a], sizeof(c));
		memcpy(&trump[a], &trump[b], sizeof(c));
		memcpy(&trump[b], &c, sizeof(c));
	}

	// �ŏ��̂T���\�� 
	for (i = 0; i < 5; i++) {
		printf("%c-%d ", trump[i].mark, trump[i].num);
	}

	return 0;
}
*/