//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBRingerHUDViewControllerDelegate-Protocol.h>

@class NSString, SBHUDController, SBSoundController;

@interface SBRingerControl : NSObject <SBRingerHUDViewControllerDelegate>
{
    _Bool _ringerMuted;	// 8 = 0x8
    float _volume;	// 12 = 0xc
    SBHUDController *_HUDController;	// 16 = 0x10
    SBSoundController *_soundController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000349a12
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) SBSoundController *soundController; // @synthesize soundController=_soundController;
@property(readonly, nonatomic) SBHUDController *HUDController; // @synthesize HUDController=_HUDController;
- (void)ringerHUDViewControllerWantsToBeDismissed:(id)arg1;	// IMP=0x0000000000349980
- (id)existingRingerHUDViewController;	// IMP=0x0000000000349921
- (void)setVolume:(float)arg1 forKeyPress:(_Bool)arg2;	// IMP=0x0000000000349817
- (void)toggleRingerMute;	// IMP=0x000000000034976c
- (void)hideRingerHUDIfVisible;	// IMP=0x00000000003496c7
- (void)buttonReleased;	// IMP=0x000000000034968a
- (void)nudgeUp:(_Bool)arg1;	// IMP=0x000000000034963e
- (void)activateRingerHUD:(int)arg1 withInitialVolume:(float)arg2 fromSource:(unsigned long long)arg3;	// IMP=0x00000000003491bf
- (void)activateRingerHUDFromMuteSwitch:(int)arg1;	// IMP=0x00000000003491a0
- (void)activateRingerHUDForVolumeChangeWithInitialVolume:(float)arg1;	// IMP=0x0000000000349156
- (_Bool)lastSavedRingerMutedState;	// IMP=0x00000000003490e1
@property(nonatomic, getter=isRingerMuted) _Bool ringerMuted;
- (id)initWithHUDController:(id)arg1 soundController:(id)arg2;	// IMP=0x0000000000348dbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

