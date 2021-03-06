//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface WBSCRDTPositionSortValue : NSObject <NSCopying, NSSecureCoding>
{
    long long _sortValue;	// 8 = 0x8
    NSString *_deviceIdentifier;	// 16 = 0x10
    long long _changeID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000160590
- (void).cxx_destruct;	// IMP=0x00000000001609f9
@property(readonly, nonatomic) long long changeID; // @synthesize changeID=_changeID;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) long long sortValue; // @synthesize sortValue=_sortValue;
- (id)description;	// IMP=0x00000000001609a6
- (id)positionSortValueWithSortValue:(long long)arg1;	// IMP=0x0000000000160965
- (long long)compare:(id)arg1;	// IMP=0x00000000001608e9
- (_Bool)isEqualToPositionSortValue:(id)arg1;	// IMP=0x0000000000160888
- (unsigned long long)hash;	// IMP=0x000000000016085c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001607f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001607ea
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016065c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000160598
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000160450
- (id)initWithSortValue:(long long)arg1 deviceIdentifier:(id)arg2 changeID:(long long)arg3;	// IMP=0x00000000001603b4
- (id)init;	// IMP=0x00000000001603a6

@end

