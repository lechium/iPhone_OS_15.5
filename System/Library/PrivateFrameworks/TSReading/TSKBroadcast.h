//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSKBroadcast : NSObject
{
}

+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;	// IMP=0x00000000000a3e13
+ (void)syncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;	// IMP=0x00000000000a3d7b
+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;	// IMP=0x00000000000a3c32
+ (void)asyncNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;	// IMP=0x00000000000a3b9a
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeGroup:(id)arg3;	// IMP=0x00000000000a3a9f
+ (void)twoPhaseNotificationWithAccessController:(id)arg1 changeNotifier:(id)arg2 changeKind:(int)arg3 details:(id)arg4 changeSource:(id)arg5;	// IMP=0x00000000000a3a07

@end

