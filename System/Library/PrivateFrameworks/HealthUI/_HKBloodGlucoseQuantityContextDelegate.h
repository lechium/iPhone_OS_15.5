//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayRoomViewControllerIntegratedContextDelegate-Protocol.h>

@class HKDisplayType, HKInteractiveChartOverlayNamedDataSource, HKLineSeries, NSString;

@interface _HKBloodGlucoseQuantityContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate>
{
    HKInteractiveChartOverlayNamedDataSource *_cacheDataSource;	// 8 = 0x8
    HKDisplayType *_primaryDisplayType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000050204
@property(retain, nonatomic) HKDisplayType *primaryDisplayType; // @synthesize primaryDisplayType=_primaryDisplayType;
@property(retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource; // @synthesize cacheDataSource=_cacheDataSource;
- (id)_statItemForTimeScope:(long long)arg1;	// IMP=0x0000000000050186
- (id)formatterForTimescope:(long long)arg1;	// IMP=0x0000000000050080
@property(readonly, nonatomic) HKLineSeries *alternateLineSeries;
- (id)initWithCustomDataSource:(id)arg1 primaryDisplayType:(id)arg2;	// IMP=0x000000000004ffdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

