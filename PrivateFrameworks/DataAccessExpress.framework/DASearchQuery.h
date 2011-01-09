/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class <DASearchQueryConsumer>, NSString;



@interface DASearchQuery : NSObject 
{
    NSString *_searchString;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    NSInteger _timeLimit;
    struct __CFMachPort { } *_callbackPort;
    NSUInteger _searchID;
    BOOL _cancelled;
    <DASearchQueryConsumer> *_consumer;
}

@property <DASearchQueryConsumer> *consumer; /* unknown property attribute: V_consumer */
@property BOOL cancelled; /* unknown property attribute: V_cancelled */
@property NSInteger timeLimit; /* unknown property attribute: V_timeLimit */
@property _NSRange range; /* unknown property attribute: V_range */
@property(readonly) NSString *searchString; /* unknown property attribute: V_searchString */

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)sendResultsToConsumer:(id)arg1;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)handleBrokenPipe;
- (id)dictionaryRepresentation;
- (struct __CFMachPort { }*)callbackPort;
- (void)setCallbackPort:(struct __CFMachPort { }*)arg1;
- (NSUInteger)searchID;
- (void)setSearchID:(NSUInteger)arg1;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (NSInteger)timeLimit;
- (void)setTimeLimit:(NSInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (void)setRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)searchString;

@end
