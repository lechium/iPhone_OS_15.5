//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXDiagnosticsSettings
{
    _Bool _enableContextualGesture;	// 8 = 0x8
    _Bool _enableInternalSettingsService;	// 9 = 0x9
    _Bool _enableGenericService;	// 10 = 0xa
    _Bool _enableGraphService;	// 11 = 0xb
    _Bool _enableTitleFontService;	// 12 = 0xc
    _Bool _enableCompleteMyMomentService;	// 13 = 0xd
    _Bool _enableDebugDictionaryService;	// 14 = 0xe
    _Bool _enableScrollService;	// 15 = 0xf
    double _scrollSpeed;	// 16 = 0x10
    long long _scrollIterations;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000dcaec
+ (id)settingsControllerModule;	// IMP=0x00000000004d462b
@property(nonatomic) long long scrollIterations; // @synthesize scrollIterations=_scrollIterations;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) _Bool enableScrollService; // @synthesize enableScrollService=_enableScrollService;
@property(nonatomic) _Bool enableDebugDictionaryService; // @synthesize enableDebugDictionaryService=_enableDebugDictionaryService;
@property(nonatomic) _Bool enableCompleteMyMomentService; // @synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService;
@property(nonatomic) _Bool enableTitleFontService; // @synthesize enableTitleFontService=_enableTitleFontService;
@property(nonatomic) _Bool enableGraphService; // @synthesize enableGraphService=_enableGraphService;
@property(nonatomic) _Bool enableGenericService; // @synthesize enableGenericService=_enableGenericService;
@property(nonatomic) _Bool enableInternalSettingsService; // @synthesize enableInternalSettingsService=_enableInternalSettingsService;
@property(nonatomic) _Bool enableContextualGesture; // @synthesize enableContextualGesture=_enableContextualGesture;
- (void)setDefaultValues;	// IMP=0x00000000000dc8bf
- (id)parentSettings;	// IMP=0x00000000000dc8a6

@end

