/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    DOMHTMLOptionElement *_node;
    bool_selected;
}

@property(retain) DOMHTMLOptionElement * _node;

- (id)_node;
- (void)dealloc;
- (id)initWithHTMLOptionNode:(id)arg1;
- (bool)isGroup;
- (id)node;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)set_node:(id)arg1;
- (void)unselect;

@end
