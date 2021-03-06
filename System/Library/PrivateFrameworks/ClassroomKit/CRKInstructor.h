//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class DMFControlSessionIdentifier, NSData, NSDictionary, NSString;

@interface CRKInstructor : NSObject <NSSecureCoding>
{
    _Bool _disallowsClassroomAirDropOverLocalNetwork;	// 8 = 0x8
    _Bool _allowsStudentInitiatedDisconnection;	// 9 = 0x9
    _Bool _observingStudentScreen;	// 10 = 0xa
    DMFControlSessionIdentifier *_sessionIdentifier;	// 16 = 0x10
    NSString *_userIdentifier;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_courseName;	// 40 = 0x28
    NSData *_imageData;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001daaf
- (void).cxx_destruct;	// IMP=0x000000000001e0d0
@property(nonatomic, getter=isObservingStudentScreen) _Bool observingStudentScreen; // @synthesize observingStudentScreen=_observingStudentScreen;
@property(nonatomic) _Bool allowsStudentInitiatedDisconnection; // @synthesize allowsStudentInitiatedDisconnection=_allowsStudentInitiatedDisconnection;
@property(nonatomic) _Bool disallowsClassroomAirDropOverLocalNetwork; // @synthesize disallowsClassroomAirDropOverLocalNetwork=_disallowsClassroomAirDropOverLocalNetwork;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) DMFControlSessionIdentifier *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dde7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001dab7
- (_Bool)isEqualToInstructor:(id)arg1;	// IMP=0x000000000001d764
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d701
- (unsigned long long)hash;	// IMP=0x000000000001d693
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;

@end

