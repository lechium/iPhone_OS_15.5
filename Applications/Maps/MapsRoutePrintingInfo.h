//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface MapsRoutePrintingInfo
{
    NSArray *_routeStepCells;	// 16 = 0x10
    NSArray *_routeStepCalloutCells;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004d1679
@property(readonly, nonatomic) NSArray *routeStepCalloutCells; // @synthesize routeStepCalloutCells=_routeStepCalloutCells;
@property(readonly, nonatomic) NSArray *routeStepCells; // @synthesize routeStepCells=_routeStepCells;
- (id)initWithNumberOfPages:(long long)arg1 routeStepCells:(id)arg2 routeStepCalloutCells:(id)arg3;	// IMP=0x00100000004d157b

@end

