--disable_query_log
INSTALL PLUGIN sequoiadb SONAME 'ha_sequoiadb.so';
SET default_storage_engine = SequoiaDB;
SET GLOBAL sequoiadb_use_partition = OFF;
--enable_query_log

