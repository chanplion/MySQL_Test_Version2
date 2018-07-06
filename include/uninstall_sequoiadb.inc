--disable_query_log
--disable_warnings
SET default_storage_engine = default;
SET GLOBAL sequoiadb_use_partition = ON;
SET sql_mode = default;
#UNINSTALL PLUGIN sequoiadb;
