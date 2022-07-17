//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncZoneIdentifier;

@interface HDInsertSharedSummaryTransactionOperation
{
    HDCloudSyncZoneIdentifier *_zoneIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000640a14
- (void).cxx_destruct;	// IMP=0x0000000000640ae4
@property(readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000640aa9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000640a1c
- (_Bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3;	// IMP=0x000000000063ed00
- (id)transactionContext;	// IMP=0x000000000063ecb8
- (id)initWithZoneIdentifier:(id)arg1;	// IMP=0x000000000063ec3e

@end
