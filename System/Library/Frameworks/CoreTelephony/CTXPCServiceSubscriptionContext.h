//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSUUID;

@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isSimPresent;	// 8 = 0x8
    _Bool _isSimGood;	// 9 = 0x9
    long long _slotID;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    NSString *_phoneNumber;	// 48 = 0x30
    NSNumber *_userDataPreferred;	// 56 = 0x38
    NSNumber *_userDefaultVoice;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c302b
+ (id)contextWithServiceDescriptor:(id)arg1;	// IMP=0x00000000000c2c0f
+ (id)contextWithUUID:(id)arg1;	// IMP=0x00000000000c1e38
+ (id)contextWithSlot:(long long)arg1;	// IMP=0x00000000000c1e02
- (void).cxx_destruct;	// IMP=0x00000000000c30f2
@property(nonatomic) _Bool isSimGood; // @synthesize isSimGood=_isSimGood;
@property(nonatomic) _Bool isSimPresent; // @synthesize isSimPresent=_isSimPresent;
@property(retain, nonatomic) NSNumber *userDefaultVoice; // @synthesize userDefaultVoice=_userDefaultVoice;
@property(retain, nonatomic) NSNumber *userDataPreferred; // @synthesize userDataPreferred=_userDataPreferred;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) long long slotID; // @synthesize slotID=_slotID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c2e40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c2d37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2cb7
- (id)context;	// IMP=0x00000000000c2c06
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c230c
- (id)redactedDescription;	// IMP=0x00000000000c2175
- (id)description;	// IMP=0x00000000000c1f01
- (id)initWithUUID:(id)arg1 andSlot:(long long)arg2;	// IMP=0x00000000000c1e85
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000000c1dee
- (id)initWithSlot:(long long)arg1;	// IMP=0x00000000000c1d9b

@end

