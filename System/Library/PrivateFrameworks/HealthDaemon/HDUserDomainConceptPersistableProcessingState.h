//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding, NSCopying>
{
    long long _anchor;	// 8 = 0x8
    long long _ontologyVersion;	// 16 = 0x10
    long long _maximumPropertyType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006a5c0e
@property(readonly, nonatomic) long long maximumPropertyType; // @synthesize maximumPropertyType=_maximumPropertyType;
@property(readonly, nonatomic) long long ontologyVersion; // @synthesize ontologyVersion=_ontologyVersion;
@property(readonly, nonatomic) long long anchor; // @synthesize anchor=_anchor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006a5cc1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006a5c16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006a5c03
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a5b4c
- (unsigned long long)hash;	// IMP=0x00000000006a5b3a
- (id)description;	// IMP=0x00000000006a5a9e
- (id)copyByUpdatingAnchor:(long long)arg1;	// IMP=0x00000000006a5a65
- (id)initWithAnchor:(long long)arg1 ontologyVersion:(long long)arg2 maximumPropertyType:(long long)arg3;	// IMP=0x00000000006a5a12
- (id)init;	// IMP=0x00000000006a5998

@end
