//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VMVoicemailManager;

@interface VMServiceClient : NSObject
{
    VMVoicemailManager *_voicemailManager;	// 8 = 0x8
}

+ (id)sharedClient;	// IMP=0x00000000000077d8
- (void).cxx_destruct;	// IMP=0x00000000000078b8
@property(retain, nonatomic) VMVoicemailManager *voicemailManager; // @synthesize voicemailManager=_voicemailManager;
- (void)handleOnlineStatusChangedNotification:(id)arg1;	// IMP=0x0000000000007897
- (void)handleSubscriptionStatusChangedNotification:(id)arg1;	// IMP=0x0000000000007891
- (void)handleVoicemailsChangedNotification:(id)arg1;	// IMP=0x000000000000788b
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;	// IMP=0x0000000000007885
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000787f
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;	// IMP=0x0000000000007879
- (_Bool)sharedServiceIsSubscribed;	// IMP=0x0000000000007835
- (id)sharedAccount;	// IMP=0x00000000000077e0
- (void)dealloc;	// IMP=0x0000000000007763
- (id)init;	// IMP=0x000000000000761d

@end
