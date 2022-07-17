//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID;

@interface CKDatabaseNotification <NSSecureCoding>
{
    long long _databaseScope;	// 168 = 0xa8
    CKRecordZoneID *_recordZoneID;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f5450
- (void).cxx_destruct;	// IMP=0x00000000000f55ad
@property(copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f54db
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f5458
- (id)description;	// IMP=0x00000000000f543e
- (id)CKPropertiesDescription;	// IMP=0x00000000000f5362
- (id)initWithRemoteNotificationDictionary:(id)arg1;	// IMP=0x00000000000aafae

@end
