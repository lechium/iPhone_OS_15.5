//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ESADelegate : NSObject
{
}

- (int)alertType;	// IMP=0x0020000000002db3
- (_Bool)isNotificationDisabled;	// IMP=0x0010000000002d9a
- (_Bool)isNotificationSnoozed;	// IMP=0x0010000000002d58
- (void)cancelAlert;	// IMP=0x0010000000002bb8
- (void)prompt:(int)arg1;	// IMP=0x0010000000002256
- (id)init;	// IMP=0x00100000000021f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
