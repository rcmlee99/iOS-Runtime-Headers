/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSDictionary;



@interface NSFileAttributes : NSDictionary 
{
    NSMutableDictionary *dict;
    struct stat { 
        NSInteger st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        NSUInteger st_uid; 
        NSUInteger st_gid; 
        NSInteger st_rdev; 
        struct timespec { 
            NSInteger tv_sec; 
            long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            NSInteger tv_sec; 
            long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            NSInteger tv_sec; 
            long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            NSInteger tv_sec; 
            long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        NSInteger st_blksize; 
        NSUInteger st_flags; 
        NSUInteger st_gen; 
        NSInteger st_lspare; 
        long long st_qspare[2]; 
    } statInfo;
    NSDictionary *extendedAttrs;
}

+ (id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
+ (id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 error:(id*)arg3;
+ (id)attributesWithStat:(struct stat { NSInteger x1; unsigned short x2; unsigned short x3; unsigned long long x4; NSUInteger x5; NSUInteger x6; NSInteger x7; struct timespec { NSInteger x_8_1_1; long x_8_1_2; } x8; struct timespec { NSInteger x_9_1_1; long x_9_1_2; } x9; struct timespec { NSInteger x_10_1_1; long x_10_1_2; } x10; struct timespec { NSInteger x_11_1_1; long x_11_1_2; } x11; long long x12; long long x13; NSInteger x14; NSUInteger x15; NSUInteger x16; NSInteger x17; long long x18[2]; }*)arg1;

- (void)dealloc;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (NSUInteger)count;
- (id)keyEnumerator;
- (unsigned long long)fileSize;
- (id)fileModificationDate;
- (id)fileType;
- (NSUInteger)filePosixPermissions;
- (id)fileOwnerAccountName;
- (NSUInteger)fileOwnerAccountNumber;
- (id)fileGroupOwnerAccountName;
- (NSUInteger)fileGroupOwnerAccountNumber;
- (NSInteger)fileSystemNumber;
- (NSUInteger)fileSystemFileNumber;
- (BOOL)isDirectory;

@end
