//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNAnalyticsHandler-Protocol.h>

@class NSString;

@interface CALNCalAnalyticsHandler : NSObject <CALNAnalyticsHandler>
{
}

+ (id)sharedInstance;	// IMP=0x000000000000985e
- (void)recordNotificationResponse:(id)arg1;	// IMP=0x0000000000009997
- (void)recordPostedNotification:(id)arg1;	// IMP=0x00000000000098e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
