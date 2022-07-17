//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface HDFHIRAuthResponse : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accessToken;	// 8 = 0x8
    NSString *_refreshToken;	// 16 = 0x10
    NSString *_patientID;	// 24 = 0x18
    NSDate *_expiration;	// 32 = 0x20
    NSString *_scope;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001fbec
+ (id)authResponseFromServerResponseDictionary:(id)arg1 baseURL:(id)arg2 previousCredential:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001e842
- (void).cxx_destruct;	// IMP=0x000000000001ff0d
@property(readonly, copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSString *patientID; // @synthesize patientID=_patientID;
@property(readonly, copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fd40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001fbf4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001fbe1
- (unsigned long long)hash;	// IMP=0x000000000001fb65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f503
- (_Bool)isEquivalentToAuthResponse:(id)arg1;	// IMP=0x000000000001f0bc
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 patientID:(id)arg3 expiration:(id)arg4 scope:(id)arg5;	// IMP=0x000000000001e713

@end
