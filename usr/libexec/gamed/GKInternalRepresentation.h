//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKInternalRepresentation : NSObject
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x002000000009429f
+ (id)codedPropertyKeys;	// IMP=0x001000000009424f
+ (id)internalRepresentation;	// IMP=0x0010000000093bb7
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000093baf
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x001000000016fbee
+ (id)propertiesToFetch;	// IMP=0x001000000016fad2
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x001000000016f4af
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x0010000000094dbc
- (id)serverRepresentation;	// IMP=0x0010000000094daf
- (id)description;	// IMP=0x0010000000094d9b
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00100000000942b9
- (id)descriptionSubstitutionMap;	// IMP=0x00100000000942ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000009405e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000093e9a
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000093bc9
- (void)updateWithProperties:(id)arg1;	// IMP=0x001000000016fc9f
- (id)initWithProperties:(id)arg1;	// IMP=0x001000000016fc37
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x001000000016f6df
- (id)initWithCacheObject:(id)arg1;	// IMP=0x001000000016f4f8

@end

