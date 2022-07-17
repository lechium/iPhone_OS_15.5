//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNEKCalendarNotificationReferenceProvider-Protocol.h>

@class NSString;

@interface CALNDefaultEKCalendarNotificationReferenceProvider : NSObject <CALNEKCalendarNotificationReferenceProvider>
{
}

+ (id)sharedInstance;	// IMP=0x0000000000052ca8
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 date:(id)arg3 inEventStore:(id)arg4;	// IMP=0x0000000000052dac
- (id)notificationReferenceForObjectID:(id)arg1 withType:(int)arg2 inEventStore:(id)arg3;	// IMP=0x0000000000052d2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
