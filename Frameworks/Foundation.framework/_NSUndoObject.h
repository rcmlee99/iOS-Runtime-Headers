/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class _NSUndoObject;



@interface _NSUndoObject : NSObject 
{
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}


- (id)init;
- (id)initWithTarget:(id)arg1;
- (BOOL)isBeginMark;
- (BOOL)isEndMark;
- (void)invoke;
- (id)target;

@end
