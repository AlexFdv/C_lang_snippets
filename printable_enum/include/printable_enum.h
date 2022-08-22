#define PRINTABLE_ENUM(enum_name, list) \
    enum enum_name { list(DEF_VAL) }; \
    char *enum_name##_str[] = { list(DEF_STR) };

#define DEF_VAL(enum_value) enum_value
#define DEF_STR(enum_value) #enum_value

#define ENUM_VAL_TO_STR(enum_name, enum_value) enum_name##_str[enum_value]
