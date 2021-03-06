//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, NSArray;

@interface HKBeatToBeatViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKDisplayTypeController *_displayTypeController;	// 16 = 0x10
    HKUnitPreferenceController *_unitController;	// 24 = 0x18
    NSArray *_bpmPoints;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000012f132
@property(retain, nonatomic) NSArray *bpmPoints; // @synthesize bpmPoints=_bpmPoints;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000012f042
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000012f025
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000012f01a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000012ee76
- (id)_displayStringForTime:(double)arg1;	// IMP=0x000000000012ee23
- (id)_displayStringForInstantaneousBPM:(double)arg1;	// IMP=0x000000000012ed6c
- (void)viewDidLoad;	// IMP=0x000000000012ed00
- (void)_addHeartbeatSeriesSample:(id)arg1;	// IMP=0x000000000012ec83
- (id)initWithHRVSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;	// IMP=0x000000000012ea55
- (id)initWithHeartbeatSeriesSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;	// IMP=0x000000000012e9bf
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;	// IMP=0x000000000012e889

@end

