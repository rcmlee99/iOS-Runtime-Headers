/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKOverlayViewInternal;



@interface MKOverlayView : UIView 
{
    MKOverlayViewInternal *_internal;
}

@property(readonly) NSArray *annotations;
@property(copy) NSArray *selectedAnnotations;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSUInteger)mapType;
- (void)setMapType:(NSUInteger)arg1;
- (id)searchResultToSelect;
- (void)setSearchResultToSelect:(id)arg1;
- (id)calloutView;
- (id)_bubble;
- (void)_removeBubbleWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_removeBubbleWithAnimation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })_centerLongLat;
- (struct CGSize { float x1; float x2; })_longLatSpan;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (id)calloutAnnotationView;
- (void)setBubbleAnnotationView:(id)arg1;
- (id)bubblePin;
- (void)_loadMetaDataForAnnotationView:(id)arg1 throttled:(BOOL)arg2;
- (void)_loadMetaDataForSearchResult:(id)arg1;
- (void)_loadMetaDataForSearchResults:(id)arg1;
- (struct CGPoint { float x1; float x2; })_bubbleAnchorPoint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { float x1; float x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 userInitiated:(BOOL)arg4;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 userInitiated:(BOOL)arg5;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1;
- (void)_deselectAnnotationView;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)resetBubble;
- (void)_searchResultNameDidChange:(id)arg1;
- (void)updateCountdowns;
- (id)_pinForSearchResult:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pinAndBubbleRectForSearchResult:(id)arg1;
- (void)selectPendingSearchResultAnimated:(BOOL)arg1 scrollToFit:(BOOL)arg2;
- (void)_resetAnnotationViewPerspective;
- (void)_updateAnnotationViewPerspective;
- (void)_scrollToBubble;
- (void)showBubbleAfterScroll;
- (void)cancelBubbleMouseTracking;
- (id)selectedSearchResult;
- (void)_setLevelView:(id)arg1;
- (void)_updateGeocodeForAnnotationView:(id)arg1 bubble:(id)arg2 animated:(BOOL)arg3;
- (void)searchResultReverseGeocoded:(id)arg1;
- (void)panoramaInfoReturnedForObject:(id)arg1;
- (void)panoramaInfoReturnedForObjects:(id)arg1;
- (BOOL)didAddUserLocationView;
- (void)setDidAddUserLocationView:(BOOL)arg1;
- (id)userLocation;
- (void)resetUserLocation;
- (void)_userLocationInView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 accuracy:(float*)arg4 location:(id)arg5;
- (BOOL)_userLocationFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 accuracy:(float*)arg4 location:(id)arg5;
- (void)_userLocationInView:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 center:(struct CGPoint { float x1; float x2; }*)arg3 accuracy:(float*)arg4;
- (NSInteger)userLocationViewUpdateMode;
- (void)setUserLocationViewUpdateMode:(NSInteger)arg1;
- (void)restoreUserLocationViewUpdateMode;
- (struct { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (BOOL)freezeUserLocationView;
- (void)updateUserLocationView;
- (void)_updateAnnotationView:(id)arg1;
- (id)annotationViews;
- (id)annotationViewsWithoutClass:(Class)arg1;
- (void)_updateTransitCalloutsDuringAnimation:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (BOOL)_pinPositionAvailableAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })availablePinLongLatFromCenterLongLat:(struct CGPoint { float x1; float x2; })arg1 withLevelView:(id)arg2;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (BOOL)checkHandlingDragsFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)annotationViewForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)searchResultForPinAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)handleFirstTouchBegan:(id)arg1 event:(id)arg2 windowPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)handleLastTouchEnded:(id)arg1 event:(id)arg2 windowPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_dropPin;
- (void)pinDidLift:(id)arg1;
- (void)clearSearchResultPinsExcluding:(id)arg1;
- (void)clearSearchResultPins;
- (void)addSearchResults:(id)arg1 selectSearchResult:(id)arg2;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (id)searchResultPins;
- (void)setSelectedSearchResult:(id)arg1 animate:(BOOL)arg2 userInitiated:(BOOL)arg3;
- (void)setSelectedSearchResult:(id)arg1;
- (struct CGSize { float x1; float x2; })accessoryPadding;
- (void)replaceSearchResult:(id)arg1 withSearchResult:(id)arg2;
- (BOOL)hasDroppingPins;
- (BOOL)hasPendingAnimations;
- (void)removeResults:(id)arg1;
- (id)_viewForUserLocationAnnotation:(id)arg1;
- (id)_viewForInternalAnnotation:(id)arg1;
- (id)userLocationView;
- (void)setUserLocationView:(id)arg1;
- (void)_dropPinsIfNeeded:(id)arg1 animated:(BOOL)arg2;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (id)_addViewForAnnotation:(id)arg1;
- (void)_notifyAddedAnnotationViews:(id)arg1 animated:(BOOL)arg2;
- (void)_prepareAnnotationView:(id)arg1 forAnnotationUse:(id)arg2 configureCallout:(BOOL)arg3;
- (void)addAnnotation:(id)arg1;
- (id)addAnnotation:(id)arg1 createView:(BOOL)arg2;
- (void)addAnnotations:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1 animated:(BOOL)arg2;
- (void)addSubview:(id)arg1;
- (BOOL)showAddedAnnotationsAnimated:(BOOL)arg1;
- (BOOL)annotationDidHide:(id)arg1;
- (BOOL)annotationWillShow:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (id)annotations;
- (id)viewForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedAnnotations:(id)arg1;
- (id)selectedAnnotations;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (BOOL)isAnimationsEnabled;
- (void)_setShowingTransitCallouts:(BOOL)arg1;
- (void)_setTransitCalloutAlphas:(float)arg1;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; })currentComparisonContext;
- (NSUInteger)indexForAnnotationView:(id)arg1;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (void)annotationViewsDidChangeZIndex:(id)arg1;

@end
