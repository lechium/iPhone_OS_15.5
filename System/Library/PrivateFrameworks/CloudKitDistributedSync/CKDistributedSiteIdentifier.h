//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>
#import <CloudKitDistributedSync/NSSecureCoding-Protocol.h>

@class NSData;

@interface CKDistributedSiteIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_identifier;	// 8 = 0x8
    NSData *_modifier;	// 16 = 0x10
}

+ (id)SHADescription:(id)arg1;	// IMP=0x00000000000fb720
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fb15b
- (void).cxx_destruct;	// IMP=0x00000000000fbc95
@property(readonly, nonatomic) NSData *modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithStringSiteIdentifiers;	// IMP=0x00000000000fba0b
- (id)description;	// IMP=0x00000000000fb882
- (unsigned long long)hash;	// IMP=0x00000000000fb66c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb3a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb398
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fb2bb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fb163
- (id)initWithIdentifier:(id)arg1 modifier:(id)arg2;	// IMP=0x00000000000fb03e
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000fb02a

@end
