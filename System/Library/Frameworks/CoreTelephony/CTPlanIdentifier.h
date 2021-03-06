//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTPlanIdentifier : NSObject <NSSecureCoding>
{
    NSString *_iccid;	// 8 = 0x8
    NSString *_carrierName;	// 16 = 0x10
    NSString *_phoneNumber;	// 24 = 0x18
    NSString *_countryCode;	// 32 = 0x20
    NSString *_label;	// 40 = 0x28
    NSString *_mcc;	// 48 = 0x30
    NSString *_mnc;	// 56 = 0x38
    NSString *_gid1;	// 64 = 0x40
    NSString *_gid2;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a866
- (void).cxx_destruct;	// IMP=0x000000000005ac96
@property(retain, nonatomic) NSString *gid2; // @synthesize gid2=_gid2;
@property(retain, nonatomic) NSString *gid1; // @synthesize gid1=_gid1;
@property(retain, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(retain, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *iccid; // @synthesize iccid=_iccid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005aaaa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a86e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a094
- (id)description;	// IMP=0x0000000000059e22
- (id)initWithIccid:(id)arg1 carrierName:(id)arg2 phoneNumber:(id)arg3 countryCode:(id)arg4 label:(id)arg5 mcc:(id)arg6 mnc:(id)arg7 gid1:(id)arg8 gid2:(id)arg9;	// IMP=0x0000000000059c60

@end

