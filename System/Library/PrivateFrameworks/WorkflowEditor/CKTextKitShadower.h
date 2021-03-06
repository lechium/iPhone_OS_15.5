//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface CKTextKitShadower : NSObject
{
    struct UIEdgeInsets _calculatedShadowPadding;	// 8 = 0x8
    UIColor *_shadowColor;	// 40 = 0x28
    double _shadowOpacity;	// 48 = 0x30
    double _shadowRadius;	// 56 = 0x38
    struct CGSize _shadowOffset;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000034856d
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
- (struct CGPoint)offsetPointWithExternalPoint:(struct CGPoint)arg1;	// IMP=0x00000000003484f0
- (struct CGPoint)offsetPointWithInternalPoint:(struct CGPoint)arg1;	// IMP=0x00000000003484a3
- (struct CGRect)offsetRectWithInternalRect:(struct CGRect)arg1;	// IMP=0x0000000000348462
- (struct CGRect)outsetRectWithInsetRect:(struct CGRect)arg1;	// IMP=0x00000000003483f5
- (struct CGSize)outsetSizeWithInsetSize:(struct CGSize)arg1;	// IMP=0x000000000034839f
- (struct CGRect)insetRectWithConstrainedRect:(struct CGRect)arg1;	// IMP=0x0000000000348326
- (struct CGSize)insetSizeWithConstrainedSize:(struct CGSize)arg1;	// IMP=0x00000000003482c3
- (struct UIEdgeInsets)shadowPadding;	// IMP=0x000000000034820e
- (void)setShadowInContext:(struct CGContext *)arg1;	// IMP=0x000000000034813c
- (_Bool)_shouldDrawShadow;	// IMP=0x00000000003480db
- (id)initWithShadowOffset:(struct CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4;	// IMP=0x000000000034800a

@end

