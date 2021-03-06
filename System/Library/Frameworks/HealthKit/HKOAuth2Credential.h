//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_accessToken;	// 8 = 0x8
    struct os_unfair_lock_s _accessTokenLock;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    NSDate *_expiration;	// 32 = 0x20
    NSArray *_scope;	// 40 = 0x28
    NSString *_requestedScopeString;	// 48 = 0x30
}

+ (id)scopeFromScopeString:(id)arg1;	// IMP=0x00000000001d5dee
+ (id)_scopeStringFromScope:(id)arg1;	// IMP=0x00000000001d5dd2
+ (id)expirationFromTimeInterval:(double)arg1;	// IMP=0x00000000001d5db9
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d5bd1
- (void).cxx_destruct;	// IMP=0x00000000001d5f02
@property(readonly, copy, nonatomic) NSString *requestedScopeString; // @synthesize requestedScopeString=_requestedScopeString;
@property(readonly, copy, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x00000000001d5d0e
@property(readonly, copy, nonatomic) NSString *scopeString;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d5a11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d5919
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d590e
- (id)_commonInitWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4;	// IMP=0x00000000001d57a7
- (unsigned long long)hash;	// IMP=0x00000000001d56e8
- (_Bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;	// IMP=0x00000000001d53f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d5384
- (id)_refreshTokenIdentifier;	// IMP=0x00000000001d5314
- (id)_accessTokenIdentifier;	// IMP=0x00000000001d52a4
- (_Bool)deleteTokensWithError:(id *)arg1;	// IMP=0x00000000001d5261
- (_Bool)storeRefreshToken:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d519e
- (id)fetchRefreshTokenWithError:(id *)arg1;	// IMP=0x00000000001d5105
- (_Bool)storeAccessToken:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d4fd4
- (id)fetchAccessTokenWithError:(id *)arg1;	// IMP=0x00000000001d4ed4
- (id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scopeString:(id)arg4;	// IMP=0x00000000001d4df4
- (id)initWithIdentifier:(id)arg1 requestedScopeString:(id)arg2 expiration:(id)arg3 scope:(id)arg4;	// IMP=0x00000000001d4d1d
- (id)init;	// IMP=0x00000000001d4ca3

@end

