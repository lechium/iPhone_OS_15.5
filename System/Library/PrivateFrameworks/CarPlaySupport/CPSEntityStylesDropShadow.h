//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

@interface CPSEntityStylesDropShadow : NSObject
{
    UIColor *_color;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    struct CGSize _offset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a478b
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (struct CGRect)rectsForSource:(struct CGRect)arg1 shadowRect:(struct CGRect *)arg2 unionRect:(struct CGRect *)arg3 positionTransform:(struct CGAffineTransform *)arg4;	// IMP=0x00000000000a4415
- (void)applyShadowToLayer:(id)arg1;	// IMP=0x00000000000a433c

@end
