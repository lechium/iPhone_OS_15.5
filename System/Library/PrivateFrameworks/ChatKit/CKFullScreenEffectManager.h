//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/CKFullScreenEffectDelegate-Protocol.h>

@class CKFullScreenEffect, CKScheduledUpdater, NSMutableArray, NSString, NSTimer;
@protocol CKFullScreenEffectManagerDelegate;

@interface CKFullScreenEffectManager : NSObject <CKFullScreenEffectDelegate>
{
    CKFullScreenEffect *_currentEffect;	// 8 = 0x8
    NSObject<CKFullScreenEffectManagerDelegate> *_delegate;	// 16 = 0x10
    NSMutableArray *_effectQueue;	// 24 = 0x18
    NSTimer *_effectDurationTimer;	// 32 = 0x20
    CKScheduledUpdater *_triggerUpdater;	// 40 = 0x28
}

+ (double)idleDurationAfterEffectWithIdentifier:(id)arg1;	// IMP=0x0000000000115220
+ (double)delayBeforeEffectWithIdentifier:(id)arg1;	// IMP=0x00000000001151a1
+ (id)localizedMaskStringForEffectWithIdentifier:(id)arg1;	// IMP=0x00000000001133e1
- (void).cxx_destruct;	// IMP=0x0000000000115332
@property(retain, nonatomic) CKScheduledUpdater *triggerUpdater; // @synthesize triggerUpdater=_triggerUpdater;
@property(retain, nonatomic) NSTimer *effectDurationTimer; // @synthesize effectDurationTimer=_effectDurationTimer;
@property(retain, nonatomic) NSMutableArray *effectQueue; // @synthesize effectQueue=_effectQueue;
@property(nonatomic) __weak NSObject<CKFullScreenEffectManagerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKFullScreenEffect *currentEffect; // @synthesize currentEffect=_currentEffect;
- (void)endHoldingUpdatesForKey:(id)arg1;	// IMP=0x000000000011512f
- (void)beginHoldingUpdatesForKey:(id)arg1;	// IMP=0x00000000001150bd
- (void)stopFullscreenEffect;	// IMP=0x0000000000114f79
- (void)fullScreenEffectDidPrepareSoundEffect:(id)arg1;	// IMP=0x0000000000114e00
- (void)triggerNextEffect;	// IMP=0x0000000000114d04
- (void)startFullscreenEffectForChatItem:(id)arg1 language:(id)arg2;	// IMP=0x0000000000113e7f
- (id)effectForIdentifier:(id)arg1;	// IMP=0x0000000000113d9e
- (id)effectIdentifiers;	// IMP=0x0000000000113cea
- (id)localizedPickerTitleForEffectWithIdentifier:(id)arg1;	// IMP=0x0000000000113bd0
- (id)localizedDisplayNameForEffectWithIdentifier:(id)arg1;	// IMP=0x0000000000113b07
- (id)fullscreenEffectMap;	// IMP=0x00000000001137d0
- (void)didReceiveMemoryWarning;	// IMP=0x00000000001137b3
- (void)dealloc;	// IMP=0x0000000000113723
- (id)init;	// IMP=0x0000000000113647
- (_Bool)__im_ff_commSafetyUIEnabled;	// IMP=0x0000000000113396

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

