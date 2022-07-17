//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownCountdown <ARUICountdownAnimation>
{
    unsigned long long _step;	// 8 = 0x8
    _Bool _cancelable;	// 16 = 0x10
    double _percent;	// 24 = 0x18
}

+ (id)identifier;	// IMP=0x0000000000013e9a
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (unsigned long long)countdownStep;	// IMP=0x00000000000141c3
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013f88
- (id)description;	// IMP=0x0000000000013ec1
- (id)identifier;	// IMP=0x0000000000013ea7
- (_Bool)cancelable;	// IMP=0x0000000000013e8a
- (id)timingFunction;	// IMP=0x0000000000013e5b
- (double)duration;	// IMP=0x0000000000013e4d
- (double)delay;	// IMP=0x0000000000013e3f
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(_Bool)arg3;	// IMP=0x0000000000013dd3

@end
