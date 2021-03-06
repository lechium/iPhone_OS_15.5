//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;	// 8 = 0x8
    long long _deviceModel;	// 16 = 0x10
    NSDictionary *_knownIdentifiersByHandleType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e4c41
- (void).cxx_destruct;	// IMP=0x00000000000e4f49
@property(readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType; // @synthesize knownIdentifiersByHandleType=_knownIdentifiersByHandleType;
@property(readonly, nonatomic) long long deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e4e21
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e4c49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e4b5e
- (unsigned long long)hash;	// IMP=0x00000000000e4b48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4ae9
- (_Bool)isEqualToDeviceHandle:(id)arg1;	// IMP=0x00000000000e4a62
- (_Bool)isEquivalentToDeviceHandle:(id)arg1;	// IMP=0x00000000000e473c
- (id)identifierWithType:(long long)arg1;	// IMP=0x00000000000e46d5
@property(readonly, nonatomic) NSDictionary *plistRepresentation;
- (id)description;	// IMP=0x00000000000e44d4
- (id)identifierDescription;	// IMP=0x00000000000e43d3
- (id)initWithType:(long long)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x00000000000e42fe
- (id)initWithName:(id)arg1 knownIdentifiers:(id)arg2;	// IMP=0x00000000000e42e9
- (id)initWithName:(id)arg1 knownIdentifiers:(id)arg2 deviceModel:(long long)arg3;	// IMP=0x00000000000e422a

@end

