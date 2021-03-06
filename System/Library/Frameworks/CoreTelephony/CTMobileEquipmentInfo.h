//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding>
{
    long long _slotId;	// 8 = 0x8
    NSString *_currentMobileId;	// 16 = 0x10
    NSString *_currentSubscriberId;	// 24 = 0x18
    NSString *_IMEI;	// 32 = 0x20
    NSString *_ICCID;	// 40 = 0x28
    NSString *_IMSI;	// 48 = 0x30
    NSString *_cdmaIMSI;	// 56 = 0x38
    NSString *_MEID;	// 64 = 0x40
    NSString *_EUIMID;	// 72 = 0x48
    NSNumber *_PRLVersion;	// 80 = 0x50
    NSNumber *_ERIVersion;	// 88 = 0x58
    NSString *_MIN;	// 96 = 0x60
    NSString *_NAI;	// 104 = 0x68
    NSString *_baseVersion;	// 112 = 0x70
    NSString *_baseId;	// 120 = 0x78
    NSString *_baseProfile;	// 128 = 0x80
    NSString *_effectiveICCID;	// 136 = 0x88
    NSString *_CSN;	// 144 = 0x90
    NSString *_displayCSN;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005057b
- (void).cxx_destruct;	// IMP=0x0000000000050792
@property(retain, nonatomic) NSString *displayCSN; // @synthesize displayCSN=_displayCSN;
@property(retain, nonatomic) NSString *CSN; // @synthesize CSN=_CSN;
@property(retain, nonatomic) NSString *effectiveICCID; // @synthesize effectiveICCID=_effectiveICCID;
@property(retain, nonatomic) NSString *baseProfile; // @synthesize baseProfile=_baseProfile;
@property(retain, nonatomic) NSString *baseId; // @synthesize baseId=_baseId;
@property(retain, nonatomic) NSString *baseVersion; // @synthesize baseVersion=_baseVersion;
@property(retain, nonatomic) NSString *NAI; // @synthesize NAI=_NAI;
@property(retain, nonatomic) NSString *MIN; // @synthesize MIN=_MIN;
@property(retain, nonatomic) NSNumber *ERIVersion; // @synthesize ERIVersion=_ERIVersion;
@property(retain, nonatomic) NSNumber *PRLVersion; // @synthesize PRLVersion=_PRLVersion;
@property(retain, nonatomic) NSString *EUIMID; // @synthesize EUIMID=_EUIMID;
@property(retain, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(retain, nonatomic) NSString *cdmaIMSI; // @synthesize cdmaIMSI=_cdmaIMSI;
@property(retain, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(retain, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property(retain, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(retain, nonatomic) NSString *currentSubscriberId; // @synthesize currentSubscriberId=_currentSubscriberId;
@property(retain, nonatomic) NSString *currentMobileId; // @synthesize currentMobileId=_currentMobileId;
@property(nonatomic) long long slotId; // @synthesize slotId=_slotId;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005014d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004fd39
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004f796
- (id)description;	// IMP=0x000000000004f2fa

@end

