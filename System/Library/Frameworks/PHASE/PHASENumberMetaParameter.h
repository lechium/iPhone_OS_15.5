//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHASENumberMetaParameter
{
    double _minimum;	// 48 = 0x30
    double _maximum;	// 56 = 0x38
}

+ (id)new;	// IMP=0x000000000001fd94
@property(readonly, nonatomic) double maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) double minimum; // @synthesize minimum=_minimum;
- (void)fadeToValue:(double)arg1 duration:(double)arg2;	// IMP=0x000000000001ff29
- (id)initWithUID:(id)arg1 value:(double)arg2 rangeMin:(double)arg3 rangeMax:(double)arg4 delegate:(id)arg5;	// IMP=0x000000000001fdea
- (id)initWithUID:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000001fdac
- (id)init;	// IMP=0x000000000001fd56

@end

