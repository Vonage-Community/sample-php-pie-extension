#include "php.h"
#include <ext/standard/php_var.h>
#include "php_native_dd.h"

PHP_FUNCTION(native_dd)
{
    zval *value;

    ZEND_PARSE_PARAMETERS_START(1, 1)
        Z_PARAM_ZVAL(value)
    ZEND_PARSE_PARAMETERS_END();

    php_var_dump(value, 0);
    
    php_printf("\n");
    php_output_flush();

    zend_bailout();
}

ZEND_BEGIN_ARG_INFO(arginfo_native_dd_test, 0)
ZEND_END_ARG_INFO()

static const zend_function_entry native_dd_functions[] = {
    PHP_FE(native_dd, arginfo_native_dd_test)
    PHP_FE_END
};

zend_module_entry native_dd_module_entry = {
    STANDARD_MODULE_HEADER,
    "native_dd",
    native_dd_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    "0.1.0",
    STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(native_dd)