/*
 * Copyright 2024 the Pacemaker project contributors
 *
 * The version control history for this file may have further details.
 *
 * This source code is licensed under the GNU Lesser General Public License
 * version 2.1 or later (LGPLv2.1+) WITHOUT ANY WARRANTY.
 */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include "util.h"
#include "iso8601.h"

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  // Ensure we have enough data.
  if (size < 10) {
    return 0;
  }
  char *ns = malloc(size+1);
  memcpy(ns, data, size);
  ns[size] = '\0';

  crm_time_parse_period(ns);
  pcmk__time_hr_new(ns);


  time_t epoch = 0;
  pcmk__time_hr_t *now = NULL;
  now = pcmk__time_hr_now(&epoch);
  pcmk__time_format_hr(ns, now);

  free(ns);  
  return 0;
}
