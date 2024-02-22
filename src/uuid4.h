/**
 * (c) Pawel Wilk <github@wilk.codes>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#ifndef UUID4_H
#define UUID4_H

#define UUID4_VERSION "1.0.0"
#define UUID4_LEN 37

enum {
    UUID4_ESUCCESS =  0,
    UUID4_EFAILURE = -1
};

int  uuid4_init(void);
void uuid4_generate(char *dst);

#endif
