//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSData;

@interface CKQueryCursor : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    CKRecordZoneID *_zoneID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d5e4c
- (void).cxx_destruct;	// IMP=0x00000000000d6037
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d5f11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d5e54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5e41
- (id)description;	// IMP=0x00000000000d5e2f
- (id)CKPropertiesDescription;	// IMP=0x00000000000d5d2c
- (id)initWithData:(id)arg1 zoneID:(id)arg2;	// IMP=0x00000000000d5c93
- (id)init;	// IMP=0x00000000000d5c1f

@end

