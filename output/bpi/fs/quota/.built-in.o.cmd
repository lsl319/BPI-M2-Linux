cmd_fs/quota/built-in.o :=  arm-linux-gnueabihf-ld -EL    -r -o fs/quota/built-in.o fs/quota/dquot.o fs/quota/quota_v2.o fs/quota/quota_tree.o fs/quota/quota.o fs/quota/kqid.o fs/quota/netlink.o 
