package twig

import (
	"testing"
	"unsafe"

	treesitter "github.com/tree-sitter/go-tree-sitter"
)

func TestLanguage(t *testing.T) {
	lang := Language()
	if lang == nil {
		t.Error("Expected language binding to return a valid pointer")
	}
	if lang == unsafe.Pointer(nil) {
		t.Error("Expected language binding to return a non-nil unsafe pointer")
	}
}

func TestParseTwig(t *testing.T) {
	parser := treesitter.NewParser()
	parser.SetLanguage(treesitter.NewLanguage(Language()))

	source := []byte(`{% extends "base.html" %}`)
	tree := parser.Parse(source, nil)

	root := tree.RootNode()
	if root.Kind() != "template" {
		t.Errorf("Expected root node to be 'template', got %s", root.Kind())
	}
}
