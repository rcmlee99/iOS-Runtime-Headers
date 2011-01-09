/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */



@interface SCRCIndexMap : NSObject <NSCopying>
{
    struct __CFDictionary { } *_map;
}


- (id)initWithObjects:(id*)arg1 andIndexes:(NSUInteger*)arg2 count:(unsigned long)arg3;
- (id)init;
- (id)_initWithIndexMap:(id)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setObject:(id)arg1 forIndex:(unsigned long)arg2;
- (void)removeObjectForIndex:(unsigned long)arg1;
- (void)removeAllObjects;
- (id)objectForIndex:(unsigned long)arg1;
- (unsigned long)count;
- (NSUInteger*)_createIndexesWithSize:(NSUInteger*)arg1;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)description;

@end
