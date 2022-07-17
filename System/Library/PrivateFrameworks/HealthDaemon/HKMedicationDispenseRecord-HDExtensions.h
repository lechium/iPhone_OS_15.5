//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKMedicationDispenseRecord.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKMedicationDispenseRecord (HDExtensions) <HDCoding>
+ (Class)hd_dataEntityClass;	// IMP=0x00000000001fe062
+ (id)createWithCodable:(id)arg1;	// IMP=0x000000000042610a
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x00000000004266bb
- (id)codableRepresentationForSync;	// IMP=0x00000000004261f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
