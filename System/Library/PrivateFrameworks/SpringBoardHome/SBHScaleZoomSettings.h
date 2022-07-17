//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBFAnimationSettings;

@interface SBHScaleZoomSettings
{
    _Bool _crossfadeWithZoom;	// 17 = 0x11
    _Bool _fadesIconGrid;	// 18 = 0x12
    SBFAnimationSettings *_outerFolderFadeSettings;	// 24 = 0x18
    SBFAnimationSettings *_crossfadeSettings;	// 32 = 0x20
    SBFAnimationSettings *_iconGridFadeSettings;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x00000000000c8cff
- (void).cxx_destruct;	// IMP=0x00000000000c91a4
@property(retain, nonatomic) SBFAnimationSettings *iconGridFadeSettings; // @synthesize iconGridFadeSettings=_iconGridFadeSettings;
@property(nonatomic) _Bool fadesIconGrid; // @synthesize fadesIconGrid=_fadesIconGrid;
@property(retain, nonatomic) SBFAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property(nonatomic) _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
@property(retain, nonatomic) SBFAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (id)effectiveCrossfadeAnimationSettings;	// IMP=0x00000000000c90a9
- (void)setDefaultValues;	// IMP=0x00000000000c8ca5

@end
