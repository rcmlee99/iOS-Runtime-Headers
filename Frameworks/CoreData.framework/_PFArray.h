/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface _PFArray : NSArray 
{
    NSInteger _cd_rc;
    NSUInteger _count;
    id *_array;
    struct _PFArrayFlags { 
        unsigned int shouldRetain : 1; 
        unsigned int shouldRelease : 1; 
        unsigned int useExtendedRelease : 1; 
        unsigned int freeBackingArray : 1; 
        unsigned int copyBackingArray : 1; 
        unsigned int managedObjects : 1; 
        unsigned int _RESERVED : 27; 
    } _flags;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)initWithObjects:(const id*)arg1 count:(NSUInteger)arg2;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2 andFlags:(NSUInteger)arg3;
- (id*)_objectsPointer;
- (id)arrayFromObjectIDs;
- (void)dealloc;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)retain;
- (void)release;
- (NSUInteger)retainCount;
- (NSUInteger)_flags;
- (void)_setShouldRelease:(BOOL)arg1;
- (void)_setShouldUseExtendedRelease:(BOOL)arg1;

@end
