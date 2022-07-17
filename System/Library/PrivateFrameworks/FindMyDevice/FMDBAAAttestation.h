//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding>
{
    NSData *_attestation;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015f99
- (void).cxx_destruct;	// IMP=0x0000000000015fd7
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSData *attestation; // @synthesize attestation=_attestation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015eb3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015dad
- (id)initWithAttestation:(id)arg1 signature:(id)arg2;	// IMP=0x0000000000015d0f

@end
