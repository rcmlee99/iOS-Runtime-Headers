/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebViewInternal;



@interface UIWebView : UIView <NSCoding>
{
    UIWebViewInternal *_internal;
}

@property <UIWebViewDelegate> *delegate;
@property(retain,readonly) NSURLRequest *request;
@property(getter=canGoBack,readonly) BOOL canGoBack;
@property(getter=canGoForward,readonly) BOOL canGoForward;
@property(getter=isLoading,readonly) BOOL loading;
@property BOOL scalesPageToFit;
@property BOOL detectsPhoneNumbers;
@property NSUInteger dataDetectorTypes;


- (void)_setScalesPageToFitViewportSettings;
- (void)_setRichTextReaderViewportSettings;
- (void)_updateViewSettings;
- (id)_buildVersion;
- (void)_webViewCommonInit:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)setDetectsPhoneNumbers:(BOOL)arg1;
- (BOOL)detectsPhoneNumbers;
- (void)setDataDetectorTypes:(NSUInteger)arg1;
- (NSUInteger)dataDetectorTypes;
- (void)setScalesPageToFit:(BOOL)arg1;
- (BOOL)scalesPageToFit;
- (BOOL)isLoading;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)loadRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (id)request;
- (void)reload;
- (void)stopLoading;
- (void)goBack;
- (void)goForward;
- (void)setScale:(float)arg1;
- (float)scale;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)_updateCheckeredPattern;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)_frameOrBoundsChanged;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateOpaqueAndBackgroundColor;
- (void)setOpaque:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)willStartGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)didFinishGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)scrollerWillStartDragging:(id)arg1;
- (void)scrollerDidEndDragging:(id)arg1 willSmoothScroll:(BOOL)arg2;
- (void)scrollerDidEndSmoothScrolling:(id)arg1;
- (void)_reportError:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (void)_updateRequest;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 frame:(id)arg2 requestGeolocationPermissionForSecurityOrigin:(id)arg3 shouldClearCache:(BOOL)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)saveGeolocation:(id)arg1;
- (id)_documentView;
- (id)_scroller;
- (void)_setDrawsCheckeredPattern:(BOOL)arg1;
- (void)_setWebSelectionEnabled:(BOOL)arg1;
- (void)_setDrawInWebThread:(BOOL)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;

@end
