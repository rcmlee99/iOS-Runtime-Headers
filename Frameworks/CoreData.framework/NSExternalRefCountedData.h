/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface NSExternalRefCountedData : NSObject 
{
    NSInteger _cd_rc;
    struct _externalRefFlags_st { 
        unsigned int _shouldNotRefresh : 1; 
        unsigned int _shouldNotPersist : 1; 
        unsigned int _reservedFlags : 11; 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _externalReferenceCount : 16; 
    } _externalRefFlags;
    double _birth;
    id _toManyMap;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initWithOptions:(NSUInteger)arg1 andTimestamp:(double)arg2;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (void)dealloc;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (NSUInteger)options;
- (BOOL)shouldRefresh;
- (BOOL)shouldPersist;
- (void)setExternalReferenceCount:(NSInteger)arg1;
- (NSInteger)externalReferenceCount;
- (void)incrementRefCount;
- (NSInteger)decrementRefCount;
- (id)relationshipCaches;
- (void)setRelationshipCaches:(id)arg1;
- (NSUInteger)optionsForKey:(id)arg1;
- (id)relatedIDsForKey:(id)arg1;
- (double)timestampForKey:(id)arg1;
- (void)setRelatedIDs:(id)arg1 forKey:(id)arg2 options:(NSUInteger)arg3 andTimestamp:(double)arg4;

@end
