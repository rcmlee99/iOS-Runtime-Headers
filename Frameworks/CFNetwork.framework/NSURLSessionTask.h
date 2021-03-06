/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSession, NSValue;

@interface NSURLSessionTask : NSObject <NSCopying> {
    NSDictionary *__additionalHeaders;
    unsigned long long __allowedProtocolTypes;
    NSDictionary *__backgroundTaskTimingData;
    NSString *__boundInterfaceIdentifier;
    int __cachePolicy;
    struct _CFURLCache { } *__cfCache;
    struct OpaqueCFHTTPCookieStorage { } *__cfCookies;
    struct _CFURLCredentialStorage { } *__cfCreds;
    struct _CFHSTSPolicy { } *__cfHSTS;
    NSValue *__connectionPropertyDuet;
    NSArray *__contentDispositionFallbackArray;
    int __cookieAcceptPolicy;
    struct _CFURLRequest { } *__currentCFURLRequest;
    long long __expectedWorkload;
    NSURL *__ledBellyFallbackURL;
    NSString *__ledBellyServiceIdentifier;
    NSDictionary *__legacySocketStreamProperties;
    int __networkServiceType;
    struct __PerformanceTiming { } *__performanceTiming;
    unsigned int __powerAssertion;
    float __priorityHint;
    long long __priorityValue;
    id __protocolForTask;
    NSDictionary *__proxySettings;
    long long __requestPriority;
    NSDictionary *__sslSettings;
    long long __suspensionThreshhold;
    double __timeWindowDelay;
    double __timeWindowDuration;
    double __timeoutInterval;
    NSString *__uniqueIdentifier;
    long long _countOfBytesExpectedToReceive;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    NSError *_error;
    NSURLRequest *_originalRequest;
    NSURLResponse *_response;
    NSURLSession *_session;
    double _startTime;
    long long _state;
    NSString *_taskDescription;
    unsigned long long _taskIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    bool__allowsCellular;
    bool__connectionIsCellular;
    bool__disallowCellular;
    bool__preventsIdleSystemSleep;
    bool__prohibitAuthUI;
    bool__shouldHandleCookies;
    bool__shouldPipelineHTTP;
    bool__shouldSkipPipelineProbe;
    bool__shouldSkipPreferredClientCertificateLookup;
    bool__shouldUsePipelineHeuristics;
    bool__strictContentLength;
}

@property(retain) NSDictionary * _additionalHeaders;
@property unsigned long long _allowedProtocolTypes;
@property bool _allowsCellular;
@property(copy) NSDictionary * _backgroundTaskTimingData;
@property(retain) NSString * _boundInterfaceIdentifier;
@property int _cachePolicy;
@property(retain) struct _CFURLCache { }* _cfCache;
@property(retain) struct OpaqueCFHTTPCookieStorage { }* _cfCookies;
@property(retain) struct _CFURLCredentialStorage { }* _cfCreds;
@property(retain) struct _CFHSTSPolicy { }* _cfHSTS;
@property(setter=_setConnectionIsCellular:) bool _connectionIsCellular;
@property(copy) NSValue * _connectionPropertyDuet;
@property(retain) NSArray * _contentDispositionFallbackArray;
@property int _cookieAcceptPolicy;
@property(retain) struct _CFURLRequest { }* _currentCFURLRequest;
@property bool _disallowCellular;
@property long long _expectedWorkload;
@property(copy) NSURL * _ledBellyFallbackURL;
@property(copy) NSString * _ledBellyServiceIdentifier;
@property(retain) NSDictionary * _legacySocketStreamProperties;
@property int _networkServiceType;
@property struct __PerformanceTiming { }* _performanceTiming;
@property unsigned int _powerAssertion;
@property bool _preventsIdleSystemSleep;
@property long long _priority;
@property float _priorityHint;
@property long long _priorityValue;
@property bool _prohibitAuthUI;
@property id _protocolForTask;
@property(retain) NSDictionary * _proxySettings;
@property long long _requestPriority;
@property bool _shouldHandleCookies;
@property bool _shouldPipelineHTTP;
@property bool _shouldSkipPipelineProbe;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property bool _shouldUsePipelineHeuristics;
@property(retain) NSDictionary * _sslSettings;
@property bool _strictContentLength;
@property long long _suspensionThreshhold;
@property double _timeWindowDelay;
@property double _timeWindowDuration;
@property double _timeoutInterval;
@property(copy) NSString * _uniqueIdentifier;
@property long long countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend;
@property long long countOfBytesReceived;
@property long long countOfBytesSent;
@property(copy,readonly) NSURLRequest * currentRequest;
@property(retain,readonly) NSURL * currentRequest_URL;
@property(copy) NSError * error;
@property(copy) NSURLRequest * originalRequest;
@property(retain,readonly) NSURL * originalRequest_mainDocumentURL;
@property float priority;
@property(copy) NSURLResponse * response;
@property(retain) NSURLSession * session;
@property double startTime;
@property long long state;
@property(copy) NSString * taskDescription;
@property unsigned long long taskIdentifier;
@property NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;
+ (id)taskForWrappedRequest:(id)arg1;

