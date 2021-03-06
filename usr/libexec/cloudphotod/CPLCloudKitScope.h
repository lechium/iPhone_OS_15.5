//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordZone, CKRecordZoneID, NSData;

@interface CPLCloudKitScope : NSObject
{
    CKRecordZone *_zone;	// 8 = 0x8
    long long _options;	// 16 = 0x10
}

+ (id)scopeFromTransportScope:(id)arg1;	// IMP=0x00200000000a8f14
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000a8b50
- (void).cxx_destruct;	// IMP=0x00200000000a91e3
@property(readonly, nonatomic) long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
- (id)recordIDWithRecordName:(id)arg1;	// IMP=0x00100000000a914a
@property(readonly, nonatomic, getter=isZoneish) _Bool zoneish;
@property(readonly, nonatomic, getter=isShared) _Bool shared;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) NSData *transportScope;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000a8ea2
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000a8dcb
- (id)initWithZoneID:(id)arg1;	// IMP=0x00100000000a8d4d
- (id)initWithZone:(id)arg1;	// IMP=0x00100000000a8c94
- (id)initWithZoneID:(id)arg1 options:(long long)arg2;	// IMP=0x00100000000a8c0e
- (id)initWithZone:(id)arg1 options:(long long)arg2;	// IMP=0x00100000000a8b58

@end

