//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSRateLimiter, CKServerChangeToken, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKKSZoneStateEntry
{
    _Bool _ckzonecreated;	// 8 = 0x8
    _Bool _ckzonesubscribed;	// 9 = 0x9
    _Bool _moreRecordsInCloudKit;	// 10 = 0xa
    NSString *_ckzone;	// 16 = 0x10
    NSData *_encodedChangeToken;	// 24 = 0x18
    NSDate *_lastFetchTime;	// 32 = 0x20
    NSDate *_lastLocalKeychainScanTime;	// 40 = 0x28
    unsigned long long _lastFixup;	// 48 = 0x30
    CKKSRateLimiter *_rateLimiter;	// 56 = 0x38
}

+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0040000000084e02
+ (id);	// IMP=0x0010000000084df5
+ (id)sqlTable;	// IMP=0x0010000000084de8
+ (id)tryFromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084cd5
+ (id)fromDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000084bc2
+ (id)state:(id)arg1;	// IMP=0x0010000000084a5f
- (void).cxx_destruct;	// IMP=0x00200000000849fb
@property(retain) CKKSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property unsigned long long lastFixup; // @synthesize lastFixup=_lastFixup;
@property(retain) NSDate *lastLocalKeychainScanTime; // @synthesize lastLocalKeychainScanTime=_lastLocalKeychainScanTime;
@property(retain) NSDate *lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property _Bool moreRecordsInCloudKit; // @synthesize moreRecordsInCloudKit=_moreRecordsInCloudKit;
@property(retain) NSData *encodedChangeToken; // @synthesize encodedChangeToken=_encodedChangeToken;
@property _Bool ckzonesubscribed; // @synthesize ckzonesubscribed=_ckzonesubscribed;
@property _Bool ckzonecreated; // @synthesize ckzonecreated=_ckzonecreated;
@property(retain) NSString *ckzone; // @synthesize ckzone=_ckzone;
- (id)sqlValues;	// IMP=0x0010000000084413
- (id)whereClauseToFindSelf;	// IMP=0x0010000000084372
@property(retain) NSData *encodedRateLimiter;
@property(retain, getter=getChangeToken, setter=setChangeToken:) CKServerChangeToken *changeToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000083b02
- (id)description;	// IMP=0x0010000000083a19
- (id)initWithCKZone:(id)arg1 zoneCreated:(_Bool)arg2 zoneSubscribed:(_Bool)arg3 changeToken:(id)arg4 moreRecordsInCloudKit:(_Bool)arg5 lastFetch:(id)arg6 lastScan:(id)arg7 lastFixup:(unsigned long long)arg8 encodedRateLimiter:(id)arg9;	// IMP=0x00100000000838bf

@end
