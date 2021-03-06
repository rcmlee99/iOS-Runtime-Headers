/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {
    struct CGPoint { 
        double x; 
        double y; 
    } _gravity;
}

@property double angle;
@property struct CGVector { double x1; double x2; } gravityDirection;
@property(copy,readonly) NSArray * items;
@property double magnitude;

- (void)_addItem:(id)arg1;
- (void)_associate;
- (void)_commonInit;
- (void)_dissociate;
- (void)_setAngle:(double)arg1 magnitude:(double)arg2;
- (void)addItem:(id)arg1;
- (double)angle;
- (struct CGPoint { double x1; double x2; })denormalizedGravity;
- (id)description;
- (struct CGPoint { double x1; double x2; })gravity;
- (struct CGVector { double x1; double x2; })gravityDirection;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (double)magnitude;
- (void)removeItem:(id)arg1;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)setAngle:(double)arg1;
- (void)setGravity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGravityDirection:(struct CGVector { double x1; double x2; })arg1;
- (void)setMagnitude:(double)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setXComponent:(double)arg1;
- (void)setYComponent:(double)arg1;
- (double)xComponent;
- (double)yComponent;

@end
