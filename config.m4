PHP_ARG_ENABLE(native_dd, whether to enable native_dd,
[  --enable-native-dd   Enable native_dd])

if test "$PHP_NATIVE_DD" != "no"; then
    PHP_NEW_EXTENSION(native_dd, native_dd.c, $ext_shared)
fi