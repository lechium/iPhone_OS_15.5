//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, PLFrequentLocationManager, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject
{
    id <PLLibraryClustererDelegate> _delegate;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    PLLocalCreationDateCreator *_localCreationDateCreator;	// 24 = 0x18
    PLFrequentLocationManager *_frequentLocationManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000593f26
@property(readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // @synthesize frequentLocationManager=_frequentLocationManager;
@property(readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // @synthesize localCreationDateCreator=_localCreationDateCreator;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <PLLibraryClustererDelegate> delegate; // @synthesize delegate=_delegate;
- (id)momentClustersForMomentsSortedByDate:(id)arg1;	// IMP=0x0000000000593cc4
- (id)_momentsWithLocationClusteredByPossibleSource:(id)arg1;	// IMP=0x0000000000593779
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1;	// IMP=0x0000000000592f68
- (id)_startDateComponentsForMomentCluster:(id)arg1;	// IMP=0x0000000000592f00
- (id)_momentsSplitBetweenOriginatorsWithMoments:(id)arg1;	// IMP=0x000000000059269c
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg1;	// IMP=0x0000000000591a8b
- (id)_momentsSplitWithinDayWithMoments:(id)arg1;	// IMP=0x0000000000590d4e
- (_Bool)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2;	// IMP=0x0000000000590d17
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2;	// IMP=0x00000000005905c8
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1;	// IMP=0x000000000058fc3b
- (void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2;	// IMP=0x000000000058faee
- (void)processMomentsWithAssets:(id)arg1;	// IMP=0x000000000058f4bf
- (id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2;	// IMP=0x000000000058f3a8

@end
