/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebViewWebViewDelegate, UIWebDocumentView, UICheckeredPatternView, <UIWebViewDelegate>, UIScroller, NSURLRequest;



@interface UIWebViewInternal : NSObject <UIFormAssistantDelegate>
{
    UIScroller *scroller;
    UIWebDocumentView *documentView;
    UICheckeredPatternView *checkeredPatternView;
    <UIWebViewDelegate> *delegate;
    unsigned int scalesPageToFit : 1;
    unsigned int isLoading : 1;
    unsigned int drawsCheckeredPattern : 1;
    unsigned int usedGeolocation : 1;
    unsigned int webSelectionEnabled : 1;
    unsigned int drawInWebThread : 1;
    NSURLRequest *request;
    NSInteger clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
}


- (void)formAssistant:(id)arg1 didBeginEditingFormNode:(id)arg2;
- (void)formAssistant:(id)arg1 didEndEditingFormNode:(id)arg2;

@end
