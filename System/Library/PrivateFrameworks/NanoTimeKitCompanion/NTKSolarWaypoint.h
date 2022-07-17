//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKCacheableKeyProvider-Protocol.h>

@class NSDate, NSString, NTKSolarTimeModel;

@interface NTKSolarWaypoint : NSObject <NTKCacheableKeyProvider>
{
    long long _type;	// 8 = 0x8
    NSDate *_waypointDate;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    NTKSolarTimeModel *_solarTimeModel;	// 32 = 0x20
    double _percentageThroughPeriodForWaypointDate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000113185
@property(readonly, nonatomic) double percentageThroughPeriodForWaypointDate; // @synthesize percentageThroughPeriodForWaypointDate=_percentageThroughPeriodForWaypointDate;
@property(readonly, nonatomic) NSDate *waypointDate; // @synthesize waypointDate=_waypointDate;
@property(readonly, nonatomic) NTKSolarTimeModel *solarTimeModel; // @synthesize solarTimeModel=_solarTimeModel;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)ntkCacheableKey;	// IMP=0x00000000001130e5
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *localizedName;
- (void)updateDependentValuesWithPlaceholderData;	// IMP=0x0000000000112ed4
- (void)updateDependentValues;	// IMP=0x0000000000112cf5
- (id)initWithType:(long long)arg1 solarTimeModel:(id)arg2;	// IMP=0x0000000000112c6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
