//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKit/EKEventStore.h>

@interface EKEventStore (Suggestions)
+ (id)sg_newStore;	// IMP=0x0000000000234975
+ (void)sg_usingSharedStoreForReadingOnly:(CDUnknownBlockType)arg1;	// IMP=0x00000000002348e8
- (double)eventsPerWeekAroundDate:(id)arg1;	// IMP=0x0000000000233fa4
- (void)sg_bumpTimeToLiveForZeroKeywordNLEventOnInteraction:(id)arg1;	// IMP=0x0000000000233a16
- (id)sg_fetchEKEventsForPseudoNLEvent:(id)arg1 message:(id)arg2;	// IMP=0x00000000002333a0
- (id)sg_fetchEKEventsForPseudoNLEvent:(id)arg1 entity:(id)arg2;	// IMP=0x0000000000233314
- (id)_sg_fetchEKEventsForPseudoNLEvent:(id)arg1 title:(id)arg2 participants:(id)arg3;	// IMP=0x0000000000232f44
- (id)sg_fetchEKEventsForPseudoEventBySimilarTitleAndStartTime:(id)arg1;	// IMP=0x0000000000232e1b
- (id)eventWithExternalID:(id)arg1;	// IMP=0x0000000000232c63
- (id)eventsWithSameAlternativeOpaqueKeyAsDuplicateKey:(id)arg1 harvestStore:(id)arg2;	// IMP=0x0000000000232a15
- (id)eventsWithSameAlternativeOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;	// IMP=0x000000000023298c
- (id)eventsWithSameAlternativeOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;	// IMP=0x0000000000232903
- (id)eventsWithSameOpaqueKeyAsDuplicateKey:(id)arg1 extraKey:(id)arg2 harvestStore:(id)arg3;	// IMP=0x0000000000232283
- (id)eventsWithSameOpaqueKeyAsStorageEvent:(id)arg1 harvestStore:(id)arg2;	// IMP=0x000000000023212a
- (id)eventsWithSameOpaqueKeyAsPseudoEvent:(id)arg1 harvestStore:(id)arg2;	// IMP=0x0000000000231fd1
- (id)sg_confirmedEKEventForSGEvent:(id)arg1;	// IMP=0x0000000000231c68
@end

