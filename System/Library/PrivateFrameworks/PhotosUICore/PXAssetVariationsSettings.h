//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXAssetVariationsSettings
{
    _Bool _addSimulatedProgressComponent;	// 8 = 0x8
    _Bool _simulateLoadingFailure;	// 9 = 0x9
    _Bool _simulateSavingFailure;	// 10 = 0xa
    _Bool _useNeutrinoRendering;	// 11 = 0xb
    _Bool _showStatusInDisclosureLabel;	// 12 = 0xc
    _Bool _showLoopBadges;	// 13 = 0xd
    _Bool _invalidateCachedPreviews;	// 14 = 0xe
    _Bool _useLiveRenderedPreviews;	// 15 = 0xf
    double _selectionDetailsDismissalDelay;	// 16 = 0x10
    long long _suggestionsScheme;	// 24 = 0x18
    long long _layoutStyle;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000418463
+ (id)settingsControllerModule;	// IMP=0x0000000000359d66
@property(nonatomic) _Bool useLiveRenderedPreviews; // @synthesize useLiveRenderedPreviews=_useLiveRenderedPreviews;
@property(nonatomic) _Bool invalidateCachedPreviews; // @synthesize invalidateCachedPreviews=_invalidateCachedPreviews;
@property(nonatomic) _Bool showLoopBadges; // @synthesize showLoopBadges=_showLoopBadges;
@property(nonatomic) _Bool showStatusInDisclosureLabel; // @synthesize showStatusInDisclosureLabel=_showStatusInDisclosureLabel;
@property(nonatomic) _Bool useNeutrinoRendering; // @synthesize useNeutrinoRendering=_useNeutrinoRendering;
@property(nonatomic) _Bool simulateSavingFailure; // @synthesize simulateSavingFailure=_simulateSavingFailure;
@property(nonatomic) _Bool simulateLoadingFailure; // @synthesize simulateLoadingFailure=_simulateLoadingFailure;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) _Bool addSimulatedProgressComponent; // @synthesize addSimulatedProgressComponent=_addSimulatedProgressComponent;
@property(nonatomic) long long suggestionsScheme; // @synthesize suggestionsScheme=_suggestionsScheme;
@property(nonatomic) double selectionDetailsDismissalDelay; // @synthesize selectionDetailsDismissalDelay=_selectionDetailsDismissalDelay;
- (void)setDefaultValues;	// IMP=0x000000000041821a
- (id)parentSettings;	// IMP=0x0000000000418201

@end

