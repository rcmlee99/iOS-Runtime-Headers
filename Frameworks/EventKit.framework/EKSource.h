/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSSet, NSString;

@interface EKSource : EKObject  {
}

@property(readonly) NSString * sourceIdentifier;
@property(readonly) int sourceType;
@property(readonly) NSString * title;
@property(readonly) NSSet * calendars;


- (BOOL)remove:(id*)arg1;
- (id)description;
- (id)init;
- (id)sourceIdentifier;
- (id)externalID;
- (id)constraints;
- (int)sourceType;
- (id)title;
- (BOOL)isEnabled;
- (int)displayOrderForNewCalendar;
- (void)setDefaultAlarmOffset:(id)arg1;
- (id)defaultAlarmOffset;
- (BOOL)isFacebookSource;
- (id)_persistentItem;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (id)calendars;
- (id)allCalendars;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)commit:(id*)arg1;

@end