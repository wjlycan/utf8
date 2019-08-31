# utf8
utf8 &lt;=> unicode

        // print src string
    printf("wchar_t=%u", (unsigned int)sizeof(wchar_t));
    wchar_t *wstr = L"编码测试 abc-123 编码测试";
    size_t wlen = wcslen(wstr);
    size_t i = 0;
    printf("wstr code: \n");
    for(i=0; i<wlen; ++i){
        printf("%04x ", wstr[i]);
    }
    printf("\n\n");

        // encode test
    int length = -1;
    unsigned char *utf8_string = utf8_encode_string(wstr, &length);
    printf("encode utf8 string codes: \n");
    for(i=0; i<length; ++i){
        printf("%02x ", utf8_string[i]);
    }
    printf("\n\n");

        // decode test
    length = -1;
    wchar_t *wstr1 = utf8_decode_string(utf8_string, &length);
    printf("decode utf8 string codes: \n");
    for(i=0; i<length; ++i){
        printf("%04x ", wstr1[i]);
    }
    printf("\n\n");
    free(wstr1);
    free(utf8_string);
