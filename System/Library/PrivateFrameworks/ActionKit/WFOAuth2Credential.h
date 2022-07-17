//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>
#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_tokenType;	// 8 = 0x8
    NSString *_accessToken;	// 16 = 0x10
    NSString *_refreshToken;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSDictionary *_responseObject;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003a7d83
- (void).cxx_destruct;	// IMP=0x00000000003a7d3a
@property(readonly, nonatomic) NSDictionary *responseObject; // @synthesize responseObject=_responseObject;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a7c7d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a7b06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a7afb
- (unsigned long long)hash;	// IMP=0x00000000003a7aa1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a7871
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic) NSString *tokenType; // @synthesize tokenType=_tokenType;
- (id)initWithResponseObject:(id)arg1;	// IMP=0x00000000003a7435

@end
