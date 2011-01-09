/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression, NSVariableExpression;



@interface NSVariableAssignmentExpression : NSExpression 
{
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}


- (void)dealloc;
- (id)initWithAssignmentVariable:(id)arg1 expression:(id)arg2;
- (id)initWithAssignmentExpression:(id)arg1 expression:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)assignmentVariable;
- (id)variable;
- (id)subexpression;
- (id)predicateFormat;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;

@end
