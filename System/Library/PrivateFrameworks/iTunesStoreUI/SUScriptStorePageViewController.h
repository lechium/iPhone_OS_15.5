//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, SUScriptSegmentedControl;

@interface SUScriptStorePageViewController
{
    NSArray *_initialURLStrings;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000000094e10
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x0000000000094d0c
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x0000000000094c82
+ (_Bool)copyURLStrings:(id *)arg1 forValue:(id)arg2;	// IMP=0x00000000000900bb
- (void).cxx_destruct;	// IMP=0x000000000009503d
- (id)scriptAttributeKeys;	// IMP=0x0000000000094d89
- (id)attributeKeys;	// IMP=0x0000000000094d77
- (id)_storePageViewController;	// IMP=0x0000000000094bf5
- (void)_setValue:(id)arg1 forScriptPropertyKey:(id)arg2;	// IMP=0x0000000000094b44
- (id)_pathForWebArchiveWithIdentifier:(id)arg1 inDirectory:(id)arg2;	// IMP=0x0000000000094a6f
- (_Bool)_isSegmentedControlValid:(id)arg1;	// IMP=0x0000000000094903
- (id)_copyURLsFromURLStrings:(id)arg1;	// IMP=0x000000000009474c
- (void)_setURLs:(id)arg1;	// IMP=0x00000000000946d7
@property(readonly) long long indicatorStyleWhite;
@property(readonly) long long indicatorStyleGray;
@property(retain) NSString *userInfo;
@property(retain) id URLs;
@property(retain) NSNumber *timeoutInterval;
@property id showsVerticalScrollIndicator;
@property id showsHorizontalScrollIndicator;
@property _Bool showsBackgroundShadow;
@property id shouldShowFormAccessory;
@property _Bool shouldInvalidateForLowMemory;
@property _Bool shouldLoadProgressively;
@property(retain) SUScriptSegmentedControl *segmentedControl;
@property _Bool scrollingEnabled;
@property(retain) id placeholderBackgroundStyle;
@property id loadsWhenHidden;
@property(retain) id loadingTextShadowColor;
@property(retain) id loadingTextColor;
@property long long loadingIndicatorStyle;
@property id inputViewObeysDOMFocus;
@property _Bool flashesScrollIndicators;
@property _Bool doubleTapEnabled;
@property id alwaysDispatchesScrollEvents;
@property(readonly) id rootObject;
- (id)_className;	// IMP=0x0000000000091315
- (void)setScrollEdgeInsetsWithTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;	// IMP=0x000000000009121a
- (id)saveWebArchiveWithIdentifier:(id)arg1 toDirectory:(id)arg2;	// IMP=0x0000000000090d3f
- (void)reloadWithCallback:(id)arg1;	// IMP=0x0000000000090ad4
- (id)loadWebArchiveWithIdentifier:(id)arg1 fromDirectory:(id)arg2;	// IMP=0x0000000000090400
- (void)setNativeViewController:(id)arg1;	// IMP=0x000000000009038c
- (id)newNativeViewController;	// IMP=0x00000000000902c3
@property(readonly) NSArray *URLStrings;
- (void)applyURLStrings:(id)arg1 toViewController:(id)arg2;	// IMP=0x00000000000901a2
- (id)initWithURLStrings:(id)arg1;	// IMP=0x0000000000090041
- (id)init;	// IMP=0x000000000009002d

@end

