/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMNode, UIView<UIFormPeripheral>;



@interface UIPeripheralTransition : NSObject 
{
    DOMNode *_nextNode;
    UIView<UIFormPeripheral> *_nextPeripheral;
}

@property(retain) UIView<UIFormPeripheral> *_nextPeripheral; /* unknown property attribute: V_nextPeripheral */
@property(retain) DOMNode *_nextNode; /* unknown property attribute: V_nextNode */


- (id)initWithNode:(id)arg1 withPeripheral:(id)arg2;
- (void)dealloc;
- (id)completeWithCurrentPeripheral:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)_nextPeripheral;
- (void)set_nextPeripheral:(id)arg1;
- (id)_nextNode;
- (void)set_nextNode:(id)arg1;

@end
