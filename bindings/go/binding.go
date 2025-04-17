package twig

// #cgo CFLAGS: -std=c99 -I${SRCDIR}/../../src
// #include <stdlib.h>
// #include "tree_sitter/parser.h"
//
// #define TREE_SITTER_LANGUAGE_VERSION 14
//
// #include "../../src/parser.c"
// #include "../../src/scanner.c"
import "C"
import "unsafe"

// Language returns the tree-sitter language for Twig.
func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_twig())
}
