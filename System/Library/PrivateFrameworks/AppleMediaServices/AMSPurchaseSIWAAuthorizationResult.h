//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AKAuthorization, NSError;
@protocol AKCredential;

@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding>
{
    NSError *_error;	// 8 = 0x8
    AKAuthorization *_authorization;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001eb629
- (void).cxx_destruct;	// IMP=0x00000000001eb667
@property(retain, nonatomic) AKAuthorization *authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001eb54f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001eb4a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eb433
@property(readonly, nonatomic) id <AKCredential> authorizationCredential;
- (_Bool)isEqualToPurchaseSIWAAuthorizationResult:(id)arg1;	// IMP=0x00000000001eb201
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001eb19a
- (unsigned long long)hash;	// IMP=0x00000000001eb10d
- (id)initWithAuthorization:(id)arg1 error:(id)arg2;	// IMP=0x00000000001eb074

@end
