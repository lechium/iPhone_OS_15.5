//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNKForegroundApp, MISSING_TYPE, NSUUID;

@interface CNKConversationControlsManager : NSObject
{
    MISSING_TYPE *call;	// 8 = 0x8
    MISSING_TYPE *initiallyActiveParticipantIdentifiers;	// 16 = 0x10
    MISSING_TYPE *conversationController;	// 24 = 0x18
    MISSING_TYPE *noticeCoordinator;	// 32 = 0x20
    MISSING_TYPE *activeNoticeCancellable;	// 40 = 0x28
    MISSING_TYPE *countdownController;	// 48 = 0x30
    MISSING_TYPE *systemConversationControlsDelegate;	// 56 = 0x38
    MISSING_TYPE *systemDetailsViewControllerDelegate;	// 72 = 0x48
    MISSING_TYPE *inCallConversationControlsDelegate;	// 88 = 0x58
    MISSING_TYPE *inCallDetailsViewControllerDelegate;	// 104 = 0x68
    MISSING_TYPE *audioRoutingDelegate;	// 120 = 0x78
    MISSING_TYPE *approvalDelegate;	// 128 = 0x80
    MISSING_TYPE *_shouldOpenMessages;	// 0 = 0x0
    MISSING_TYPE *_shouldEnableStartingStagedActivity;	// 0 = 0x0
    MISSING_TYPE *_audioRoute;	// 0 = 0x0
    MISSING_TYPE *_bluetoothAudioFormat;	// 0 = 0x0
    MISSING_TYPE *_localAudioEnabled;	// 0 = 0x0
    MISSING_TYPE *_localVideoButtonState;	// 0 = 0x0
    MISSING_TYPE *_shareMenuButtonState;	// 0 = 0x0
    MISSING_TYPE *_foregroundApp;	// 0 = 0x0
    MISSING_TYPE *_ephemeralAlert;	// 0 = 0x0
    MISSING_TYPE *shouldShowDelayedLMIBanner;	// 2923928 = 0x2c9d98
    MISSING_TYPE *isWaitingOnFirstRemoteFrame;	// 0 = 0x0
    MISSING_TYPE *applicationState;	// 0 = 0x0
    MISSING_TYPE *_appLaunchButtonType;	// 0 = 0x0
    MISSING_TYPE *screenShareCountdownTimer;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000e1eb1
- (id)init;	// IMP=0x00000000000e2c17
- (void)dealloc;	// IMP=0x00000000000e1e94
- (id)initWithActiveCall:(id)arg1;	// IMP=0x00000000000e077a
@property(nonatomic) unsigned long long applicationState; // @synthesize applicationState;
@property(nonatomic, retain) CNKForegroundApp *foregroundApp;
@property(nonatomic, readonly) NSUUID *callUUID;

@end

