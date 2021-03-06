//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class CRKUser, DMFControlGroupIdentifier, NSDate, NSDictionary, NSSet, NSString;

@interface CRKCourse : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _requestingUnenroll;	// 8 = 0x8
    _Bool _studentCredentialsAreValid;	// 9 = 0x9
    _Bool _mustRequestUnenroll;	// 10 = 0xa
    DMFControlGroupIdentifier *_courseIdentifier;	// 16 = 0x10
    NSString *_courseName;	// 24 = 0x18
    NSString *_courseDescription;	// 32 = 0x20
    unsigned long long _courseMascotType;	// 40 = 0x28
    unsigned long long _courseColorType;	// 48 = 0x30
    CRKUser *_courseUser;	// 56 = 0x38
    NSDictionary *_instructorsByIdentifier;	// 64 = 0x40
    unsigned long long _type;	// 72 = 0x48
    NSDate *_automaticRemovalDate;	// 80 = 0x50
    NSSet *_trustedCertificatePersistentIds;	// 88 = 0x58
    NSSet *_validTrustedCertificatePersistentIds;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d8dc
+ (id)keyPathsForValuesAffectingExpired;	// IMP=0x000000000002d1b6
+ (id)stringForType:(unsigned long long)arg1;	// IMP=0x000000000002d17d
+ (id)new;	// IMP=0x000000000002e6e2
- (void).cxx_destruct;	// IMP=0x000000000002e678
@property(nonatomic) _Bool mustRequestUnenroll; // @synthesize mustRequestUnenroll=_mustRequestUnenroll;
@property(retain, nonatomic) NSSet *validTrustedCertificatePersistentIds; // @synthesize validTrustedCertificatePersistentIds=_validTrustedCertificatePersistentIds;
@property(retain, nonatomic) NSSet *trustedCertificatePersistentIds; // @synthesize trustedCertificatePersistentIds=_trustedCertificatePersistentIds;
@property(nonatomic) _Bool studentCredentialsAreValid; // @synthesize studentCredentialsAreValid=_studentCredentialsAreValid;
@property(retain, nonatomic) NSDate *automaticRemovalDate; // @synthesize automaticRemovalDate=_automaticRemovalDate;
@property(nonatomic, getter=isRequestingUnenroll) _Bool requestingUnenroll; // @synthesize requestingUnenroll=_requestingUnenroll;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSDictionary *instructorsByIdentifier; // @synthesize instructorsByIdentifier=_instructorsByIdentifier;
@property(retain, nonatomic) CRKUser *courseUser; // @synthesize courseUser=_courseUser;
@property(nonatomic) unsigned long long courseColorType; // @synthesize courseColorType=_courseColorType;
@property(nonatomic) unsigned long long courseMascotType; // @synthesize courseMascotType=_courseMascotType;
@property(copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e2e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002deea
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d8e4
- (_Bool)isDeeplyEqual:(id)arg1;	// IMP=0x000000000002d56a
- (_Bool)isEqualToCourse:(id)arg1;	// IMP=0x000000000002d4ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d448
- (unsigned long long)hash;	// IMP=0x000000000002d404
- (id)description;	// IMP=0x000000000002d2db
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (void)setManaged:(_Bool)arg1;	// IMP=0x000000000002d165
@property(readonly, nonatomic) _Bool allowsUnenroll;
@property(readonly, nonatomic, getter=isManaged) _Bool managed;
- (id)initWithIdentifier:(id)arg1 managed:(_Bool)arg2;	// IMP=0x000000000002d105
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000002d016
- (id)init;	// IMP=0x000000000002e786

@end

