//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXCursorInteractionSettings
{
    _Bool _enableGridShadows;	// 8 = 0x8
    _Bool _enableGridLift;	// 9 = 0x9
    _Bool _enableCardShadows;	// 10 = 0xa
    _Bool _enableCardLift;	// 11 = 0xb
    _Bool _enableDetailsEffect;	// 12 = 0xc
    _Bool _enableCuratedLibraryEffects;	// 13 = 0xd
    double _animationDuration;	// 16 = 0x10
    double _dampingRatio;	// 24 = 0x18
    double _yearsPadding;	// 32 = 0x20
    double _monthsPadding;	// 40 = 0x28
    double _allPhotosAspectFitPadding;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000079217c
+ (id)settingsControllerModule;	// IMP=0x00000000007244d1
@property(nonatomic) _Bool enableCuratedLibraryEffects; // @synthesize enableCuratedLibraryEffects=_enableCuratedLibraryEffects;
@property(nonatomic) _Bool enableDetailsEffect; // @synthesize enableDetailsEffect=_enableDetailsEffect;
@property(nonatomic) _Bool enableCardLift; // @synthesize enableCardLift=_enableCardLift;
@property(nonatomic) _Bool enableCardShadows; // @synthesize enableCardShadows=_enableCardShadows;
@property(nonatomic) _Bool enableGridLift; // @synthesize enableGridLift=_enableGridLift;
@property(nonatomic) _Bool enableGridShadows; // @synthesize enableGridShadows=_enableGridShadows;
@property(nonatomic) double allPhotosAspectFitPadding; // @synthesize allPhotosAspectFitPadding=_allPhotosAspectFitPadding;
@property(nonatomic) double monthsPadding; // @synthesize monthsPadding=_monthsPadding;
@property(nonatomic) double yearsPadding; // @synthesize yearsPadding=_yearsPadding;
@property(nonatomic) double dampingRatio; // @synthesize dampingRatio=_dampingRatio;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (double)paddingForZoomLevel:(long long)arg1;	// IMP=0x0000000000791f2c
- (long long)interactionOptionsForZoomLevel:(long long)arg1 isAllPhotosAspectFit:(_Bool)arg2;	// IMP=0x0000000000791e54
- (long long)cardInteractionOptions;	// IMP=0x0000000000791e0e
- (long long)gridInteractionOptions;	// IMP=0x0000000000791dc8
- (void)setDefaultValues;	// IMP=0x0000000000791cd8
- (id)parentSettings;	// IMP=0x0000000000791cbf

@end

