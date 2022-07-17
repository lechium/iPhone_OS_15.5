//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface PKSharedAccountCloudStore : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _dirty;	// 8 = 0x8
    NSArray *_sharedAccountCloudStoreZones;	// 16 = 0x10
    NSDate *_lastUpdated;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ebca2
- (void).cxx_destruct;	// IMP=0x00000000003ec16b
@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSArray *sharedAccountCloudStoreZones; // @synthesize sharedAccountCloudStoreZones=_sharedAccountCloudStoreZones;
- (id)description;	// IMP=0x00000000003ec017
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ebf76
- (unsigned long long)hash;	// IMP=0x00000000003ebf28
- (_Bool)isEqualToSharedAccountCloudStore:(id)arg1;	// IMP=0x00000000003ebf16
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ebeae
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ebe14
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ebcaa
- (id)allPossibleZonesForAccountUser:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003eb9b3
- (id)primaryZoneForAccountUser:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003eb963
- (id)sharedAccountZoneWithName:(id)arg1 access:(unsigned long long)arg2;	// IMP=0x00000000003eb6f3
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1 forAccountUser:(id)arg2;	// IMP=0x00000000003eb589
- (id)sharedAccountCloudStoreZonesWithAccess:(unsigned long long)arg1;	// IMP=0x00000000003eb3e0
- (id)initWithArray:(id)arg1 lastUpdated:(id)arg2;	// IMP=0x00000000003eb180

@end
