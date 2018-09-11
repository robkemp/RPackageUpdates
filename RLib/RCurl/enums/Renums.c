#include <curl/curl.h> 


int
main(int argc, char *argv[])
{

fprintf(stdout, "CURLOPT_FILE = %d\n", CURLOPT_FILE);
fprintf(stdout, "CURLOPT_URL = %d\n", CURLOPT_URL);
fprintf(stdout, "CURLOPT_PORT = %d\n", CURLOPT_PORT);
fprintf(stdout, "CURLOPT_PROXY = %d\n", CURLOPT_PROXY);
fprintf(stdout, "CURLOPT_USERPWD = %d\n", CURLOPT_USERPWD);
fprintf(stdout, "CURLOPT_PROXYUSERPWD = %d\n", CURLOPT_PROXYUSERPWD);
fprintf(stdout, "CURLOPT_RANGE = %d\n", CURLOPT_RANGE);
fprintf(stdout, "CURLOPT_INFILE = %d\n", CURLOPT_INFILE);
fprintf(stdout, "CURLOPT_ERRORBUFFER = %d\n", CURLOPT_ERRORBUFFER);
fprintf(stdout, "CURLOPT_WRITEFUNCTION = %d\n", CURLOPT_WRITEFUNCTION);
fprintf(stdout, "CURLOPT_READFUNCTION = %d\n", CURLOPT_READFUNCTION);
fprintf(stdout, "CURLOPT_TIMEOUT = %d\n", CURLOPT_TIMEOUT);
fprintf(stdout, "CURLOPT_INFILESIZE = %d\n", CURLOPT_INFILESIZE);
fprintf(stdout, "CURLOPT_POSTFIELDS = %d\n", CURLOPT_POSTFIELDS);
fprintf(stdout, "CURLOPT_REFERER = %d\n", CURLOPT_REFERER);
fprintf(stdout, "CURLOPT_FTPPORT = %d\n", CURLOPT_FTPPORT);
fprintf(stdout, "CURLOPT_USERAGENT = %d\n", CURLOPT_USERAGENT);
fprintf(stdout, "CURLOPT_LOW_SPEED_LIMIT = %d\n", CURLOPT_LOW_SPEED_LIMIT);
fprintf(stdout, "CURLOPT_LOW_SPEED_TIME = %d\n", CURLOPT_LOW_SPEED_TIME);
fprintf(stdout, "CURLOPT_RESUME_FROM = %d\n", CURLOPT_RESUME_FROM);
fprintf(stdout, "CURLOPT_COOKIE = %d\n", CURLOPT_COOKIE);
fprintf(stdout, "CURLOPT_HTTPHEADER = %d\n", CURLOPT_HTTPHEADER);
fprintf(stdout, "CURLOPT_HTTPPOST = %d\n", CURLOPT_HTTPPOST);
fprintf(stdout, "CURLOPT_SSLCERT = %d\n", CURLOPT_SSLCERT);
fprintf(stdout, "CURLOPT_KEYPASSWD = %d\n", CURLOPT_KEYPASSWD);
fprintf(stdout, "CURLOPT_CRLF = %d\n", CURLOPT_CRLF);
fprintf(stdout, "CURLOPT_QUOTE = %d\n", CURLOPT_QUOTE);
fprintf(stdout, "CURLOPT_WRITEHEADER = %d\n", CURLOPT_WRITEHEADER);
fprintf(stdout, "CURLOPT_COOKIEFILE = %d\n", CURLOPT_COOKIEFILE);
fprintf(stdout, "CURLOPT_SSLVERSION = %d\n", CURLOPT_SSLVERSION);
fprintf(stdout, "CURLOPT_TIMECONDITION = %d\n", CURLOPT_TIMECONDITION);
fprintf(stdout, "CURLOPT_TIMEVALUE = %d\n", CURLOPT_TIMEVALUE);
fprintf(stdout, "CURLOPT_CUSTOMREQUEST = %d\n", CURLOPT_CUSTOMREQUEST);
fprintf(stdout, "CURLOPT_STDERR = %d\n", CURLOPT_STDERR);
fprintf(stdout, "CURLOPT_POSTQUOTE = %d\n", CURLOPT_POSTQUOTE);
fprintf(stdout, "CURLOPT_WRITEINFO = %d\n", CURLOPT_WRITEINFO);
fprintf(stdout, "CURLOPT_VERBOSE = %d\n", CURLOPT_VERBOSE);
fprintf(stdout, "CURLOPT_HEADER = %d\n", CURLOPT_HEADER);
fprintf(stdout, "CURLOPT_NOPROGRESS = %d\n", CURLOPT_NOPROGRESS);
fprintf(stdout, "CURLOPT_NOBODY = %d\n", CURLOPT_NOBODY);
fprintf(stdout, "CURLOPT_FAILONERROR = %d\n", CURLOPT_FAILONERROR);
fprintf(stdout, "CURLOPT_UPLOAD = %d\n", CURLOPT_UPLOAD);
fprintf(stdout, "CURLOPT_POST = %d\n", CURLOPT_POST);
fprintf(stdout, "CURLOPT_DIRLISTONLY = %d\n", CURLOPT_DIRLISTONLY);
fprintf(stdout, "CURLOPT_APPEND = %d\n", CURLOPT_APPEND);
fprintf(stdout, "CURLOPT_NETRC = %d\n", CURLOPT_NETRC);
fprintf(stdout, "CURLOPT_FOLLOWLOCATION = %d\n", CURLOPT_FOLLOWLOCATION);
fprintf(stdout, "CURLOPT_TRANSFERTEXT = %d\n", CURLOPT_TRANSFERTEXT);
fprintf(stdout, "CURLOPT_PUT = %d\n", CURLOPT_PUT);
fprintf(stdout, "CURLOPT_PROGRESSFUNCTION = %d\n", CURLOPT_PROGRESSFUNCTION);
fprintf(stdout, "CURLOPT_PROGRESSDATA = %d\n", CURLOPT_PROGRESSDATA);
fprintf(stdout, "CURLOPT_AUTOREFERER = %d\n", CURLOPT_AUTOREFERER);
fprintf(stdout, "CURLOPT_PROXYPORT = %d\n", CURLOPT_PROXYPORT);
fprintf(stdout, "CURLOPT_POSTFIELDSIZE = %d\n", CURLOPT_POSTFIELDSIZE);
fprintf(stdout, "CURLOPT_HTTPPROXYTUNNEL = %d\n", CURLOPT_HTTPPROXYTUNNEL);
fprintf(stdout, "CURLOPT_INTERFACE = %d\n", CURLOPT_INTERFACE);
fprintf(stdout, "CURLOPT_KRBLEVEL = %d\n", CURLOPT_KRBLEVEL);
fprintf(stdout, "CURLOPT_SSL_VERIFYPEER = %d\n", CURLOPT_SSL_VERIFYPEER);
fprintf(stdout, "CURLOPT_CAINFO = %d\n", CURLOPT_CAINFO);
fprintf(stdout, "CURLOPT_MAXREDIRS = %d\n", CURLOPT_MAXREDIRS);
fprintf(stdout, "CURLOPT_FILETIME = %d\n", CURLOPT_FILETIME);
fprintf(stdout, "CURLOPT_TELNETOPTIONS = %d\n", CURLOPT_TELNETOPTIONS);
fprintf(stdout, "CURLOPT_MAXCONNECTS = %d\n", CURLOPT_MAXCONNECTS);
fprintf(stdout, "CURLOPT_CLOSEPOLICY = %d\n", CURLOPT_CLOSEPOLICY);
fprintf(stdout, "CURLOPT_FRESH_CONNECT = %d\n", CURLOPT_FRESH_CONNECT);
fprintf(stdout, "CURLOPT_FORBID_REUSE = %d\n", CURLOPT_FORBID_REUSE);
fprintf(stdout, "CURLOPT_RANDOM_FILE = %d\n", CURLOPT_RANDOM_FILE);
fprintf(stdout, "CURLOPT_EGDSOCKET = %d\n", CURLOPT_EGDSOCKET);
fprintf(stdout, "CURLOPT_CONNECTTIMEOUT = %d\n", CURLOPT_CONNECTTIMEOUT);
fprintf(stdout, "CURLOPT_HEADERFUNCTION = %d\n", CURLOPT_HEADERFUNCTION);
fprintf(stdout, "CURLOPT_HTTPGET = %d\n", CURLOPT_HTTPGET);
fprintf(stdout, "CURLOPT_SSL_VERIFYHOST = %d\n", CURLOPT_SSL_VERIFYHOST);
fprintf(stdout, "CURLOPT_COOKIEJAR = %d\n", CURLOPT_COOKIEJAR);
fprintf(stdout, "CURLOPT_SSL_CIPHER_LIST = %d\n", CURLOPT_SSL_CIPHER_LIST);
fprintf(stdout, "CURLOPT_HTTP_VERSION = %d\n", CURLOPT_HTTP_VERSION);
fprintf(stdout, "CURLOPT_FTP_USE_EPSV = %d\n", CURLOPT_FTP_USE_EPSV);
fprintf(stdout, "CURLOPT_SSLCERTTYPE = %d\n", CURLOPT_SSLCERTTYPE);
fprintf(stdout, "CURLOPT_SSLKEY = %d\n", CURLOPT_SSLKEY);
fprintf(stdout, "CURLOPT_SSLKEYTYPE = %d\n", CURLOPT_SSLKEYTYPE);
fprintf(stdout, "CURLOPT_SSLENGINE = %d\n", CURLOPT_SSLENGINE);
fprintf(stdout, "CURLOPT_SSLENGINE_DEFAULT = %d\n", CURLOPT_SSLENGINE_DEFAULT);
fprintf(stdout, "CURLOPT_DNS_USE_GLOBAL_CACHE = %d\n", CURLOPT_DNS_USE_GLOBAL_CACHE);
fprintf(stdout, "CURLOPT_DNS_CACHE_TIMEOUT = %d\n", CURLOPT_DNS_CACHE_TIMEOUT);
fprintf(stdout, "CURLOPT_PREQUOTE = %d\n", CURLOPT_PREQUOTE);
fprintf(stdout, "CURLOPT_DEBUGFUNCTION = %d\n", CURLOPT_DEBUGFUNCTION);
fprintf(stdout, "CURLOPT_DEBUGDATA = %d\n", CURLOPT_DEBUGDATA);
fprintf(stdout, "CURLOPT_COOKIESESSION = %d\n", CURLOPT_COOKIESESSION);
fprintf(stdout, "CURLOPT_CAPATH = %d\n", CURLOPT_CAPATH);
fprintf(stdout, "CURLOPT_BUFFERSIZE = %d\n", CURLOPT_BUFFERSIZE);
fprintf(stdout, "CURLOPT_NOSIGNAL = %d\n", CURLOPT_NOSIGNAL);
fprintf(stdout, "CURLOPT_SHARE = %d\n", CURLOPT_SHARE);
fprintf(stdout, "CURLOPT_PROXYTYPE = %d\n", CURLOPT_PROXYTYPE);
fprintf(stdout, "CURLOPT_ENCODING = %d\n", CURLOPT_ENCODING);
fprintf(stdout, "CURLOPT_PRIVATE = %d\n", CURLOPT_PRIVATE);
fprintf(stdout, "CURLOPT_HTTP200ALIASES = %d\n", CURLOPT_HTTP200ALIASES);
fprintf(stdout, "CURLOPT_UNRESTRICTED_AUTH = %d\n", CURLOPT_UNRESTRICTED_AUTH);
fprintf(stdout, "CURLOPT_FTP_USE_EPRT = %d\n", CURLOPT_FTP_USE_EPRT);
fprintf(stdout, "CURLOPT_HTTPAUTH = %d\n", CURLOPT_HTTPAUTH);
fprintf(stdout, "CURLOPT_SSL_CTX_FUNCTION = %d\n", CURLOPT_SSL_CTX_FUNCTION);
fprintf(stdout, "CURLOPT_SSL_CTX_DATA = %d\n", CURLOPT_SSL_CTX_DATA);
fprintf(stdout, "CURLOPT_FTP_CREATE_MISSING_DIRS = %d\n", CURLOPT_FTP_CREATE_MISSING_DIRS);
fprintf(stdout, "CURLOPT_PROXYAUTH = %d\n", CURLOPT_PROXYAUTH);
fprintf(stdout, "CURLOPT_FTP_RESPONSE_TIMEOUT = %d\n", CURLOPT_FTP_RESPONSE_TIMEOUT);
fprintf(stdout, "CURLOPT_IPRESOLVE = %d\n", CURLOPT_IPRESOLVE);
fprintf(stdout, "CURLOPT_MAXFILESIZE = %d\n", CURLOPT_MAXFILESIZE);
fprintf(stdout, "CURLOPT_INFILESIZE_LARGE = %d\n", CURLOPT_INFILESIZE_LARGE);
fprintf(stdout, "CURLOPT_RESUME_FROM_LARGE = %d\n", CURLOPT_RESUME_FROM_LARGE);
fprintf(stdout, "CURLOPT_MAXFILESIZE_LARGE = %d\n", CURLOPT_MAXFILESIZE_LARGE);
fprintf(stdout, "CURLOPT_NETRC_FILE = %d\n", CURLOPT_NETRC_FILE);
fprintf(stdout, "CURLOPT_USE_SSL = %d\n", CURLOPT_USE_SSL);
fprintf(stdout, "CURLOPT_POSTFIELDSIZE_LARGE = %d\n", CURLOPT_POSTFIELDSIZE_LARGE);
fprintf(stdout, "CURLOPT_TCP_NODELAY = %d\n", CURLOPT_TCP_NODELAY);
fprintf(stdout, "CURLOPT_FTPSSLAUTH = %d\n", CURLOPT_FTPSSLAUTH);
fprintf(stdout, "CURLOPT_IOCTLFUNCTION = %d\n", CURLOPT_IOCTLFUNCTION);
fprintf(stdout, "CURLOPT_IOCTLDATA = %d\n", CURLOPT_IOCTLDATA);
fprintf(stdout, "CURLOPT_FTP_ACCOUNT = %d\n", CURLOPT_FTP_ACCOUNT);
fprintf(stdout, "CURLOPT_COOKIELIST = %d\n", CURLOPT_COOKIELIST);
fprintf(stdout, "CURLOPT_IGNORE_CONTENT_LENGTH = %d\n", CURLOPT_IGNORE_CONTENT_LENGTH);
fprintf(stdout, "CURLOPT_FTP_SKIP_PASV_IP = %d\n", CURLOPT_FTP_SKIP_PASV_IP);
fprintf(stdout, "CURLOPT_FTP_FILEMETHOD = %d\n", CURLOPT_FTP_FILEMETHOD);
fprintf(stdout, "CURLOPT_LOCALPORT = %d\n", CURLOPT_LOCALPORT);
fprintf(stdout, "CURLOPT_LOCALPORTRANGE = %d\n", CURLOPT_LOCALPORTRANGE);
fprintf(stdout, "CURLOPT_CONNECT_ONLY = %d\n", CURLOPT_CONNECT_ONLY);
fprintf(stdout, "CURLOPT_CONV_FROM_NETWORK_FUNCTION = %d\n", CURLOPT_CONV_FROM_NETWORK_FUNCTION);
fprintf(stdout, "CURLOPT_CONV_TO_NETWORK_FUNCTION = %d\n", CURLOPT_CONV_TO_NETWORK_FUNCTION);
fprintf(stdout, "CURLOPT_CONV_FROM_UTF8_FUNCTION = %d\n", CURLOPT_CONV_FROM_UTF8_FUNCTION);
fprintf(stdout, "CURLOPT_MAX_SEND_SPEED_LARGE = %d\n", CURLOPT_MAX_SEND_SPEED_LARGE);
fprintf(stdout, "CURLOPT_MAX_RECV_SPEED_LARGE = %d\n", CURLOPT_MAX_RECV_SPEED_LARGE);
fprintf(stdout, "CURLOPT_FTP_ALTERNATIVE_TO_USER = %d\n", CURLOPT_FTP_ALTERNATIVE_TO_USER);
fprintf(stdout, "CURLOPT_SOCKOPTFUNCTION = %d\n", CURLOPT_SOCKOPTFUNCTION);
fprintf(stdout, "CURLOPT_SOCKOPTDATA = %d\n", CURLOPT_SOCKOPTDATA);
fprintf(stdout, "CURLOPT_SSL_SESSIONID_CACHE = %d\n", CURLOPT_SSL_SESSIONID_CACHE);
fprintf(stdout, "CURLOPT_SSH_AUTH_TYPES = %d\n", CURLOPT_SSH_AUTH_TYPES);
fprintf(stdout, "CURLOPT_SSH_PUBLIC_KEYFILE = %d\n", CURLOPT_SSH_PUBLIC_KEYFILE);
fprintf(stdout, "CURLOPT_SSH_PRIVATE_KEYFILE = %d\n", CURLOPT_SSH_PRIVATE_KEYFILE);
fprintf(stdout, "CURLOPT_FTP_SSL_CCC = %d\n", CURLOPT_FTP_SSL_CCC);
fprintf(stdout, "CURLOPT_TIMEOUT_MS = %d\n", CURLOPT_TIMEOUT_MS);
fprintf(stdout, "CURLOPT_CONNECTTIMEOUT_MS = %d\n", CURLOPT_CONNECTTIMEOUT_MS);
fprintf(stdout, "CURLOPT_HTTP_TRANSFER_DECODING = %d\n", CURLOPT_HTTP_TRANSFER_DECODING);
fprintf(stdout, "CURLOPT_HTTP_CONTENT_DECODING = %d\n", CURLOPT_HTTP_CONTENT_DECODING);
fprintf(stdout, "CURLOPT_NEW_FILE_PERMS = %d\n", CURLOPT_NEW_FILE_PERMS);
fprintf(stdout, "CURLOPT_NEW_DIRECTORY_PERMS = %d\n", CURLOPT_NEW_DIRECTORY_PERMS);
fprintf(stdout, "CURLOPT_POSTREDIR = %d\n", CURLOPT_POSTREDIR);
fprintf(stdout, "CURLOPT_SSH_HOST_PUBLIC_KEY_MD5 = %d\n", CURLOPT_SSH_HOST_PUBLIC_KEY_MD5);
fprintf(stdout, "CURLOPT_OPENSOCKETFUNCTION = %d\n", CURLOPT_OPENSOCKETFUNCTION);
fprintf(stdout, "CURLOPT_OPENSOCKETDATA = %d\n", CURLOPT_OPENSOCKETDATA);
fprintf(stdout, "CURLOPT_COPYPOSTFIELDS = %d\n", CURLOPT_COPYPOSTFIELDS);
fprintf(stdout, "CURLOPT_PROXY_TRANSFER_MODE = %d\n", CURLOPT_PROXY_TRANSFER_MODE);
fprintf(stdout, "CURLOPT_SEEKFUNCTION = %d\n", CURLOPT_SEEKFUNCTION);
fprintf(stdout, "CURLOPT_SEEKDATA = %d\n", CURLOPT_SEEKDATA);
fprintf(stdout, "CURLOPT_CRLFILE = %d\n", CURLOPT_CRLFILE);
fprintf(stdout, "CURLOPT_ISSUERCERT = %d\n", CURLOPT_ISSUERCERT);
fprintf(stdout, "CURLOPT_ADDRESS_SCOPE = %d\n", CURLOPT_ADDRESS_SCOPE);
fprintf(stdout, "CURLOPT_CERTINFO = %d\n", CURLOPT_CERTINFO);
fprintf(stdout, "CURLOPT_USERNAME = %d\n", CURLOPT_USERNAME);
fprintf(stdout, "CURLOPT_PASSWORD = %d\n", CURLOPT_PASSWORD);
fprintf(stdout, "CURLOPT_PROXYUSERNAME = %d\n", CURLOPT_PROXYUSERNAME);
fprintf(stdout, "CURLOPT_PROXYPASSWORD = %d\n", CURLOPT_PROXYPASSWORD);
fprintf(stdout, "CURLOPT_NOPROXY = %d\n", CURLOPT_NOPROXY);
fprintf(stdout, "CURLOPT_TFTP_BLKSIZE = %d\n", CURLOPT_TFTP_BLKSIZE);
fprintf(stdout, "CURLOPT_SOCKS5_GSSAPI_SERVICE = %d\n", CURLOPT_SOCKS5_GSSAPI_SERVICE);
fprintf(stdout, "CURLOPT_SOCKS5_GSSAPI_NEC = %d\n", CURLOPT_SOCKS5_GSSAPI_NEC);
fprintf(stdout, "CURLOPT_PROTOCOLS = %d\n", CURLOPT_PROTOCOLS);
fprintf(stdout, "CURLOPT_REDIR_PROTOCOLS = %d\n", CURLOPT_REDIR_PROTOCOLS);
fprintf(stdout, "CURLOPT_LASTENTRY = %d\n", CURLOPT_LASTENTRY);


}
