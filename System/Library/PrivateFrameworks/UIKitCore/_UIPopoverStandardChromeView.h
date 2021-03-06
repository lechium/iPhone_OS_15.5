//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView
{
    _Bool useShortMode;	// 120 = 0x78
    _Bool _debugMode;	// 121 = 0x79
    UIView *viewToMaskWhenContentExtendsOverArrow;	// 128 = 0x80
    unsigned long long _arrowDirection;	// 136 = 0x88
    double _arrowOffset;	// 144 = 0x90
    UIColor *_arrowBackgroundColor;	// 152 = 0x98
    UIColor *_popoverBackgroundColor;	// 160 = 0xa0
    long long _backgroundStyle;	// 168 = 0xa8
    UIColor *_contentBlendingColor;	// 176 = 0xb0
}

+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x00000000012c7d10
+ (Class)legacyChromeViewClass;	// IMP=0x00000000012c7cff
+ (Class)standardChromeViewClass;	// IMP=0x00000000012c7cb0
- (void).cxx_destruct;	// IMP=0x00000000012c8210
@property(readonly, nonatomic) UIColor *contentBlendingColor; // @synthesize contentBlendingColor=_contentBlendingColor;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) UIColor *popoverBackgroundColor; // @synthesize popoverBackgroundColor=_popoverBackgroundColor;
@property(copy, nonatomic) UIColor *arrowBackgroundColor; // @synthesize arrowBackgroundColor=_arrowBackgroundColor;
- (void)setArrowOffset:(double)arg1;	// IMP=0x00000000012c8187
- (double)arrowOffset;	// IMP=0x00000000012c8175
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x00000000012c8164
- (unsigned long long)arrowDirection;	// IMP=0x00000000012c8153
@property(nonatomic) __weak UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow;
@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugMode;
@property(nonatomic) _Bool useShortMode; // @synthesize useShortMode;
- (long long)_resolvedBackgroundStyle;	// IMP=0x00000000012c80db
- (struct CGRect)_contentViewFrame;	// IMP=0x00000000012c7ff0
- (struct UIEdgeInsets)safeAreaInsetsForContentView;	// IMP=0x00000000012c7ea0
- (_Bool)_shouldUseEqualContentInsetsOnAllSides;	// IMP=0x00000000012c7e7d
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000012c7e6b
- (void)_updateArrowImages;	// IMP=0x00000000012c7e65
- (_Bool)isRightArrowPinnedToBottom;	// IMP=0x00000000012c7e29
- (_Bool)isRightArrowPinnedToTop;	// IMP=0x00000000012c7df1
- (double)maxNonPinnedOffset;	// IMP=0x00000000012c7de8
- (double)minNonPinnedOffset;	// IMP=0x00000000012c7ddf
- (_Bool)wouldPinForOffset:(double)arg1;	// IMP=0x00000000012c7d95
- (_Bool)isPinned;	// IMP=0x00000000012c7d77
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012c7d23

@end

