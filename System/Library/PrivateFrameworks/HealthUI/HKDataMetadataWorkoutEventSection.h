//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKWorkout, HKWorkoutDurationNumberFormatter, NSDateComponentsFormatter;

@interface HKDataMetadataWorkoutEventSection
{
    HKWorkout *_workout;	// 8 = 0x8
    NSDateComponentsFormatter *_dateFormatter;	// 16 = 0x10
    HKWorkoutDurationNumberFormatter *_durationFormatter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a6bc8
@property(retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001a6a91
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x00000000001a6710
- (unsigned long long)numberOfRowsInSection;	// IMP=0x00000000001a66c1
- (id)sectionTitle;	// IMP=0x00000000001a6665
- (id)initWithSample:(id)arg1;	// IMP=0x00000000001a64b9

@end

