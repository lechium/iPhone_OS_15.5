//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface OITSUBasicProgress
{
    OITSUBasicProgressStorage *mStorage;	// 32 = 0x20
}

@property(getter=isIndeterminate) _Bool indeterminate;
- (double)maxValue;	// IMP=0x000000000028df18
@property double value;
- (void)dealloc;	// IMP=0x000000000028de80
- (id)init;	// IMP=0x000000000028de66
- (id)initWithMaxValue:(double)arg1;	// IMP=0x000000000028ddf9

@end
