/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSPredicateOperator;



@interface NSComparisonPredicate : NSPredicate 
{
    void *_reserved2;
    NSPredicateOperator *_predicateOperator;
    NSExpression *_lhs;
    NSExpression *_rhs;
}

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(NSUInteger)arg3 type:(NSUInteger)arg4 options:(NSUInteger)arg5;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;

- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(NSUInteger)arg3 type:(NSUInteger)arg4 options:(NSUInteger)arg5;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)keyPathExpressionForString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (void)dealloc;
- (id)predicateFormat;
- (NSUInteger)predicateOperatorType;
- (NSUInteger)comparisonPredicateModifier;
- (id)leftExpression;
- (id)rightExpression;
- (SEL)customSelector;
- (id)predicateOperator;
- (void)setPredicateOperator:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)_acceptOperator:(id)arg1 flags:(NSUInteger)arg2;
- (void)_acceptExpressions:(id)arg1 flags:(NSUInteger)arg2;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (NSUInteger)options;
- (BOOL)_isForeignObjectExpression:(id)arg1 givenContext:(id)arg2;
- (id)minimalFormInContext:(id)arg1;

@end
