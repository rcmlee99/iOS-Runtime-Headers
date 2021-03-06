/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSCache, NSDictionary, NSHashTable, NSMutableDictionary, NSOperationQueue, NSStringDrawingContext;

@interface MPUTextDrawingCache : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    } _allowedSize;
    unsigned long long _cacheCostScale;
    unsigned long long _cacheSize;
    NSMutableDictionary *_cachesForOtherAllowedSizes;
    double _displayScale;
    NSCache *_drawingsForCurrentAllowedSize;
    NSDictionary *_emphasizedTextAttributes;
    unsigned long long _invalidationNotificationCoalescingRequestsCount;
    NSHashTable *_invalidationObservers;
    unsigned long long _maximumNumberOfLines;
    NSOperationQueue *_preHeatingOperationQueue;
    } _referenceSizeForCostComputation;
    NSDictionary *_regularTextAttributes;
    NSStringDrawingContext *_stringDrawingContext;
    NSDictionary *_textAttributes;
    id _textEmphasizer;
    bool_opaque;
    bool_wasInvalidatedWithoutNotifyingObservers;
}

@property struct CGSize { double x1; double x2; } allowedSize;
@property double displayScale;
@property(copy) NSDictionary * emphasizedTextAttributes;
@property unsigned long long maximumNumberOfLines;
@property(getter=isOpaque) bool opaque;
@property(copy) NSDictionary * regularTextAttributes;
@property(copy) NSDictionary * textAttributes;
@property(copy) id textEmphasizer;

+ (id)_drawingForText:(id)arg1 fromCache:(id)arg2 usingStringDrawingContext:(id)arg3 allowedSize:(struct CGSize { double x1; double x2; })arg4 textAttributes:(id)arg5 opaque:(bool)arg6 displayScale:(double)arg7 textEmphasizer:(id)arg8 regularTextAttributes:(id)arg9 emphasizedTextAttributes:(id)arg10 cacheSize:(unsigned long long)arg11 cacheCostScale:(unsigned long long)arg12 referenceSizeForCostComputation:(struct CGSize { double x1; double x2; })arg13;

- (void).cxx_destruct;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)_drawingsForCurrentAllowedSizeWereInvalidated;
- (void)_ensureDrawingsForCurrentAllowedSizeCacheIsReady;
- (void)_invalidate;
- (id)_keyForAllowedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_notifyInvalidationObservers;
- (void)_updateMaximumNumberOfLines;
- (void)_updateReferenceSizeForCostComputation;
- (struct CGSize { double x1; double x2; })_validateAllowedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)addInvalidationObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })allowedSize;
- (void)beginCoalescingInvalidationNotifications;
- (void)dealloc;
- (double)displayScale;
- (id)drawingForText:(id)arg1;
- (id)emphasizedTextAttributes;
- (void)endCoalescingInvalidationNotifications;
- (id)init;
- (bool)isOpaque;
- (unsigned long long)maximumNumberOfLines;
- (void)preHeatForStrings:(id)arg1;
- (id)regularTextAttributes;
- (void)removeInvalidationObserver:(id)arg1;
- (void)setAllowedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setEmphasizedTextAttributes:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRegularTextAttributes:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextEmphasizer:(id)arg1;
- (id)textAttributes;
- (id)textEmphasizer;

@end
