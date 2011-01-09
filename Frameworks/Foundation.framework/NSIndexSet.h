/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    struct { 
        unsigned int _isEmpty : 1; 
        unsigned int _hasSingleRange : 1; 
        unsigned int _cacheValid : 1; 
        unsigned int _reservedArrayBinderController : 29; 
    } _indexSetFlags;
    union { 
        struct { 
            struct _NSRange { 
                NSUInteger location; 
                NSUInteger length; 
            } _range; 
        } _singleRange; 
        struct { 
            void *_data; 
            void *_reserved; 
        } _multipleRanges; 
    } _internal;
}

+ (id)indexSet;
+ (id)indexSetWithIndex:(NSUInteger)arg1;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;

- (id)_init;
- (id)init;
- (id)initWithIndex:(NSUInteger)arg1;
- (id)initWithIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_setContentToContentFromIndexSet:(id)arg1;
- (id)initWithIndexSet:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (NSUInteger)_indexOfRangeContainingIndex:(NSUInteger)arg1;
- (NSUInteger)_indexOfRangeBeforeOrContainingIndex:(NSUInteger)arg1;
- (NSUInteger)_indexOfRangeAfterOrContainingIndex:(NSUInteger)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToIndexSet:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)count;
- (NSUInteger)firstIndex;
- (NSUInteger)lastIndex;
- (NSUInteger)_indexClosestToIndex:(NSUInteger)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3;
- (NSUInteger)indexGreaterThanIndex:(NSUInteger)arg1;
- (NSUInteger)indexLessThanIndex:(NSUInteger)arg1;
- (NSUInteger)indexGreaterThanOrEqualToIndex:(NSUInteger)arg1;
- (NSUInteger)indexLessThanOrEqualToIndex:(NSUInteger)arg1;
- (NSUInteger)getIndexes:(NSUInteger*)arg1 maxCount:(NSUInteger)arg2 inIndexRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3;
- (NSUInteger)countOfIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)__000:(out struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1;
- (NSUInteger)rangeCount;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeAtIndex:(NSUInteger)arg1;
- (BOOL)containsIndex:(NSUInteger)arg1;
- (BOOL)containsIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)containsIndexes:(id)arg1;
- (BOOL)intersectsIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)_numberEnumerator;
- (id)description;

@end
