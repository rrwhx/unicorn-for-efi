/** @file
  Copyright (c) 2023, Intel Corporation. All rights reserved.<BR>
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2 of the License, or (at your option) any later version.
**/

#include "glue.h"

void abort(void)
{
  printf("Abort from 0x%lx!\n", __builtin_return_address(0));
  asm("hlt");
  while (1);
}
