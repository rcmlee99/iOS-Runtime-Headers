/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSCFArray : NSMutableArray 
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)retain;
- (oneway void)release;
- (NSUInteger)retainCount;
- (void)finalize;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (id)objectAtIndex:(NSUInteger)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)removeObjectsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)removeAllObjects;
- (void)exchangeObjectAtIndex:(NSUInteger)arg1 withObjectAtIndex:(NSUInteger)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;

@end
