/*
 * This file is part of libsimmetrics
 *
 * libsimmetrics is the C port of the Java project called Simmetrics,
 *
 * The Java code can be found here: https://github.com/Simmetrics/simmetrics
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * smith_waterman_gotoh.h
 *
 *  Created on: 22 Nov 2012
 *      Author: Johnathan Botha <jokillsya@gmail.com>
 */

#ifndef SMITH_WATERMAN_GOTOH_H_
#define SMITH_WATERMAN_GOTOH_H_

float custom_smith_waterman_gotoh(const char *str1, const char *str2, const w_comp_idx_cost_t *conf);
float smith_waterman_gotoh(const char *str1, const char *str2);
float custom_smith_waterman_gotoh_similarity(const char *str1, const char *str2, const void *v_conf);
float smith_waterman_gotoh_similarity(const char *str1, const char *str2);

#endif /* SMITH_WATERMAN_GOTOH_H_ */
