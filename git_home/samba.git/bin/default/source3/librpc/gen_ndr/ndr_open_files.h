/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/source3/librpc/gen_ndr/open_files.h"

#ifndef _HEADER_NDR_open_files
#define _HEADER_NDR_open_files

#define NDR_OPEN_FILES_CALL_COUNT (0)
enum ndr_err_code ndr_push_share_mode_lease(struct ndr_push *ndr, int ndr_flags, const struct share_mode_lease *r);
enum ndr_err_code ndr_pull_share_mode_lease(struct ndr_pull *ndr, int ndr_flags, struct share_mode_lease *r);
void ndr_print_share_mode_lease(struct ndr_print *ndr, const char *name, const struct share_mode_lease *r);
enum ndr_err_code ndr_push_share_mode_entry(struct ndr_push *ndr, int ndr_flags, const struct share_mode_entry *r);
enum ndr_err_code ndr_pull_share_mode_entry(struct ndr_pull *ndr, int ndr_flags, struct share_mode_entry *r);
void ndr_print_share_mode_entry(struct ndr_print *ndr, const char *name, const struct share_mode_entry *r);
enum ndr_err_code ndr_push_delete_token(struct ndr_push *ndr, int ndr_flags, const struct delete_token *r);
enum ndr_err_code ndr_pull_delete_token(struct ndr_pull *ndr, int ndr_flags, struct delete_token *r);
void ndr_print_delete_token(struct ndr_print *ndr, const char *name, const struct delete_token *r);
enum ndr_err_code ndr_push_share_mode_data(struct ndr_push *ndr, int ndr_flags, const struct share_mode_data *r);
enum ndr_err_code ndr_pull_share_mode_data(struct ndr_pull *ndr, int ndr_flags, struct share_mode_data *r);
void ndr_print_share_mode_data(struct ndr_print *ndr, const char *name, const struct share_mode_data *r);
void ndr_print_vfs_default_durable_stat(struct ndr_print *ndr, const char *name, const struct vfs_default_durable_stat *r);
enum ndr_err_code ndr_push_vfs_default_durable_cookie(struct ndr_push *ndr, int ndr_flags, const struct vfs_default_durable_cookie *r);
enum ndr_err_code ndr_pull_vfs_default_durable_cookie(struct ndr_pull *ndr, int ndr_flags, struct vfs_default_durable_cookie *r);
void ndr_print_vfs_default_durable_cookie(struct ndr_print *ndr, const char *name, const struct vfs_default_durable_cookie *r);
#endif /* _HEADER_NDR_open_files */
