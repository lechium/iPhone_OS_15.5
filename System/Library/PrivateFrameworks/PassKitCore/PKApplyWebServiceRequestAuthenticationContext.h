//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData;

@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding>
{
    NSArray *_certificates;	// 8 = 0x8
    NSData *_signaturePayload;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004b95
- (void).cxx_destruct;	// IMP=0x0000000000004dbe
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSData *signaturePayload; // @synthesize signaturePayload=_signaturePayload;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004cf0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004b9d

@end
