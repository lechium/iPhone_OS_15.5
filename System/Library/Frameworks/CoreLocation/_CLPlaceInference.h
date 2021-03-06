//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class CLLocation, CLPlacemark, NSString, NSUUID;

@interface _CLPlaceInference : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _userType;	// 8 = 0x8
    unsigned long long _placeType;	// 16 = 0x10
    CLPlacemark *_placemark;	// 24 = 0x18
    CLLocation *_referenceLocation;	// 32 = 0x20
    double _confidence;	// 40 = 0x28
    NSString *_preferredName;	// 48 = 0x30
    NSUUID *__loiIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006c0a1
+ (unsigned long long)_placeInferencePlaceTypeFromRTPlaceType:(unsigned long long)arg1;	// IMP=0x000000000002cc86
+ (unsigned long long)_userSpecificPlaceTypeFromRTUserType:(unsigned long long)arg1;	// IMP=0x000000000002cbcd
@property(readonly, nonatomic) NSUUID *_loiIdentifier; // @synthesize _loiIdentifier=__loiIdentifier;
@property(readonly, nonatomic) NSString *preferredName; // @synthesize preferredName=_preferredName;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property(readonly, nonatomic) unsigned long long placeType; // @synthesize placeType=_placeType;
@property(readonly, nonatomic) unsigned long long userType; // @synthesize userType=_userType;
- (id)description;	// IMP=0x000000000006c3d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006c3ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006c273
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006c0a9
- (void)dealloc;	// IMP=0x000000000006c049
- (id)initWithUserType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 placemark:(id)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 preferredName:(id)arg6 loiIdentifier:(id)arg7;	// IMP=0x000000000006bfa9
- (id)_initWithRTPlaceInference:(id)arg1;	// IMP=0x000000000002ca48

@end

