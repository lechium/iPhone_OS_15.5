//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

@interface ICAttachmentBrickSmallMapViewV2
{
    CALayer *_borderLayer;	// 8 = 0x8
    CALayer *_effectsLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012ecc7
@property(retain, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
- (void)setContentsScale:(double)arg1;	// IMP=0x000000000012ec06
- (void)updateSublayersBounds:(struct CGRect)arg1;	// IMP=0x000000000012ea57
- (void)setCornerRadius:(double)arg1;	// IMP=0x000000000012e9e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000012e6a8

@end

