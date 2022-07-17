//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKCloudSyncRecordZoneIDDescription : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_zoneName;	// 8 = 0x8
    NSString *_ownerName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e2e4
- (void).cxx_destruct;	// IMP=0x000000000006e433
@property(readonly, copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e35a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e2ec
- (id)description;	// IMP=0x000000000006e2b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006e2ac
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;	// IMP=0x000000000006e1f3

@end
