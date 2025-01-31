/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "commands/sequence.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"

#include "catalog/ag_graph.h"
#include "catalog/ag_label.h"
#include "commands/label_commands.h"
#include "utils/ag_cache.h"

#ifndef AGE_ENTITY_CREATOR_H
#define AGE_ENTITY_CREATOR_H

agtype* create_empty_agtype(void);

agtype* create_agtype_from_list(char **header, char **fields,
                                size_t fields_len, int64 vertex_id);
agtype* create_agtype_from_list_i(char **header, char **fields,
                                  size_t fields_len, size_t start_index);
void insert_vertex_simple(Oid graph_oid, char *label_name, graphid vertex_id,
                          agtype *vertex_properties);
void insert_edge_simple(Oid graph_oid, char *label_name, graphid edge_id,
                        graphid start_id, graphid end_id,
                        agtype* end_properties);

#endif //AGE_ENTITY_CREATOR_H
