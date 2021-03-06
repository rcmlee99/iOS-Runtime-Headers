/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@interface MusicQueryDataSource : MPUCompletionQueryDataSource {
}

- (void)_defaultsDidChangeNotification:(id)arg1;
- (id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1;
- (bool)_updateQueryPredicatesAndOrdering;
- (void)dealloc;
- (id)entityCountFormat;
- (bool)entityIsNowPlayingAtIndex:(unsigned long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (bool)queryIsNowPlayingAtIndex:(unsigned long long)arg1;

@end
