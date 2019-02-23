#include "../inc/ssl.h"
#include "../inc/dispatch.h"

void    print2_damnnorm(int cmd_idx, char *input, u_int8_t info)
{
    if (!(info & FLG_Q) && !(info & FLG_R) && !(info & FS)) {
        if (info & IS_STR) {
            ft_putstr(dispatch_lookup[cmd_idx]);
            ft_putstr(" (\"");
            ft_putstr(input);
            ft_putstr("\") = ");
        }
        else if (info & IS_FILE) {
            ft_putstr(dispatch_lookup[cmd_idx]);
            ft_putstr(" (");
            ft_putstr(input);
            ft_putstr(") = ");
        }
    }
}

void    print_hash(char *input, u_int8_t info, unsigned char hash[], unsigned int size)
{
    if (info & FLG_P && info & FS)
        ft_putstr(input);
    for (unsigned int i = 0; i < size; i++) {
        if (hash[i] <= 0xF)
            ft_putchar('0');       
        ft_putstr(ft_itoa_base(hash[i], 16));
    }
    if (info & FLG_R && !(info & FS) && !(info & FLG_Q)) {
        if (info & IS_STR) {
            ft_putstr(" \"");
            ft_putstr(input);
            ft_putstr("\"");
        }
        else if (info & IS_FILE) {
            ft_putstr(" ");
            ft_putstr(input);
        }
    }
    ft_putendl("");
}