//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerAxisInput, GCControllerButtonInput;

@interface GCControllerDirectionPad
{
    _Bool _wasZeroed;	// 8 = 0x8
    int _timesPressed;	// 12 = 0xc
    _Bool _nonAnalog;	// 16 = 0x10
    CDUnknownBlockType _valueChangedHandler;	// 24 = 0x18
    GCControllerAxisInput *_xAxis;	// 32 = 0x20
    GCControllerAxisInput *_yAxis;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ac719
@property _Bool nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property(retain, nonatomic) GCControllerAxisInput *yAxis; // @synthesize yAxis=_yAxis;
@property(retain, nonatomic) GCControllerAxisInput *xAxis; // @synthesize xAxis=_xAxis;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
- (void)setUnmappedLocalizedName:(id)arg1;	// IMP=0x00000000000ac259
- (int)getAndResetTimesPressed;	// IMP=0x00000000000ac242
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;	// IMP=0x00000000000ac05e
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x00000000000abfe8
@property(readonly, nonatomic) GCControllerButtonInput *right;
@property(readonly, nonatomic) GCControllerButtonInput *left;
@property(readonly, nonatomic) GCControllerButtonInput *down;
@property(readonly, nonatomic) GCControllerButtonInput *up;
- (id)description;	// IMP=0x00000000000abe8a
- (_Bool)isAnalog;	// IMP=0x00000000000abe76
- (void)_fireValueChangedWithQueue:(id)arg1;	// IMP=0x00000000000abcfa
- (void)_fireValueChanged;	// IMP=0x00000000000abcca
- (id)initWithDigital:(_Bool)arg1 descriptionName:(id)arg2;	// IMP=0x00000000000abb80
- (id)initWithDigital:(_Bool)arg1;	// IMP=0x00000000000abb6c

@end
