/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIMovieChapterListView, MPVideoView, NSArray;



@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate>
{
    MPVideoView *_videoView;
    NSUInteger _currentMarker;
    NSArray *_chapterTimeMarkers;
    UIMovieChapterListView *_chapterListView;
    float _timeColumnWidth;
    unsigned int _haveThumbnails : 1;
    unsigned int _videoOutActive : 1;
}

@property float topPadding;
@property BOOL videoOutActive;
@property(retain) NSArray *chapterTimeMarkers; /* unknown property attribute: V_chapterTimeMarkers */
@property(retain) MPVideoView *videoView; /* unknown property attribute: V_videoView */
@property NSUInteger currentMarkerIndex; /* unknown property attribute: V_currentMarker */


- (id)init;
- (void)dealloc;
- (void)setCurrentMarker:(NSUInteger)arg1;
- (void)setVideoView:(id)arg1;
- (void)setTopPadding:(float)arg1;
- (void)setChapterTimeMarkers:(id)arg1;
- (void)setVideoOutActive:(BOOL)arg1;
- (float)topPadding;
- (BOOL)videoOutActive;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)videoView:(id)arg1 madeThumbnail:(id)arg2 forTime:(float)arg3;
- (void)_reloadThumbnails;
- (void)_sizeColumnsToFit;
- (id)chapterTimeMarkers;
- (id)videoView;
- (NSUInteger)currentMarkerIndex;
- (void)setCurrentMarkerIndex:(NSUInteger)arg1;

@end
