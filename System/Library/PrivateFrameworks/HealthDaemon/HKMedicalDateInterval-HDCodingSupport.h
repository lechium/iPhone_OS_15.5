//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKMedicalDateInterval.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface HKMedicalDateInterval (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;	// IMP=0x0000000000222f4b
- (id)codableRepresentationForSync;	// IMP=0x000000000022322f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
