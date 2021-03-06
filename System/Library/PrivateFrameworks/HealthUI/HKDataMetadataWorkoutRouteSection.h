//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDataMetadataWorkoutRouteCell, HKLocationFetcher, HKLocationReadings, HKRouteMapGenerator;

@interface HKDataMetadataWorkoutRouteSection
{
    HKDataMetadataWorkoutRouteCell *_cell;	// 8 = 0x8
    HKLocationReadings *_locationReadings;	// 16 = 0x10
    HKLocationFetcher *_locationFetcher;	// 24 = 0x18
    HKRouteMapGenerator *_generator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007f96e
@property(retain, nonatomic) HKRouteMapGenerator *generator; // @synthesize generator=_generator;
@property(retain, nonatomic) HKLocationFetcher *locationFetcher; // @synthesize locationFetcher=_locationFetcher;
@property(readonly, nonatomic) HKLocationReadings *locationReadings; // @synthesize locationReadings=_locationReadings;
@property(retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell; // @synthesize cell=_cell;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000007f82e
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;	// IMP=0x000000000007f819
- (unsigned long long)numberOfRowsInSection;	// IMP=0x000000000007f80e
- (id)sectionTitle;	// IMP=0x000000000007f7af
- (void)generateRouteImage;	// IMP=0x000000000007f57e
- (id)initWithLocationReadings:(id)arg1;	// IMP=0x000000000007f4a8

@end

