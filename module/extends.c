#include <Python.h>

/* 
 * Extension structure
 */
static PyMethodDef PracticeMethods[] = {
  {"hello_world", (PyCFunction)hello_world, METH_NOARGS, "practice1: hello_world"},
  {"push", (PyCFunction)push, METH_VARARGS, "practice2: push"},
  {"pop", (PyCFunction)pop, METH_VARARGS, "practice3: pop"},
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef practicetmodule = {
  PyModuleDef_HEAD_INIT,
  "practice",
  NULL,
  -1,
  PracticeMethods
};


/*
 *　Functions required for expansion
 */
static PyObject* hello_world (PyObject *self, PyObject *args) {
  printf("Hello_world\n");
  Py_RETURN_NONE;
}

PyMODINIT_FUNC PyInit_practice (void) {
  return PyModule_Create(&practicetmodule);
}
