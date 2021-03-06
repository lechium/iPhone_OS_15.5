//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayType;
@protocol _HKContextChangeDelegate;

@interface _HKSleepTrendContext
{
    HKDisplayType *_baseDisplayType;	// 8 = 0x8
    id <_HKContextChangeDelegate> _contextChangeDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000024e621
@property(nonatomic) __weak id <_HKContextChangeDelegate> contextChangeDelegate; // @synthesize contextChangeDelegate=_contextChangeDelegate;
@property(readonly, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
- (void)overlayStateWillChange:(_Bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;	// IMP=0x000000000024e597
- (_Bool)unselectedContextShouldUseContextBaseType;	// IMP=0x000000000024e57d
- (id)baseDisplayTypeForOverlay:(long long)arg1;	// IMP=0x000000000024e56b
- (id)initWithBaseDisplayType:(id)arg1 trendModel:(id)arg2 overlayChartController:(id)arg3 applicationItems:(id)arg4 overlayMode:(long long)arg5 contextChangeDelegate:(id)arg6;	// IMP=0x000000000024e4aa

@end

