//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNSuggestionsServiceLogger-Protocol.h>

@class NSString;

@interface CALNEKSuggestionsServiceLogger : NSObject <CALNSuggestionsServiceLogger>
{
}

+ (id)sharedInstance;	// IMP=0x000000000002c542
- (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg1;	// IMP=0x000000000002c5c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

