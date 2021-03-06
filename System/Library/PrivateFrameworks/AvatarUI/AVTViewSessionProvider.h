//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTViewLayoutInfo-Protocol.h>
#import <AvatarUI/AVTViewSessionDelegate-Protocol.h>

@class AVTFaceTrackingManager, AVTUIEnvironment, AVTView, AVTViewSession, AVTViewUpdater, NSNotificationCenter, NSString, UIView;
@protocol AVTViewSessionProviderDelegate;

@interface AVTViewSessionProvider : NSObject <AVTViewSessionDelegate, AVTViewLayoutInfo>
{
    id <AVTViewSessionProviderDelegate> _delegate;	// 8 = 0x8
    AVTFaceTrackingManager *_faceTrackingManager;	// 16 = 0x10
    CDUnknownBlockType _viewCreator;	// 24 = 0x18
    UIView *_avtViewContainer;	// 32 = 0x20
    AVTView *_avtView;	// 40 = 0x28
    AVTViewUpdater *_avtViewUpdater;	// 48 = 0x30
    AVTViewSession *_activeSession;	// 56 = 0x38
    AVTViewSession *_pendingSession;	// 64 = 0x40
    AVTViewSession *_pausedTrackingSession;	// 72 = 0x48
    NSNotificationCenter *_notificationCenter;	// 80 = 0x50
    AVTUIEnvironment *_environment;	// 88 = 0x58
    struct CGSize _avtViewBackingSize;	// 96 = 0x60
}

+ (struct CGSize)backingSizeForEnvironment:(id)arg1;	// IMP=0x00000000000a7d5b
+ (CDUnknownBlockType)creatorForAVTRecordView;	// IMP=0x00000000000a7c94
+ (CDUnknownBlockType)creatorForAVTView;	// IMP=0x00000000000a7bcd
- (void).cxx_destruct;	// IMP=0x00000000000a8777
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) AVTViewSession *pausedTrackingSession; // @synthesize pausedTrackingSession=_pausedTrackingSession;
@property(retain, nonatomic) AVTViewSession *pendingSession; // @synthesize pendingSession=_pendingSession;
@property(retain, nonatomic) AVTViewSession *activeSession; // @synthesize activeSession=_activeSession;
@property(retain, nonatomic) AVTViewUpdater *avtViewUpdater; // @synthesize avtViewUpdater=_avtViewUpdater;
@property(retain, nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
@property(retain, nonatomic) UIView *avtViewContainer; // @synthesize avtViewContainer=_avtViewContainer;
@property(readonly, copy, nonatomic) CDUnknownBlockType viewCreator; // @synthesize viewCreator=_viewCreator;
@property(retain, nonatomic) AVTFaceTrackingManager *faceTrackingManager; // @synthesize faceTrackingManager=_faceTrackingManager;
@property(nonatomic) __weak id <AVTViewSessionProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize avtViewBackingSize; // @synthesize avtViewBackingSize=_avtViewBackingSize;
- (void)sessionDidTearDown:(id)arg1;	// IMP=0x00000000000a858b
- (void)recoverPrimaryStatus;	// IMP=0x00000000000a8577
- (void)handleProviderReleasesPrimaryStatusNotification:(id)arg1;	// IMP=0x00000000000a8502
- (void)didLosePrimaryStatusWithSessionToPause:(id)arg1;	// IMP=0x00000000000a84fc
- (void)handleProviderTakesPrimaryStatusNotification:(id)arg1;	// IMP=0x00000000000a8479
- (void)createContainerAndViewIfNeeded;	// IMP=0x00000000000a82e3
- (void)activateNextSession;	// IMP=0x00000000000a80e5
- (id)sessionWithDidBecomeActiveHandler:(CDUnknownBlockType)arg1 tearDownHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a7f1e
- (void)dealloc;	// IMP=0x00000000000a7ed9
- (id)initWithAVTViewBackingSize:(struct CGSize)arg1 viewCreator:(CDUnknownBlockType)arg2 environment:(id)arg3;	// IMP=0x00000000000a7d9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

