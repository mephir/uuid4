/**
 * (c) Pawel Wilk <github@wilk.codes>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#include <stdlib.h>
#include <stdio.h>

#include "uuid4.h"

int main(int argc, char *argv[]) {
    char buf[UUID4_LEN];
    int quantity = 5;

    if (argc > 1) {
        quantity = atoi(argv[1]);
        if (quantity == 0) {
            printf("Wrong `%s` argument value!", argv[1]);

            return 1;
        }
    }

    uuid4_init();
    for (int i = 0; i < quantity; i++) {
        uuid4_generate(buf);
        printf("%s\n", buf);
    }

    return EXIT_SUCCESS;
}
