#include <stdio.h>

main()
{
	int max_score = 0, score = 0;
	char max_name[20],ch, name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fprintf(fp, "%s%d", max_name, max_score);
	fclose(fp);
	printf("�ō����_�@���O�F%s �X�R�A�F%d\n", max_name, max_score);
	printf("�v���C���[������́F");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A�F%d('e'�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("�n�C�X�R�A�X�V�I\n");
	}
}