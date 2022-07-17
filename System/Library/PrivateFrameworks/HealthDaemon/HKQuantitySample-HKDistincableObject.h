//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKQuantitySample.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKQuantitySample (HKDistincableObject) <HDCoding>
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;	// IMP=0x00000000000e33ea
+ (id)migrateCodableObject:(id)arg1;	// IMP=0x000000000021d71d
+ (id)createWithCodable:(id)arg1;	// IMP=0x000000000002ce7a
+ (Class)hd_dataEntityClass;	// IMP=0x000000000001d01a
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e34d8
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x000000000001fa43
- (id)codableRepresentationForSync;	// IMP=0x000000000001fab9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
