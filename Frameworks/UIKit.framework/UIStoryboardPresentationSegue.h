/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStoryboardPresentationSegue : UIStoryboardSegue <UIAdaptivePresentationControllerDelegate> {
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
    bool_animates;
    bool_useDefaultModalPresentationStyle;
    bool_useDefaultModalTransitionStyle;
}

@property bool animates;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property long long modalPresentationStyle;
@property long long modalTransitionStyle;
@property(readonly) Class superclass;
@property bool useDefaultModalPresentationStyle;
@property bool useDefaultModalTransitionStyle;

- (void)_prepare;
- (bool)animates;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)perform;
- (void)setAnimates:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setUseDefaultModalPresentationStyle:(bool)arg1;
- (void)setUseDefaultModalTransitionStyle:(bool)arg1;
- (bool)useDefaultModalPresentationStyle;
- (bool)useDefaultModalTransitionStyle;

@end
