//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UIColor, UIVisualEffect;

@interface UIListSeparatorConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _ignoreTopSeparatorInsetsFromCell;	// 8 = 0x8
    _Bool _ignoreBottomSeparatorInsetsFromCell;	// 9 = 0x9
    long long _topSeparatorVisibility;	// 16 = 0x10
    long long _bottomSeparatorVisibility;	// 24 = 0x18
    UIColor *_color;	// 32 = 0x20
    UIColor *_multipleSelectionColor;	// 40 = 0x28
    UIVisualEffect *_visualEffect;	// 48 = 0x30
    struct NSDirectionalEdgeInsets _topSeparatorInsets;	// 56 = 0x38
    struct NSDirectionalEdgeInsets _bottomSeparatorInsets;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a1a8d0
- (void).cxx_destruct;	// IMP=0x0000000000a1ad2d
@property(copy, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(retain, nonatomic) UIColor *multipleSelectionColor; // @synthesize multipleSelectionColor=_multipleSelectionColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct NSDirectionalEdgeInsets bottomSeparatorInsets; // @synthesize bottomSeparatorInsets=_bottomSeparatorInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets topSeparatorInsets; // @synthesize topSeparatorInsets=_topSeparatorInsets;
@property(nonatomic) long long bottomSeparatorVisibility; // @synthesize bottomSeparatorVisibility=_bottomSeparatorVisibility;
@property(nonatomic) long long topSeparatorVisibility; // @synthesize topSeparatorVisibility=_topSeparatorVisibility;
@property(nonatomic, getter=_ignoreBottomSeparatorInsetsFromCell, setter=_setIgnoreBottomSeparatorInsetsFromCell:) _Bool _ignoreBottomSeparatorInsetsFromCell; // @synthesize _ignoreBottomSeparatorInsetsFromCell;
@property(nonatomic, getter=_ignoreTopSeparatorInsetsFromCell, setter=_setIgnoreTopSeparatorInsetsFromCell:) _Bool _ignoreTopSeparatorInsetsFromCell; // @synthesize _ignoreTopSeparatorInsetsFromCell;
@property(copy, nonatomic, getter=_visualEffect, setter=_setVisualEffect:) UIVisualEffect *_visualEffect;
- (id)_multipleSelectionColor;	// IMP=0x0000000000a1ac00
- (void)_setMultipleSelectionColor:(id)arg1;	// IMP=0x0000000000a1abee
- (id)_color;	// IMP=0x0000000000a1abdc
- (void)_setColor:(id)arg1;	// IMP=0x0000000000a1abca
- (struct NSDirectionalEdgeInsets)_insets;	// IMP=0x0000000000a1abab
- (void)_setInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x0000000000a1ab99
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a1aa9d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a1a8d8
- (id)__copyWithSubclass:(Class)arg1 inZone:(struct _NSZone *)arg2;	// IMP=0x0000000000a1a816
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a1a7ea
- (id)description;	// IMP=0x0000000000a1a61c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a1a425
- (unsigned long long)hash;	// IMP=0x0000000000a1a384
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)arg1;	// IMP=0x0000000000a1a218
- (id)initWithListAppearance:(long long)arg1;	// IMP=0x0000000000a1a084

@end
