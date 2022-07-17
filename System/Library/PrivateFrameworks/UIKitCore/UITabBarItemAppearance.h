//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UITabBarAppearance, UITabBarItemStateAppearance, _UITabBarItemData;

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding>
{
    UITabBarItemStateAppearance *_states[5];	// 8 = 0x8
    _UITabBarItemData *_data;	// 48 = 0x30
    UITabBarAppearance *_owningAppearance;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000304b3e
- (void).cxx_destruct;	// IMP=0x0000000000304f7e
@property(nonatomic, setter=_setOwningAppearance:) __weak UITabBarAppearance *_owningAppearance; // @synthesize _owningAppearance;
@property(retain, nonatomic, setter=_setData:) _UITabBarItemData *_data; // @synthesize _data;
- (void)configureWithDefaultForStyle:(long long)arg1;	// IMP=0x0000000000304ec2
@property(readonly, nonatomic) UITabBarItemStateAppearance *focused;
@property(readonly, nonatomic) UITabBarItemStateAppearance *disabled;
@property(readonly, nonatomic) UITabBarItemStateAppearance *selected;
@property(readonly, nonatomic) UITabBarItemStateAppearance *highlighted;
@property(readonly, nonatomic) UITabBarItemStateAppearance *normal;
- (id)_proxyForState:(long long)arg1;	// IMP=0x0000000000304df7
- (void)_writeToStorage:(CDUnknownBlockType)arg1;	// IMP=0x0000000000304d57
- (void)_updateDataTo:(id)arg1;	// IMP=0x0000000000304cc1
- (void)_describeInto:(id)arg1;	// IMP=0x0000000000304cab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000304c39
- (unsigned long long)hash;	// IMP=0x0000000000304c23
- (id)description;	// IMP=0x0000000000304ba4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000304b75
- (id)copy;	// IMP=0x0000000000304b46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000304b26
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000304aa2
- (id)initWithTabBarItemAppearance:(id)arg1;	// IMP=0x0000000000304a8c
- (id)_initWithTabBarItemData:(id)arg1;	// IMP=0x0000000000304a2f
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000003049bf
- (id)init;	// IMP=0x00000000003049ab
- (void)dealloc;	// IMP=0x0000000000304948

@end
