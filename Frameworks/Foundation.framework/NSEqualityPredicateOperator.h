/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSEqualityPredicateOperator : NSPredicateOperator 
{
    BOOL _negate;
    NSUInteger _options;
}


- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 negate:(BOOL)arg3;
- (id)initWithOperatorType:(NSUInteger)arg1 modifier:(NSUInteger)arg2 negate:(BOOL)arg3 options:(NSUInteger)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)predicateFormat;
- (BOOL)isNegation;
- (void)setNegation:(BOOL)arg1;
- (NSUInteger)options;
- (void)_setOptions:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;

@end
