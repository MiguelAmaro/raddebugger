// Copyright (c) 2024 Epic Games Tools
// Licensed under the MIT license (https://opensource.org/license/mit/)

#ifndef PATH_H
#define PATH_H

////////////////////////////////
//~ allen: Path Helper Functions

internal StringMatchFlags path_match_flags_from_os(OperatingSystem os);
internal String8 path_relative_dst_from_absolute_dst_src(Arena *arena, String8 dst, String8 src);
internal String8 path_absolute_dst_from_relative_dst_src(Arena *arena, String8 dst, String8 src);
internal String8List path_normalized_list_from_string(Arena *arena, String8 path, PathStyle *style_out);
internal String8 path_normalized_from_string(Arena *arena, String8 path);
internal B32 path_match_normalized(String8 left, String8 right);

#endif //PATH_H
