#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void frequency_bubble_sort(int frequencies[], char chars[], const int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (frequencies[j] > frequencies[j + 1])
            {
                /* Swap arr[j] and arr[j+1] */
                temp = frequencies[j];
                frequencies[j] = frequencies[j + 1];
                frequencies[j + 1] = temp;

                temp = chars[j];
                chars[j] = chars[j + 1];
                chars[j + 1] = temp;
            }
        }
    }
}

void task1(char arr[], int frequencies[])
{
    int i, ch;

    for (ch = 0; ch < 26; ch++)
        for (i = 0; arr[i] != 0; i++)
            if (ch + 'A' == arr[i] || ch + 'a' == arr[i])
                frequencies[ch]++;

    for (ch = 0; ch < 26; ch++)
        printf("%c has %d occurencies \n", ch + 'A', frequencies[ch]);
}

void task2(int frequencies[])
{
    int i;
    char chars[26];

    for (i = 0; i < 26; i++)
        chars[i] = i + 'A';

    frequency_bubble_sort(frequencies, chars, 26);

    for (i = 0; i < 26; i++)
        printf("%c has %d occurencies \n", chars[i], frequencies[i]);
}

int main()
{

    srand(time(0));

    int frequencies[26], i, j;
    char arr[2000] = "Lorem ipsum dolor sit amet. Qui quae totam hic aspernatur atque vel ullam ratione At nulla magni et illum nemo eos voluptas provident. Est perferendis autem eos similique voluptatem 33 porro omnis sit ducimus fugit aut obcaecati culpa eos quis autem. Aut placeat nostrum non libero quas et pariatur ratione et voluptatibus fuga et quos impedit aut dicta voluptatem aut dignissimos voluptas. Est iusto exercitationem non eius quaerat aut nostrum veniam est illo omnis ea neque modi et unde internos et asperiores numquam. Qui voluptate veniam aut omnis minus ut minima quisquam ut quam nisi quo quia doloribus et modi quia. Ut perspiciatis quia in tenetur obcaecati ad Quis galisum cum ipsa ipsum ut natus tenetur non accusantium suscipit id reprehenderit eveniet. Ut assumenda accusamus in odio incidunt sit tempore nihil et animi incidunt est modi blanditiis ad galisum saepe hic ducimus sint. Eum commodi excepturi sed dicta necessitatibus ea dicta rerum et nobis voluptatem qui recusandae ipsum id sunt quod. Cum voluptatem porro ad dicta quis est saepe internos eum voluptates autem ex numquam ipsum qui minima consequatur. Aut maxime neque ad dolor alias est quae galisum. Et consequuntur debitis sit esse omnis sit repellat eligendi id perferendis neque. Ex nesciunt commodi non assumenda voluptatem et vitae odit et quos obcaecati non repudiandae quia? Non fugit repudiandae hic dolores provident aut laudantium unde!";

    for (i = 0; i < 26; i++)
        frequencies[i] = 0;

    printf("\n");

    printf("Task 1: \n");
    task1(arr, frequencies);
    printf("\n");

    printf("Task 2: \n");
    task2(frequencies);
    printf("\n");

    return 0;
}