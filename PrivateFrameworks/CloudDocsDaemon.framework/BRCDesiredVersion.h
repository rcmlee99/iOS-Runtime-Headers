/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLBindable> {
    union { 
        unsigned int value; 
        struct { 
            unsigned int isFault : 1; 
            unsigned int startDownload : 1; 
        } ; 
    NSError *_downloadError;
    } _flags;
    NSString *_serverName;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * downloadError;
@property(readonly) unsigned long long hash;
@property bool isFault;
@property(readonly) NSString * serverName;
@property(readonly) Class superclass;
@property bool wantsContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithContext:(id)arg1;
- (id)downloadError;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (bool)isFault;
- (bool)isStillValidForEtag:(id)arg1;
- (id)serverName;
- (void)setDownloadError:(id)arg1;
- (void)setIsFault:(bool)arg1;
- (void)setWantsContent:(bool)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (bool)wantsContent;

@end
