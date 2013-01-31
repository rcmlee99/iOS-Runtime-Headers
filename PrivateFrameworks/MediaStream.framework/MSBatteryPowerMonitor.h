/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSBatteryPowerMonitor : NSObject  {
    struct __CFRunLoopSource { } *_batteryRunLoopSource;
    struct IONotificationPort { } *_batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    double _currentLevel;
    BOOL _isExteralPowerConnected;
}

@property BOOL isExternalPowerConnected;
@property double currentLevel;

+ (id)defaultMonitor;

- (double)currentLevel;
- (void)setCurrentLevel:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)setExternalPowerConnected:(BOOL)arg1;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;
- (double)batteryPercentRemaining;
- (BOOL)isExternalPowerConnected;

@end