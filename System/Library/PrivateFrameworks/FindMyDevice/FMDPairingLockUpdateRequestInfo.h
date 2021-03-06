//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDPairingLockUpdateRequestInfo : NSObject <NSSecureCoding>
{
    NSString *_pairingCheckToken;	// 8 = 0x8
    NSString *_lostModePubKey;	// 16 = 0x10
    NSString *_userPrivateKey;	// 24 = 0x18
    NSString *_serialNumber;	// 32 = 0x20
    NSString *_timeStamp;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011843
- (void).cxx_destruct;	// IMP=0x0000000000011bed
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *userPrivateKey; // @synthesize userPrivateKey=_userPrivateKey;
@property(retain, nonatomic) NSString *lostModePubKey; // @synthesize lostModePubKey=_lostModePubKey;
@property(retain, nonatomic) NSString *pairingCheckToken; // @synthesize pairingCheckToken=_pairingCheckToken;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011997
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001184b

@end

