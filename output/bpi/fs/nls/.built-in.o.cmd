cmd_fs/nls/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o fs/nls/built-in.o fs/nls/nls_base.o fs/nls/nls_cp437.o fs/nls/nls_cp874.o fs/nls/nls_cp932.o fs/nls/nls_euc-jp.o fs/nls/nls_cp936.o fs/nls/nls_cp949.o fs/nls/nls_cp950.o fs/nls/nls_ascii.o fs/nls/nls_iso8859-1.o fs/nls/nls_utf8.o 