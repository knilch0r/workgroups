// SPDX-FileCopyrightText: 2020 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
//
// SPDX-License-Identifier: Apache-2.0

#include <stdio.h>

void say_hello()
{
    printf("Hello\n");
}

void main()
{
    void (*function_pointer)();
    function_pointer = say_hello;
    function_pointer();
    function_pointer = &say_hello;
    (*function_pointer)();
}