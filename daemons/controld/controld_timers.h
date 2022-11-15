/*
 * Copyright 2004-2022 the Pacemaker project contributors
 *
 * The version control history for this file may have further details.
 *
 * This source code is licensed under the GNU Lesser General Public License
 * version 2.1 or later (LGPLv2.1+) WITHOUT ANY WARRANTY.
 */

#ifndef CONTROLD_TIMERS__H
#  define CONTROLD_TIMERS__H

#  include <stdbool.h>              // bool
#  include <glib.h>                 // gboolean, gpointer, guint
#  include <controld_fsa.h>         // crmd_fsa_input

typedef struct fsa_timer_s {
    guint source_id;                        // Timer source ID
    guint period_ms;                        // Timer period
    enum crmd_fsa_input fsa_input;          // Input to register if timer pops
    gboolean (*callback) (gpointer data);   // What do if timer pops
    bool log_error;                         // Timer popping indicates error
    int counter;                            // For detecting loops
} fsa_timer_t;

extern fsa_timer_t *shutdown_escalation_timer;

bool controld_init_fsa_timers(void);
void controld_free_fsa_timers(void);
void controld_configure_fsa_timers(GHashTable *options);

bool controld_stop_timer(fsa_timer_t *timer);
bool controld_stop_recheck_timer(void);
bool controld_stop_transition_timer(void);

void controld_start_timer(fsa_timer_t *timer);
void controld_start_recheck_timer(void);
void controld_start_transition_timer(void);
void controld_start_wait_timer(void);

bool is_timer_started(fsa_timer_t *timer);
bool controld_is_started_transition_timer(void);

guint controld_get_period_transition_timer(void);

void controld_reset_counter_election_timer(void);

#endif
