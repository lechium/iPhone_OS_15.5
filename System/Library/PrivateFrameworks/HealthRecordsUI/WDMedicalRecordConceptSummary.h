//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/WDMedicalRecordSummarizable-Protocol.h>

@class HKConceptStore, HKHealthRecordsStore, NSArray, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue, WDMedicalRecordSummaryDelegate;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordConceptSummary : NSObject <WDMedicalRecordSummarizable>
{
    _Bool _dirty;	// 8 = 0x8
    id <WDMedicalRecordSummaryDelegate> _delegate;	// 16 = 0x10
    HKHealthRecordsStore *_healthRecordsStore;	// 24 = 0x18
    HKConceptStore *_conceptStore;	// 32 = 0x20
    NSMutableOrderedSet *_allRecords;	// 40 = 0x28
    NSArray *_allDisplayItems;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_summaryQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_resourceQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000065dc2
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // @synthesize resourceQueue=_resourceQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *summaryQueue; // @synthesize summaryQueue=_summaryQueue;
@property(retain, nonatomic) NSArray *allDisplayItems; // @synthesize allDisplayItems=_allDisplayItems;
@property(retain, nonatomic) NSMutableOrderedSet *allRecords; // @synthesize allRecords=_allRecords;
@property(retain, nonatomic) HKConceptStore *conceptStore; // @synthesize conceptStore=_conceptStore;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
@property(nonatomic) __weak id <WDMedicalRecordSummaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePlacementForDisplayItems:(id)arg1 ofRecord:(id)arg2;	// IMP=0x00000000000659cb
- (void)_displayItemsForGenericMedicalRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065202
- (void)_displayItemsForObservation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064dc5
- (void)_displayItemsForRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064d38
- (void)_rqueue_recomputeIfNeeded;	// IMP=0x0000000000064778
- (void)_rqueue_setNeedsCompute;	// IMP=0x0000000000064720
@property(readonly, copy, nonatomic) NSString *summarySortString;
@property(readonly, copy, nonatomic) NSArray *displayItems;
- (void)showTruncatedRecords;	// IMP=0x00000000000645b8
- (void)recomputeIfNeeded;	// IMP=0x0000000000064531
- (void)setNeedsRecompute;	// IMP=0x00000000000644aa
- (void)addMedicalRecord:(id)arg1;	// IMP=0x0000000000064398
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000006425d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
