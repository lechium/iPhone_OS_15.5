//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSString *_accountSuffix;	// 24 = 0x18
    PKAccountPaymentFundingDetails *_fundingDetails;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033002a
+ (Class)fundingDetailsClassForFundingSourceType:(long long)arg1;	// IMP=0x000000000032f7ae
- (void).cxx_destruct;	// IMP=0x00000000003304b4
@property(copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails; // @synthesize fundingDetails=_fundingDetails;
@property(copy, nonatomic) NSString *accountSuffix; // @synthesize accountSuffix=_accountSuffix;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000330367
- (unsigned long long)hash;	// IMP=0x00000000003302dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033023d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003301a4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000330032
- (id)hashComponentWithCertificatesResponse:(id)arg1;	// IMP=0x000000000032ff25
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;	// IMP=0x000000000032fde3
- (id)jsonDictionaryRepresentation;	// IMP=0x000000000032fdcf
- (id)jsonString;	// IMP=0x000000000032fc88
- (id)displayDescription;	// IMP=0x000000000032fb3a
- (id)bankAccountRepresentation;	// IMP=0x000000000032fa77
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000032f8c7
- (id)initWithType:(long long)arg1;	// IMP=0x000000000032f7f5

@end

