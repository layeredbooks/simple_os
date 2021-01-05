/* This file is part of Simple_OS, a real-time operating system  */
/* designed for research and education */
/* Copyright (c) 2003-2013 Ola Dahl */

/* The software accompanies the book Into Realtime, available at  */
/* http://theintobooks.com */

/* Simple_OS is free software: you can redistribute it and/or modify */
/* it under the terms of the GNU General Public License as published by */
/* the Free Software Foundation, either version 3 of the License, or */
/* (at your option) any later version. */

/* This program is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the */
/* GNU General Public License for more details. */

/* You should have received a copy of the GNU General Public License */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef TIME_LIST_H
#define TIME_LIST_H

void time_list_insert(int task_id); 

void time_list_remove(int task_id); 

/* time_list_decrement_timers: decrements timers for
   tasks waiting for time to expire. The number 
   of tasks ready to run after the timers are 
   decremented are stored in *n_new_taks_ready, and 
   the tasks ids for these tasks are stored in 
   new_task_ids_ready */ 
void time_list_decrement_timers(int *n_new_tasks_ready, int new_task_ids_ready[]); 

void time_list_init(void); 

#endif
