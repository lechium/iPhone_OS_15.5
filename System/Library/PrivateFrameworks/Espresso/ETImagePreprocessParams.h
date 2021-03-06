//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ETImagePreprocessParams : NSObject
{
    _Bool _network_wants_bgr;	// 8 = 0x8
    float _bias_r;	// 12 = 0xc
    float _bias_g;	// 16 = 0x10
    float _bias_b;	// 20 = 0x14
    float _scale;	// 24 = 0x18
    unsigned long long _channels;	// 32 = 0x20
    unsigned long long _height;	// 40 = 0x28
    unsigned long long _width;	// 48 = 0x30
}

@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) float bias_b; // @synthesize bias_b=_bias_b;
@property(readonly, nonatomic) float bias_g; // @synthesize bias_g=_bias_g;
@property(readonly, nonatomic) float bias_r; // @synthesize bias_r=_bias_r;
@property(readonly, nonatomic) _Bool network_wants_bgr; // @synthesize network_wants_bgr=_network_wants_bgr;
- (id)initWithHeight:(unsigned long long)arg1 Width:(unsigned long long)arg2 NumChannels:(unsigned long long)arg3 Scale:(float)arg4 BiasR:(float)arg5 BiasG:(float)arg6 BiasB:(float)arg7 NetworkWantBGR:(_Bool)arg8;	// IMP=0x0000000000254ea7

@end

