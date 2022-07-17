//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UGCGlyphButtonAppearance : NSObject
{
    NSString *_unselectedGlyphName;	// 8 = 0x8
    UIColor *_unselectedBackgroundColor;	// 16 = 0x10
    UIColor *_unselectedGlyphColor;	// 24 = 0x18
    NSString *_selectedGlyphName;	// 32 = 0x20
    UIColor *_selectedBackgroundColor;	// 40 = 0x28
    UIColor *_selectedGlyphColor;	// 48 = 0x30
    UIFont *_selectedGlyphFontSize;	// 56 = 0x38
    UIFont *_unselectedGlyphFontSize;	// 64 = 0x40
}

+ (id)thumbsDownButtonAppearance;	// IMP=0x00400000007e0689
+ (id)thumbsUpButtonAppearance;	// IMP=0x00100000007e0632
+ (id)_sharedThumbButtonConfig;	// IMP=0x00100000007e04ce
- (void).cxx_destruct;	// IMP=0x00200000007e07b8
@property(retain, nonatomic) UIFont *unselectedGlyphFontSize; // @synthesize unselectedGlyphFontSize=_unselectedGlyphFontSize;
@property(retain, nonatomic) UIFont *selectedGlyphFontSize; // @synthesize selectedGlyphFontSize=_selectedGlyphFontSize;
@property(retain, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(retain, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(retain, nonatomic) NSString *selectedGlyphName; // @synthesize selectedGlyphName=_selectedGlyphName;
@property(retain, nonatomic) UIColor *unselectedGlyphColor; // @synthesize unselectedGlyphColor=_unselectedGlyphColor;
@property(retain, nonatomic) UIColor *unselectedBackgroundColor; // @synthesize unselectedBackgroundColor=_unselectedBackgroundColor;
@property(retain, nonatomic) NSString *unselectedGlyphName; // @synthesize unselectedGlyphName=_unselectedGlyphName;

@end
