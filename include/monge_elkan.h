/*
 * * Copyright (C) 2012 Johnathan Botha et al. All rights reserved.
 *
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
 * monge_elkan.h
 *
 *  Created on: 26 Nov 2012
 *      Author: Johnathan Botha <jokillsya@gmail.com>
 */

#ifndef MONGE_ELKAN_H_
#define MONGE_ELKAN_H_

float custom_monge_elkan_similarity(const char *str1, const char *str2, metric_function_t *metric, const void *v_conf, const cost_type_e cost_type, const char *tok_str);
float monge_elkan_similarity(const char *str1, const char *str2);

#endif /* MONGE_ELKAN_H_ */
