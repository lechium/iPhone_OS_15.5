//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject
{
    NSString *_filterType;	// 8 = 0x8
    double _opacity;	// 16 = 0x10
    UIColor *_fillColor;	// 24 = 0x18
}

+ (id)layerWithFillColor:(id)arg1 opacity:(double)arg2 filterType:(id)arg3;	// IMP=0x00000000000ef2c8
- (void).cxx_destruct;	// IMP=0x00000000000ef5e1
@property(readonly, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(readonly, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=_opacity;
- (id)description;	// IMP=0x00000000000ef541
- (void)deconfigureLayerView:(id)arg1;	// IMP=0x00000000000ef489
- (void)configureLayerView:(id)arg1;	// IMP=0x00000000000ef354

@end

