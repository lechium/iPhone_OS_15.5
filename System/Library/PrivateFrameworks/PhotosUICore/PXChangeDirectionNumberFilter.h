//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXChangeDirectionNumberFilter
{
    double _threshold;	// 8 = 0x8
    double _minimumChange;	// 16 = 0x10
}

@property(nonatomic) double minimumChange; // @synthesize minimumChange=_minimumChange;
- (double)updatedOutput;	// IMP=0x0000000000077f3f
- (double)initialOutputForInput:(double)arg1;	// IMP=0x0000000000077f36
- (id)initWithInput:(double)arg1;	// IMP=0x0000000000077eec

@end

