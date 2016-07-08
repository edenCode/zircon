#define SYS_exit 1
#define SYS_write 4
#define SYS_close 6
#define SYS_execve 11
#define SYS_chdir 12
#define SYS_getpid 20
#define SYS_setuid 23
#define SYS_getuid 24
#define SYS_ptrace 26
#define SYS_sync 36
#define SYS_kill 37
#define SYS_times 43
#define SYS_brk 45
#define SYS_setgid 46
#define SYS_getgid 47
#define SYS_geteuid 49
#define SYS_getegid 50
#define SYS_acct 51
#define SYS_ioctl 54
#define SYS_fcntl 55
#define SYS_setpgid 57
#define SYS_umask 60
#define SYS_chroot 61
#define SYS_getppid 64
#define SYS_setsid 66
#define SYS_setreuid 70
#define SYS_setregid 71
#define SYS_sethostname 74
#define SYS_getrusage 77
#define SYS_settimeofday 79
#define SYS_getgroups 80
#define SYS_setgroups 81
#define SYS_truncate 92
#define SYS_ftruncate 93
#define SYS_fchmod 94
#define SYS_fchown 95
#define SYS_getpriority 96
#define SYS_setpriority 97
#define SYS_statfs 99
#define SYS_fstatfs 100
#define SYS_setitimer 104
#define SYS_getitimer 105
#define SYS_fstat 108
#define SYS_wait4 114
#define SYS_fsync 118
#define SYS_clone 120
#define SYS_setdomainname 121
#define SYS_uname 122
#define SYS_adjtimex 124
#define SYS_mprotect 125
#define SYS_quotactl 131
#define SYS_getpgid 132
#define SYS_fchdir 133
#define SYS_flock 143
#define SYS_msync 144
#define SYS_getsid 147
#define SYS_fdatasync 148
#define SYS_mlock 150
#define SYS_munlock 151
#define SYS_mlockall 152
#define SYS_munlockall 153
#define SYS_sched_setparam 154
#define SYS_sched_getparam 155
#define SYS_sched_setscheduler 156
#define SYS_sched_getscheduler 157
#define SYS_sched_get_priority_max 159
#define SYS_sched_get_priority_min 160
#define SYS_sched_rr_get_interval 161
#define SYS_setresuid 164
#define SYS_getresuid 165
#define SYS_setresgid 170
#define SYS_getresgid 171
#define SYS_prctl 172
#define SYS_rt_sigaction 174
#define SYS_rt_sigprocmask 175
#define SYS_rt_sigpending 176
#define SYS_rt_sigtimedwait 177
#define SYS_rt_sigqueueinfo 178
#define SYS_rt_sigsuspend 179
#define SYS_pread64 180
#define SYS_pwrite64 181
#define SYS_getcwd 183
#define SYS_sigaltstack 186
#define SYS_ugetrlimit 191
#define SYS_mmap2 192
#define SYS_mincore 219
#define SYS_madvise 220
#define SYS_gettid 224
#define SYS_tkill 238
#define SYS_sched_setaffinity 241
#define SYS_sched_getaffinity 242
#define SYS_set_tid_address 256
#define SYS_timer_create 257
#define SYS_timer_settime 258
#define SYS_timer_gettime 259
#define SYS_timer_getoverrun 260
#define SYS_timer_delete 261
#define SYS_clock_settime 262
#define SYS_clock_getres 264
#define SYS_clock_nanosleep 265
#define SYS_fadvise64_64 270
#define SYS_mq_open 274
#define SYS_mq_unlink 275
#define SYS_mq_timedsend 276
#define SYS_mq_timedreceive 277
#define SYS_mq_notify 278
#define SYS_mq_getsetattr 279
#define SYS_waitid 280
#define SYS_socket 281
#define SYS_bind 282
#define SYS_connect 283
#define SYS_listen 284
#define SYS_accept 285
#define SYS_getsockname 286
#define SYS_getpeername 287
#define SYS_socketpair 288
#define SYS_sendto 290
#define SYS_recvfrom 292
#define SYS_shutdown 293
#define SYS_setsockopt 294
#define SYS_getsockopt 295
#define SYS_sendmsg 296
#define SYS_recvmsg 297
#define SYS_semop 298
#define SYS_semget 299
#define SYS_semctl 300
#define SYS_msgsnd 301
#define SYS_msgrcv 302
#define SYS_msgget 303
#define SYS_msgctl 304
#define SYS_shmat 305
#define SYS_shmdt 306
#define SYS_shmget 307
#define SYS_shmctl 308
#define SYS_semtimedop 312
#define SYS_openat 322
#define SYS_mkdirat 323
#define SYS_mknodat 324
#define SYS_fchownat 325
#define SYS_fstatat64 327
#define SYS_renameat 329
#define SYS_linkat 330
#define SYS_symlinkat 331
#define SYS_readlinkat 332
#define SYS_fchmodat 333
#define SYS_faccessat 334
#define SYS_pselect6 335
#define SYS_ppoll 336
#define SYS_set_robust_list 338
#define SYS_getcpu 345
#define SYS_utimensat 348
#define SYS_fallocate 352
#define SYS_pipe2 359
#define SYS_preadv 361
#define SYS_pwritev 362
#define SYS_recvmmsg 365
#define SYS_accept4 366
#define SYS_prlimit64 369
#define SYS_sendmmsg 374
