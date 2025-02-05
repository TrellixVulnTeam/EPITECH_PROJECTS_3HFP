/*
** EPITECH PROJECT, 2019
** op
** File description:
** op
*/

#include "op.h"

op_t    op_tab[] = {
    {"live", 1, {T_DIR}, 1, 10, "alive", 0, DIR_SIZE},
    {"ld", 2, {T_DIR | T_IND, T_REG}, 2, 5, "load", 1, DIR_SIZE},
    {"st", 2, {T_REG, T_IND | T_REG}, 3, 5, "store", 1, 2},
    {"add", 3, {T_REG, T_REG, T_REG}, 4, 10, "addition", 1, DIR_SIZE},
    {"sub", 3, {T_REG, T_REG, T_REG}, 5, 10, "soustraction", 1, DIR_SIZE},
    {"and", 3, {T_REG | T_DIR | T_IND, T_REG | T_IND | T_DIR, T_REG}, 6, 6,
    "et (and  r1, r2, r3   r1&r2 -> r3", 1, DIR_SIZE},
    {"or", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 7, 6,
    "ou  (or   r1, r2, r3   r1 | r2 -> r3", 1, DIR_SIZE},
    {"xor", 3, {T_REG | T_IND | T_DIR, T_REG | T_IND | T_DIR, T_REG}, 8, 6,
    "ou (xor  r1, r2, r3   r1^r2 -> r3", 1, DIR_SIZE},
    {"zjmp", 1, {T_DIR}, 9, 20, "jump if zero", 0, 2},
    {"ldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 10, 25,
    "load index", 1, 2},
    {"sti", 3, {T_REG, T_REG | T_DIR | T_IND, T_DIR | T_REG}, 11, 25,
    "store index", 1, 2},
    {"fork", 1, {T_DIR}, 12, 800, "fork", 0, 2},
    {"lld", 2, {T_DIR | T_IND, T_REG}, 13, 10, "long load", 1, 2},
    {"lldi", 3, {T_REG | T_DIR | T_IND, T_DIR | T_REG, T_REG}, 14, 50,
    "long load index", 1, 2},
    {"lfork", 1, {T_DIR}, 15, 1000, "long fork", 0, 2},
    {"aff", 1, {T_REG}, 16, 2, "aff", 1, DIR_SIZE},
    {0, 0, {0}, 0, 0, 0, 0, 0}
};
