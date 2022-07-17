//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class CAMLivePhotoBloomView, NSString;

@interface CAMLivePhotoButton <CAMAccessibilityHUDImageProvider>
{
    _Bool _allowsAutomaticMode;	// 8 = 0x8
    CAMLivePhotoBloomView *__bloomView;	// 16 = 0x10
}

+ (double)enablingAnimationDuration;	// IMP=0x00000000000f21a7
- (void).cxx_destruct;	// IMP=0x00000000000f228e
@property(readonly, nonatomic) CAMLivePhotoBloomView *_bloomView; // @synthesize _bloomView=__bloomView;
@property(nonatomic) _Bool allowsAutomaticMode; // @synthesize allowsAutomaticMode=_allowsAutomaticMode;
- (id)imageForAccessibilityHUD;	// IMP=0x00000000000f21b5
- (void)interruptEnablingAnimation;	// IMP=0x00000000000f216a
- (void)performEnablingAnimation;	// IMP=0x00000000000f210c
- (void)finishExpansionAnimated:(_Bool)arg1;	// IMP=0x00000000000f20cb
- (void)reloadData;	// IMP=0x00000000000f201e
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;	// IMP=0x00000000000f200c
- (void)_updateBaseImage;	// IMP=0x00000000000f1f41
- (id)_currentBaseImage;	// IMP=0x00000000000f1e39
- (id)headerView;	// IMP=0x00000000000f1e27
- (id)titleForMenuItemAtIndex:(long long)arg1;	// IMP=0x00000000000f1dbd
- (long long)numberOfMenuItems;	// IMP=0x00000000000f1d79
- (long long)indexForMode:(long long)arg1;	// IMP=0x00000000000f1cfe
- (long long)modeForIndex:(long long)arg1;	// IMP=0x00000000000f1c6a
- (id)_availableModes;	// IMP=0x00000000000f1c40
- (void)setAllowsAutomaticMode:(_Bool)arg1 needsReloadData:(_Bool)arg2;	// IMP=0x00000000000f1b79
- (void)setSelectedIndex:(long long)arg1;	// IMP=0x00000000000f1b07
@property(nonatomic) long long livePhotoMode;
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x00000000000f1a26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
