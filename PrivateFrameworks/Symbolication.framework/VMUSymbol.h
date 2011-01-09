/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, VMUSymbolOwner;



@interface VMUSymbol : VMUAddressRange <NSCopying>
{
    NSString *_name;
    NSString *_mangledName;
    VMUSymbolOwner *_owner;
    NSUInteger _flags;
}

+ (id)symbolWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3 owner:(id)arg4 flags:(NSUInteger)arg5;

- (id)initWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3 owner:(id)arg4 flags:(NSUInteger)arg5;
- (id)name;
- (id)mangledName;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)owner;
- (id)sourceInfos;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)text;
- (NSUInteger)flags;
- (BOOL)isFunction;
- (BOOL)isObjcMethod;
- (BOOL)isJavaMethod;
- (BOOL)isDyldStub;
- (BOOL)isExternal;
- (BOOL)isArm;
- (BOOL)isThumb;
- (NSInteger)compare:(id)arg1;
- (BOOL)isEqualToSymbol:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setOwner:(id)arg1;

@end
