/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFloatInAnimator : GKBubblePathAnimator {
    double _additionalDelay;
    double _delayIncrement;
    long long _focusBubbleType;
    bool_useWelcomeSpringValues;
}

@property double additionalDelay;
@property double delayIncrement;
@property long long focusBubbleType;
@property bool useWelcomeSpringValues;

- (double)additionalDelay;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)delayIncrement;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;
- (long long)focusBubbleType;
- (id)init;
- (void)setAdditionalDelay:(double)arg1;
- (void)setDelayIncrement:(double)arg1;
- (void)setFocusBubbleType:(long long)arg1;
- (void)setUseWelcomeSpringValues:(bool)arg1;
- (bool)useWelcomeSpringValues;

@end
