/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSConcreteHashTable : NSHashTable 
{
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        struct auto_weak_callback_block { 
            struct auto_weak_callback_block {} *next; 
            int (*callback_function)(); 
            void *arg1; 
            void *arg2; 
        } block; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
    NSUInteger count;
    NSUInteger capacity;
    NSUInteger options;
    NSUInteger mutations;
}


- (void)_initBlock;
- (id)init;
- (id)copy;
- (id)initWithOptions:(NSUInteger)arg1 capacity:(NSUInteger)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(NSUInteger)arg2;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)pointerFunctions;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)count;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)raiseCountUnderflowException;
- (NSUInteger)rehashAround:(NSUInteger)arg1;
- (void)hashGrow;
- (void)assign:(NSUInteger)arg1 key:(const void*)arg2;
- (void)rehash;
- (const void*)getItem:(const void*)arg1;
- (void)insertItem:(const void*)arg1;
- (void)addObject:(id)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeItem:(const void*)arg1;
- (void)removeAllItems;
- (id)allObjects;
- (NSUInteger)getKeys:(void**)arg1;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (id)objectEnumerator;

@end