- (const struct XCookieStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCookieStorage;
- (const struct XCredentialStorage { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXCredentialStorage;
- (const struct XURLCache { int (**x1)(); struct __CFAllocator {} *x2; int x3; }*)_createXURLCache;
- (id)_additionalHeaders;
- (unsigned long long)_allowedProtocolTypes;
- (bool)_allowsCellular;
- (id)_backgroundTaskTimingData;
- (id)_boundInterfaceIdentifier;
- (int)_cachePolicy;
- (struct _CFURLCache { }*)_cfCache;
- (struct OpaqueCFHTTPCookieStorage { }*)_cfCookies;
- (struct _CFURLCredentialStorage { }*)_cfCreds;
- (struct _CFHSTSPolicy { }*)_cfHSTS;
- (bool)_connectionIsCellular;
- (id)_connectionPropertyDuet;
- (id)_contentDispositionFallbackArray;
- (int)_cookieAcceptPolicy;
- (struct _CFURLRequest { }*)_copyCurrentCFURLRequest;
- (struct _CFHSTSPolicy { }*)_copyHSTSPolicy;
- (struct __CFHTTPMessage { }*)_copyHTTPMessage;
- (struct _CFURLRequest { }*)_copyOriginalCFURLRequest;
- (struct __CFDictionary { }*)_copySocketStreamProperties0;
- (struct __CFDictionary { }*)_copySocketStreamProperties;
- (struct _CFURLRequest { }*)_currentCFURLRequest;
- (bool)_disallowCellular;
- (long long)_expectedWorkload;
- (void)_initializeTimingDataWithSessionConfiguration:(id)arg1;
- (id)_ledBellyFallbackURL;
- (id)_ledBellyServiceIdentifier;
- (id)_legacySocketStreamProperties;
- (int)_networkServiceType;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_releasePowerAsssertion;
- (struct __PerformanceTiming { }*)_performanceTiming;
- (unsigned int)_powerAssertion;
- (bool)_preventsIdleSystemSleep;
- (long long)_priority;
- (float)_priorityHint;
- (long long)_priorityValue;
- (bool)_prohibitAuthUI;
- (id)_protocolForTask;
- (id)_proxySettings;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (long long)_requestPriority;
- (void)_setConnectionIsCellular:(bool)arg1;
- (void)_setExplicitCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)_setExplicitStorageSession:(struct __CFURLStorageSession { }*)arg1;
- (void)_setSocketProperties:(struct __CFDictionary { }*)arg1 connectionProperties:(struct __CFDictionary { }*)arg2;
- (bool)_shouldHandleCookies;
- (bool)_shouldPipelineHTTP;
- (bool)_shouldSkipPipelineProbe;
- (bool)_shouldSkipPreferredClientCertificateLookup;
- (bool)_shouldUsePipelineHeuristics;
- (id)_sslSettings;
- (bool)_strictContentLength;
- (long long)_suspensionThreshhold;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (double)_timeWindowDelay;
- (double)_timeWindowDuration;
- (double)_timeoutInterval;
- (id)_timingData;
- (id)_uniqueIdentifier;
- (void)adjustConditionalConnectionProperties:(struct __CFDictionary { }*)arg1;
- (void)cancel;
- (void)cleanupAndBreakCycles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOfBytesExpectedToReceive;
- (long long)countOfBytesExpectedToSend;
- (long long)countOfBytesReceived;
- (long long)countOfBytesSent;
- (id)currentRequest;
- (id)currentRequest_URL;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4;
- (id)initWithTask:(id)arg1;
- (id)originalRequest;
- (id)originalRequest_mainDocumentURL;
- (float)priority;
- (id)response;
- (void)resume;
- (id)session;
- (void)setCountOfBytesExpectedToReceive:(long long)arg1;
- (void)setCountOfBytesExpectedToSend:(long long)arg1;
- (void)setCountOfBytesReceived:(long long)arg1;
- (void)setCountOfBytesSent:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setResponse:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTaskIdentifier:(unsigned long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)set_additionalHeaders:(id)arg1;
- (void)set_allowedProtocolTypes:(unsigned long long)arg1;
- (void)set_allowsCellular:(bool)arg1;
- (void)set_backgroundTaskTimingData:(id)arg1;
- (void)set_boundInterfaceIdentifier:(id)arg1;
- (void)set_cachePolicy:(int)arg1;
- (void)set_cfCache:(struct _CFURLCache { }*)arg1;
- (void)set_cfCookies:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)set_cfCreds:(struct _CFURLCredentialStorage { }*)arg1;
- (void)set_cfHSTS:(struct _CFHSTSPolicy { }*)arg1;
- (void)set_connectionPropertyDuet:(id)arg1;
- (void)set_contentDispositionFallbackArray:(id)arg1;
- (void)set_cookieAcceptPolicy:(int)arg1;
- (void)set_currentCFURLRequest:(struct _CFURLRequest { }*)arg1;
- (void)set_disallowCellular:(bool)arg1;
- (void)set_expectedWorkload:(long long)arg1;
- (void)set_ledBellyFallbackURL:(id)arg1;
- (void)set_ledBellyServiceIdentifier:(id)arg1;
- (void)set_legacySocketStreamProperties:(id)arg1;
- (void)set_networkServiceType:(int)arg1;
- (void)set_performanceTiming:(struct __PerformanceTiming { }*)arg1;
- (void)set_powerAssertion:(unsigned int)arg1;
- (void)set_preventsIdleSystemSleep:(bool)arg1;
- (void)set_priority:(long long)arg1;
- (void)set_priorityHint:(float)arg1;
- (void)set_priorityValue:(long long)arg1;
- (void)set_prohibitAuthUI:(bool)arg1;
- (void)set_protocolForTask:(id)arg1;
- (void)set_proxySettings:(id)arg1;
- (void)set_requestPriority:(long long)arg1;
- (void)set_shouldHandleCookies:(bool)arg1;
- (void)set_shouldPipelineHTTP:(bool)arg1;
- (void)set_shouldSkipPipelineProbe:(bool)arg1;
- (void)set_shouldSkipPreferredClientCertificateLookup:(bool)arg1;
- (void)set_shouldUsePipelineHeuristics:(bool)arg1;
- (void)set_sslSettings:(id)arg1;
- (void)set_strictContentLength:(bool)arg1;
- (void)set_suspensionThreshhold:(long long)arg1;
- (void)set_timeWindowDelay:(double)arg1;
- (void)set_timeWindowDuration:(double)arg1;
- (void)set_timeoutInterval:(double)arg1;
- (void)set_uniqueIdentifier:(id)arg1;
- (bool)shouldHandleCookiesAndSchemeIsAppropriate;
- (double)startTime;
- (long long)state;
- (void)suspend;
- (id)taskDescription;
- (unsigned long long)taskIdentifier;
- (void)updateCurrentRequest:(id)arg1;
- (id)workQueue;

@end
