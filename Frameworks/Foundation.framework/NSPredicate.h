/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSPredicate : NSObject <NSCoding, NSCopying>
{
    void *_reserved;
}

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(NSUInteger)arg2;
+ (struct __CFLocale { }*)retainedLocale;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)predicateWithValue:(BOOL)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)description;
- (id)predicateFormat;
- (id)minimalFormInContext:(id)arg1;

@end
