//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding>
{
    NSMutableDictionary *_cachedListLayouts;	// 8 = 0x8
    unsigned long long _screenType;	// 16 = 0x10
    unsigned long long _layoutOptions;	// 24 = 0x18
}

+ (id)frameworkFallbackInstance;	// IMP=0x000000000005ec19
+ (unsigned long long)extendedFloatingDockCapacityIconCount;	// IMP=0x000000000005ec0e
+ (unsigned long long)defaultLayoutOptions;	// IMP=0x00000000000591d2
+ (unsigned long long)currentDeviceScreenType;	// IMP=0x00000000000591c8
- (void).cxx_destruct;	// IMP=0x000000000005f1e4
@property(readonly, nonatomic) unsigned long long layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) unsigned long long screenType; // @synthesize screenType=_screenType;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005f062
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005f012
- (id)succinctDescriptionBuilder;	// IMP=0x000000000005eff6
- (id)succinctDescription;	// IMP=0x000000000005efa6
@property(readonly, copy) NSString *description;
- (unsigned long long)layoutOptionsForIconLocation:(id)arg1;	// IMP=0x000000000005eedc
- (struct UIEdgeInsets)homeScreenSearchOverlayInsetsForScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2 forAppLibrary:(_Bool)arg3;	// IMP=0x000000000005ec6e
- (id)layoutForIconLocation:(id)arg1;	// IMP=0x000000000005eb60
- (void)configureRootFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;	// IMP=0x000000000005d9cc
- (void)configureSidebarConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 getBottomSearchOffset:(double *)arg4;	// IMP=0x000000000005d410
- (void)configureFolderIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 numberOfRows:(unsigned long long)arg3 layoutOptions:(unsigned long long)arg4;	// IMP=0x000000000005d1a0
- (void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;	// IMP=0x000000000005cff3
- (void)configureAppLibraryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;	// IMP=0x000000000005c678
- (void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3;	// IMP=0x000000000005c478
- (void)configureLabelConfigurations:(id)arg1 forScreenType:(unsigned long long)arg2;	// IMP=0x000000000005bf0f
- (void)configureSupportedIconGridSizeClasses:(unsigned long long *)arg1 forScreenType:(unsigned long long)arg2 iconLocation:(id)arg3 layoutOptions:(unsigned long long)arg4;	// IMP=0x000000000005be79
- (void)configureGridSizeClassSizes:(struct SBHIconGridSizeClassSizes *)arg1 forScreenType:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 iconLocation:(id)arg4 layoutOptions:(unsigned long long)arg5;	// IMP=0x000000000005bd6a
- (id)makeLayoutForIconLocation:(id)arg1;	// IMP=0x000000000005930f
- (id)initWithScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2;	// IMP=0x00000000000592c7
- (id)initWithLayoutOptions:(unsigned long long)arg1;	// IMP=0x000000000005927f
- (id)initWithScreenType:(unsigned long long)arg1;	// IMP=0x0000000000059237
- (id)init;	// IMP=0x00000000000591da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

