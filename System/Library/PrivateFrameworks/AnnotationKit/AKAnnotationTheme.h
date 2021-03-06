//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface AKAnnotationTheme : NSObject
{
    int _pageTheme;	// 8 = 0x8
}

+ (id)highlightTextColor:(int)arg1;	// IMP=0x000000000001e53f
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(_Bool)arg3;	// IMP=0x000000000001e4ea
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2;	// IMP=0x000000000001e4a7
+ (id)theme:(int)arg1;	// IMP=0x000000000001e476
+ (id)underlineTheme:(int)arg1;	// IMP=0x000000000001e0ca
+ (id)purpleTheme:(int)arg1;	// IMP=0x000000000001dd1e
+ (id)pinkTheme:(int)arg1;	// IMP=0x000000000001d972
+ (id)yellowTheme:(int)arg1;	// IMP=0x000000000001d5c6
+ (id)blueTheme:(int)arg1;	// IMP=0x000000000001d21a
+ (id)greenTheme:(int)arg1;	// IMP=0x000000000001ce70
+ (id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3;	// IMP=0x0000000000010644
+ (id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2;	// IMP=0x0000000000010534
+ (id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2;	// IMP=0x00000000000103ef
+ (id)themeDescriptions;	// IMP=0x000000000001030f
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(readonly, nonatomic) int annotationStyle;
@property(readonly, nonatomic) _Bool isUnderline;
@property(readonly, nonatomic) UIFont *noteTextFontInTable;
@property(readonly, nonatomic) UIFont *noteTextFont;
@property(readonly, nonatomic) struct CGSize noteShadowOffset;
@property(readonly, nonatomic) UIColor *noteShadowColor;
@property(readonly, nonatomic) double noteShadowOpacity;
@property(readonly, nonatomic) double noteShadowRadius;
@property(readonly, nonatomic) UIColor *notesSidebarTextColor;
@property(readonly, nonatomic) UIColor *noteMarkerStrikethroughColor;
@property(readonly, nonatomic) UIColor *notesSidebarBarColor;
@property(readonly, nonatomic) UIColor *noteMarkerBorderColor;
@property(readonly, nonatomic) UIColor *noteMarkerFillColor;
@property(readonly, nonatomic) UIColor *highlightColor;
@property(readonly, nonatomic) UIColor *noteTextColor;
@property(readonly, nonatomic) UIColor *noteBorderColor;
@property(readonly, nonatomic) UIColor *noteFillColor;

@end

