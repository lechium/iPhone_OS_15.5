//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGCurationCriteriaFactory : NSObject
{
    NSMutableDictionary *_holidayServiceByLocale;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000051456c
- (id)_indexSetFromBaseSceneNames:(id)arg1 leafSceneNames:(id)arg2;	// IMP=0x00000000005141d4
- (id)_petScenesTrait;	// IMP=0x000000000051416f
- (id)_babyScenesTrait;	// IMP=0x000000000051410a
- (id)_tripScenesTrait;	// IMP=0x00000000005140a5
- (id)_searchRestaurantCompulsoryScenesTrait;	// IMP=0x0000000000514040
- (id)_searchRestaurantScenesTrait;	// IMP=0x0000000000513fdb
- (id)_memoriesRestaurantScenesTrait;	// IMP=0x0000000000513f76
- (id)_searchFallCriteria;	// IMP=0x0000000000513e7b
- (id)_searchSummerCriteria;	// IMP=0x0000000000513d80
- (id)_searchSpringCriteria;	// IMP=0x0000000000513c85
- (id)_searchWinterCriteria;	// IMP=0x0000000000513b8a
- (id)_compulsoryRequiredTraitsFromBaseSceneNames:(id)arg1 leafSceneNames:(id)arg2;	// IMP=0x0000000000513b0e
- (id)_yourPetCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513a7f
- (id)_yourBabyCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x00000000005139f0
- (id)_longTripCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513961
- (id)_shortTripCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x00000000005138e1
- (id)_dinnerCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x000000000051377a
- (id)_lunchCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513627
- (id)_breakfastCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x00000000005134d4
- (id)_nightOutCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x00000000005133ad
- (id)_sportEventCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x00000000005132d6
- (id)_museumCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513207
- (id)_performanceCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513150
- (id)_festivalCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000513081
- (id)_concertCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512fb2
- (id)_entertainmentCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512efb
- (id)_climbingCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512e24
- (id)_beachingCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512d4d
- (id)_winterSportCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512c76
- (id)_divingCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512ba7
- (id)_hikingCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512ad0
- (id)_holidayEventCriteriaWithGraph:(id)arg1 featureNodes:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0000000000512789
- (id)_anniversaryCriteriaWithPersonLocalIdentifier:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x00000000005126a0
- (id)_birthdayCriteriaWithPersonLocalIdentifiers:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000512540
- (id)_weddingCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512489
- (id)foodieCurationCriteriaWithPersonLocalIdentifier:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000512380
- (id)foodieCurationCriteriaWithClient:(unsigned long long)arg1;	// IMP=0x0000000000512279
- (id)curationCriteriaWithSeasonName:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x00000000005120d7
- (id)tripCurationCriteriaWithCollection:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000512079
- (id)petCurationCriteriaWithCollection:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000000512064
- (id)babyCurationCriteriaWithCollection:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x000000000051204f
- (id)curationCriteriaWithCollection:(id)arg1 meaningLabel:(id)arg2 inGraph:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x0000000000511f2a
- (id)curationCriteriaWithMeaningLabel:(id)arg1 featureNodes:(id)arg2 inGraph:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x0000000000511992
- (id)holidayServiceWithGraph:(id)arg1;	// IMP=0x000000000051188f

@end
