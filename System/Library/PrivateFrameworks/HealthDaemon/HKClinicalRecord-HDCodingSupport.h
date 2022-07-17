//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKClinicalRecord.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKClinicalRecord (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;	// IMP=0x000000000011293b
+ (Class)hd_dataEntityClass;	// IMP=0x00000000004bab6c
- (_Bool)addCodableRepresentationToCollection:(id)arg1;	// IMP=0x0000000000112b2d
- (id)codableRepresentationForSync;	// IMP=0x0000000000112a2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
