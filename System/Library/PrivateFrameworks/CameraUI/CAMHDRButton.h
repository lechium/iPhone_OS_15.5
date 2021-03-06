//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSArray, NSString, UIImageView;

@interface CAMHDRButton <CAMAccessibilityHUDImageProvider>
{
    _Bool _allowsAutomaticHDR;	// 8 = 0x8
    _Bool _allowsHDROn;	// 9 = 0x9
    UIImageView *__glyphView;	// 16 = 0x10
    NSArray *__allowedModes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000172bbb
@property(copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes; // @synthesize _allowedModes=__allowedModes;
@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool allowsHDROn; // @synthesize allowsHDROn=_allowsHDROn;
@property(nonatomic) _Bool allowsAutomaticHDR; // @synthesize allowsAutomaticHDR=_allowsAutomaticHDR;
- (id)imageForAccessibilityHUD;	// IMP=0x0000000000172ba1
- (void)reloadData;	// IMP=0x00000000000251ff
- (_Bool)shouldAllowExpansion;	// IMP=0x0000000000172b52
- (double)padHeaderViewContentInsetLeft;	// IMP=0x0000000000172b44
- (void)prepareHeaderViewForExpanding:(_Bool)arg1;	// IMP=0x0000000000172b32
- (void)_updateCurrentGlyphImage;	// IMP=0x00000000000253ac
- (id)_currentGlyphImageForAccessibilityHUD:(_Bool)arg1;	// IMP=0x0000000000024e8c
- (id)headerView;	// IMP=0x0000000000025386
- (id)titleForMenuItemAtIndex:(long long)arg1;	// IMP=0x000000000002531c
- (long long)numberOfMenuItems;	// IMP=0x00000000000252d8
- (unsigned long long)indexForMode:(long long)arg1;	// IMP=0x0000000000025483
- (long long)modeForIndex:(long long)arg1;	// IMP=0x0000000000025057
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 needsReloadData:(_Bool)arg2;	// IMP=0x0000000000172add
- (void)_updateAllowedModes;	// IMP=0x00000000000250ff
- (void)setAllowsAutomaticHDR:(_Bool)arg1 needsReloadData:(_Bool)arg2;	// IMP=0x0000000000172a71
@property(nonatomic) long long HDRMode;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000172a0b
- (id)initWithLayoutStyle:(long long)arg1;	// IMP=0x0000000000024d85
- (void)_commonCAMHDRButtonInitialization;	// IMP=0x0000000000024de4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

