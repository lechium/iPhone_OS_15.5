//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDPairingLockRegisterResponseInfo : NSObject <NSSecureCoding>
{
    NSString *_serialNumber;	// 8 = 0x8
    NSString *_pairingToken;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000149c6
- (void).cxx_destruct;	// IMP=0x0000000000014bad
@property(retain, nonatomic) NSString *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014a7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000149ce

@end

