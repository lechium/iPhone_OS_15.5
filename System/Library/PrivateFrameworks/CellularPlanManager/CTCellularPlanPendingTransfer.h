//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class CTUserLabel, NSString;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding>
{
    NSString *_sourceIccid;	// 8 = 0x8
    NSString *_carrierName;	// 16 = 0x10
    NSString *_deviceName;	// 24 = 0x18
    CTUserLabel *_planLabel;	// 32 = 0x20
    NSString *_phoneNumber;	// 40 = 0x28
    NSString *_countryCode;	// 48 = 0x30
    long long _status;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003ce9
- (void).cxx_destruct;	// IMP=0x0000000000004182
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) CTUserLabel *planLabel; // @synthesize planLabel=_planLabel;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *sourceIccid; // @synthesize sourceIccid=_sourceIccid;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003e95
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003cf1
- (id)description;	// IMP=0x0000000000003af6
- (id)init;	// IMP=0x0000000000003a46

@end

