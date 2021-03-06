//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerAxisInput;

__attribute__((visibility("hidden")))
@interface _GCControllerAxisButtonInput
{
    _Bool _positive;	// 8 = 0x8
    GCControllerAxisInput *_axis;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001fd1d
@property(readonly, nonatomic, getter=isPositive) _Bool positive; // @synthesize positive=_positive;
@property(nonatomic) __weak GCControllerAxisInput *axis; // @synthesize axis=_axis;
- (float)value;	// IMP=0x000000000001fc26
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;	// IMP=0x000000000001fbdd
- (_Bool)_setValue:(float)arg1;	// IMP=0x000000000001fb9b
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x000000000001fb3a
- (void)_setPendingValue:(float)arg1;	// IMP=0x000000000001fa02
- (_Bool)_setValueFromAxisButton:(float)arg1 queue:(id)arg2;	// IMP=0x000000000001f97d
- (_Bool)_setValueFromAxisButton:(float)arg1;	// IMP=0x000000000001f93b
- (_Bool)isAnalog;	// IMP=0x000000000001f901
- (id)collection;	// IMP=0x000000000001f8bb
- (id)initWithAxis:(id)arg1 positive:(_Bool)arg2;	// IMP=0x000000000001f761

@end

