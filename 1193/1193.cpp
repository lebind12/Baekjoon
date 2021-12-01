#include <stdio.h>

void increase(int *increase_right, int *right, int *left)
{
	if (*increase_right == 1 && *left == 1)
	{
		*increase_right = (*increase_right + 1) % 2;
		*right += 1;
	}
	else if (*increase_right == 0 && *right == 1)
	{
		*increase_right = (*increase_right + 1) % 2;
		*left += 1;
	}
	else if (*increase_right == 1) {
		*right += 1;
		*left -= 1;
	}
	else if (*increase_right == 0) {
		*left += 1;
		*right -= 1;
	}
}

int main(void) {
    int increase_right = 1;
    int right = 1;
    int left = 1;
    int goal;
    int i = 1;

    scanf("%d", &goal);
    while (i < goal)
    {
		increase(&increase_right, &right, &left);
		i++;
	}
    printf("%d/%d", left, right);
    return (0);
}