--let $MASTER_1_COMMENT_2_1= $MASTER_1_COMMENT_2_1_BACKUP
--let $CHILD2_1_DROP_TABLES= $CHILD2_1_DROP_TABLES_BACKUP
--let $CHILD2_1_CREATE_TABLES= $CHILD2_1_CREATE_TABLES_BACKUP
--source delete_with_float_column_deinit.inc