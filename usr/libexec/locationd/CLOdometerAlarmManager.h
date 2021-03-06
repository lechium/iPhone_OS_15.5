//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLOdometerAlarm, NSMutableArray, NSString;

@interface CLOdometerAlarmManager : CLIntersiloService
{
    NSMutableArray *fAlarms;	// 8 = 0x8
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> fLocationClient;	// 16 = 0x10
    struct unique_ptr<CLGnssProvider_Type::Client, std::default_delete<CLGnssProvider_Type::Client>> fGpsClient;	// 24 = 0x18
    CLOdometerAlarm *currentlyScheduled;	// 32 = 0x20
    double lastOdometer;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x0020000000765165
- (id).cxx_construct;	// IMP=0x0020000000765fe0
- (void).cxx_destruct;	// IMP=0x0010000000765f8e
@property(nonatomic) double lastOdometer; // @synthesize lastOdometer;
@property(nonatomic) CLOdometerAlarm *currentlyScheduled; // @synthesize currentlyScheduled;
@property(readonly, nonatomic) CLOdometerAlarm *firstAlarm;
- (void)reset;	// IMP=0x0010000000765d14
- (void)handleOdometer:(double)arg1;	// IMP=0x0010000000765bc8
- (void)handleOdometerData:(const void *)arg1;	// IMP=0x00100000007659a2
- (void)handleLocationData:(const void *)arg1;	// IMP=0x001000000076561e
- (void)reschedule;	// IMP=0x0010000000765618
- (void)removeAlarm:(id)arg1;	// IMP=0x00100000007655bc
- (void)addAlarm:(id)arg1;	// IMP=0x00100000007654c5
- (void)endService;	// IMP=0x0010000000765447
- (void)beginService;	// IMP=0x00100000007651cf
- (id)init;	// IMP=0x0010000000765192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

