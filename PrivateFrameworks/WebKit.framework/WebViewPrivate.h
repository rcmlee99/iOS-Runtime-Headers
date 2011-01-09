/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebNodeHighlight, NSString, WebPreferences, WebInspector, WAKWindow, <WebFormDelegate>, NSURL, NSMutableSet, <WebCaretChangeListener>;



@interface WebViewPrivate : NSObject 
{

  /* Error parsing encoded ivar type info: ^{Page={OwnPtr<WTF::HashSet<WTF::RefPtr<WebCore::SchedulePair>, WebCore::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > >="m_ptr"^{HashSet<WTF::RefPtr<WebCore::SchedulePair>,WebCore::SchedulePairHash,WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > >}}{OwnPtr<WebCore::Chrome>="m_ptr"^{Chrome}}{OwnPtr<WebCore::SelectionController>="m_ptr"^{SelectionController}}{OwnPtr<WebCore::FocusController>="m_ptr"^{FocusController}}{OwnPtr<WebCore::Settings>="m_ptr"^{Settings}}{OwnPtr<WebCore::ProgressTracker>="m_ptr"^{ProgressTracker}}{RefPtr<WebCore::BackForwardList>="m_ptr"^{BackForwardList}}{RefPtr<WebCore::Frame>="m_ptr"^{Frame}}{RefPtr<WebCore::HistoryItem>="m_ptr"^{HistoryItem}}{RefPtr<WebCore::PluginData>="m_ptr"^{PluginData}}^{EditorClient}i{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}BBBBBfB{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}{String="m_impl"{RefPtr<WebCore::StringImpl>="m_ptr"^{StringImpl}}}Bi{OwnPtr<WebCore::PageGroup>="m_ptr"^{PageGroup}}^{PageGroup}^{Debugger}IIdi{RefPtr<WebCore::SessionStorage>="m_ptr"^{SessionStorage}}} */
    struct Page { struct OwnPtr<WTF::HashSet<WTF::RefPtr<WebCore::SchedulePair>, WebCore::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > > { 
            struct HashSet<WTF::RefPtr<WebCore::SchedulePair>,WebCore::SchedulePairHash,WTF::HashTraits<WTF::RefPtr<WebCore::SchedulePair> > > {} *m_ptr; 
        } x1; struct OwnPtr<WebCore::Chrome> { 
            struct Chrome {} *m_ptr; 
        } x2; struct OwnPtr<WebCore::SelectionController> { 
            struct SelectionController {} *m_ptr; 
        } x3; struct OwnPtr<WebCore::FocusController> { 
            struct FocusController {} *m_ptr; 
        } x4; struct OwnPtr<WebCore::Settings> { 
            struct Settings {} *m_ptr; 
        } x5; struct OwnPtr<WebCore::ProgressTracker> { 
            struct ProgressTracker {} *m_ptr; 
        } x6; struct RefPtr<WebCore::BackForwardList> { 
            struct BackForwardList {} *m_ptr; 
        } x7; struct RefPtr<WebCore::Frame> { 
            struct Frame {} *m_ptr; 
        } x8; struct RefPtr<WebCore::HistoryItem> { 
            struct HistoryItem {} *m_ptr; 
        } x9; struct RefPtr<WebCore::PluginData> { 
            struct PluginData {} *m_ptr; 
        } x10; struct EditorClient {} *x11; NSInteger x12; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x13; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; float x19; void*x20; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x21; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x22; void*x23; NSInteger x24; struct OwnPtr<WebCore::PageGroup> { 
            struct PageGroup {} *m_ptr; 
        } x25; struct PageGroup {} *x26; struct Debugger {} *x27; NSUInteger x28; NSUInteger x29; double x30; NSInteger x31; struct RefPtr<WebCore::SessionStorage> { 
            struct SessionStorage {} *m_ptr; 
        } x32; } *page;

    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    <WebFormDelegate> *formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id scriptDebugDelegateForwarder;
    id formDelegateForwarder;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    BOOL allowsUndo;
    float zoomMultiplier;
    NSString *applicationNameForUserAgent;
    struct String { 
        struct RefPtr<WebCore::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } userAgent;
    BOOL userAgentOverridden;
    WebPreferences *preferences;
    BOOL useSiteSpecificSpoofing;
    NSURL *userStyleSheetLocation;
    WAKWindow *hostWindow;
    NSInteger programmaticFocusCount;
    struct _WebResourceDelegateImplementationCache { 
        int (*didCancelAuthenticationChallengeFunc)(); 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
    } resourceLoadDelegateImplementations;
    struct _WebFrameLoadDelegateImplementationCache { 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
    } frameLoadDelegateImplementations;
    void *observationInfo;
    BOOL closed;
    BOOL closing;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL editable;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL hoverFeedbackSuspended;
    BOOL usesPageCache;
    BOOL catchesDelegateExceptions;
    struct CGColor { } *backgroundColor;
    NSString *mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    NSInteger spellCheckerDocumentTag;
    BOOL smartInsertDeleteEnabled;
    BOOL selectTrailingWhitespaceEnabled;
    BOOL isStopping;
    BOOL usesLoaderCache;
    BOOL shouldCacheFileURLs;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    BOOL allowsMessaging;
    NSMutableSet *_caretChangeListeners;
    <WebCaretChangeListener> *_caretChangeListener;
    struct CGSize { 
        float width; 
        float height; 
    } fixedLayoutSize;
    BOOL mainViewIsScrollingOrZooming;
    struct HashMap<long unsigned int,WTF::RetainPtr<objc_object*>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<WTF::RetainPtr<objc_object*> > > { 
        struct HashTable<long unsigned int,std::pair<long unsigned int, WTF::RetainPtr<objc_object*> >,WTF::PairFirstExtractor<std::pair<long unsigned int, WTF::RetainPtr<objc_object*> > >,WTF::IntHash<long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long unsigned int>, WTF::HashTraits<WTF::RetainPtr<objc_object*> > >,WTF::HashTraits<long unsigned int> > { 
            struct pair<long unsigned int,WTF::RetainPtr<objc_object*> > {} *m_table; 
            NSInteger m_tableSize; 
            NSInteger m_tableSizeMask; 
            NSInteger m_keyCount; 
            NSInteger m_deletedCount; 
        } m_impl; 
    } identifierMap;
    BOOL _keyboardUIModeAccessed;
    NSInteger _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL useDocumentViews;
    BOOL needsOneShotDrawingSynchronization;
    struct __CFRunLoopObserver { } *viewUpdateRunLoopObserver;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)_clearViewUpdateRunLoopObserver;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
