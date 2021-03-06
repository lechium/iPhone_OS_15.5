//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKSharingAuthorization : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_authorizationIdentifier;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009c22e
- (void).cxx_destruct;	// IMP=0x000000000009c37d
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *authorizationIdentifier; // @synthesize authorizationIdentifier=_authorizationIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009c2a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009c236
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009c223
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c18d
- (unsigned long long)hash;	// IMP=0x000000000009c14e
- (id)description;	// IMP=0x000000000009c0d1
- (id)initWithAuthorizationIdentifier:(id)arg1;	// IMP=0x000000000009c0bd
- (id)initWithAuthorizationIdentifier:(id)arg1 displayName:(id)arg2;	// IMP=0x000000000009c004

@end

