#include <Python.h>

static PyObject *
hello(PyObject *self, PyObject *args)
{
    const char *name;

    if (!PyArg_ParseTuple(args, "s", &name)) {
        return NULL;
    }

    printf("Hello, %s!\n", name);

    Py_RETURN_NONE;
}

static PyMethodDef MyExtensionMethods[] = {
    {"hello", hello, METH_VARARGS, "Say hello."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef myextensionmodule = {
    PyModuleDef_HEAD_INIT,
    "myextension",
    "Example module that defines a hello function.",
    -1,
    MyExtensionMethods
};

PyMODINIT_FUNC
PyInit_myextension(void)
{
    return PyModule_Create(&myextensionmodule);
}
