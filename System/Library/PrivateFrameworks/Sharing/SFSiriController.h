//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFSiriControllerInterface-Protocol.h>

@class NSString;

@interface SFSiriController : NSObject <SFSiriControllerInterface>
{
}

+ (_Bool)shouldPromptForAnnounceNotificationsForProductID:(unsigned int)arg1 isUpsellFlow:(_Bool)arg2;	// IMP=0x00000000000169c8
+ (_Bool)shouldPromptForAnnounceCallsForProductID:(unsigned int)arg1 supportsInEarDetection:(_Bool)arg2 isUpsellFlow:(_Bool)arg3;	// IMP=0x0000000000016733
+ (_Bool)shouldPromptForAnnounceMessagesForProductID:(unsigned int)arg1 isUpsellFlow:(_Bool)arg2;	// IMP=0x0000000000016524
+ (void)setAnnounceCallsState:(long long)arg1;	// IMP=0x00000000000163f0
+ (long long)announceCallsState;	// IMP=0x0000000000016361
+ (void)setHasUserSeenAnnounceNotificationsOptOutScreen:(_Bool)arg1;	// IMP=0x0000000000016348
+ (_Bool)hasUserSeenAnnounceNotificationsOptOutScreen;	// IMP=0x000000000001632f
+ (_Bool)isAnnounceSupported;	// IMP=0x00000000000162a9
+ (_Bool)isAnnounceEnabledForHeadphones;	// IMP=0x000000000001622c
+ (_Bool)isAnnounceMessagesSupported;	// IMP=0x00000000000161a6
+ (void)setAnnounceMessagesEnabled:(_Bool)arg1;	// IMP=0x00000000000160c9
+ (_Bool)isAnnounceMessagesEnabled;	// IMP=0x000000000001604d
+ (void)setHasUserSeenAnnounceCallsOptOutScreen:(_Bool)arg1;	// IMP=0x0000000000016029
+ (_Bool)hasUserSeenAnnounceCallsOptOutScreen;	// IMP=0x0000000000016008
+ (void)setHasUserSeenAnnounceMessagesOptOutScreen:(_Bool)arg1;	// IMP=0x0000000000015fe4
+ (_Bool)hasUserSeenAnnounceMessagesOptOutScreen;	// IMP=0x0000000000015fc3
+ (_Bool)isCurrentLocaleSupported;	// IMP=0x0000000000015f76
+ (_Bool)isSiriAllowedWhileLocked;	// IMP=0x0000000000015f2a
+ (_Bool)isHeySiriEnabled;	// IMP=0x0000000000015ee4
+ (_Bool)isSiriEnabled;	// IMP=0x0000000000015edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

