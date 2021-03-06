//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXInlineVideoStabilizationSettings
{
    _Bool _useMediaAnalysisRecipe;	// 8 = 0x8
    _Bool _localCacheForMediaAnalysisRecipes;	// 9 = 0x9
    _Bool _crossfadeEnabled;	// 10 = 0xa
    _Bool _timeRangeEnabled;	// 11 = 0xb
    _Bool _gyroStabilizationEnabled;	// 12 = 0xc
    _Bool _pixelStabilizationEnabled;	// 13 = 0xd
    _Bool _showDiagnosticUI;	// 14 = 0xe
    double _allowedCropFraction;	// 16 = 0x10
}

+ (id)transientProperties;	// IMP=0x0000000000309e53
+ (id)sharedInstance;	// IMP=0x0000000000309e23
+ (id)settingsControllerModule;	// IMP=0x000000000038d85d
@property(nonatomic) _Bool showDiagnosticUI; // @synthesize showDiagnosticUI=_showDiagnosticUI;
@property(nonatomic) _Bool pixelStabilizationEnabled; // @synthesize pixelStabilizationEnabled=_pixelStabilizationEnabled;
@property(nonatomic) _Bool gyroStabilizationEnabled; // @synthesize gyroStabilizationEnabled=_gyroStabilizationEnabled;
@property(nonatomic) _Bool timeRangeEnabled; // @synthesize timeRangeEnabled=_timeRangeEnabled;
@property(nonatomic) _Bool crossfadeEnabled; // @synthesize crossfadeEnabled=_crossfadeEnabled;
@property(nonatomic) double allowedCropFraction; // @synthesize allowedCropFraction=_allowedCropFraction;
@property(nonatomic) _Bool localCacheForMediaAnalysisRecipes; // @synthesize localCacheForMediaAnalysisRecipes=_localCacheForMediaAnalysisRecipes;
@property(nonatomic) _Bool useMediaAnalysisRecipe; // @synthesize useMediaAnalysisRecipe=_useMediaAnalysisRecipe;
@property(readonly, nonatomic) unsigned long long allowedAnalysisTypes;
- (void)setDefaultValues;	// IMP=0x0000000000309c0f
- (id)parentSettings;	// IMP=0x0000000000309bf6

@end

