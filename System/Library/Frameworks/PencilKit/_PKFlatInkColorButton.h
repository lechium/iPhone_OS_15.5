//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer;

@interface _PKFlatInkColorButton
{
    CAShapeLayer *_fillShapeLayer;	// 8 = 0x8
    CAShapeLayer *_strokeShapeLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001a46b1
@property(retain, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;
@property(retain, nonatomic) CAShapeLayer *fillShapeLayer; // @synthesize fillShapeLayer=_fillShapeLayer;
- (void)layoutSubviews;	// IMP=0x00000000001a41fd
- (id)initWithColor:(id)arg1 isCompact:(_Bool)arg2;	// IMP=0x00000000001a3f32

@end

