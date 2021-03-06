//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFNamingComponents : NSObject
{
    _Bool _isAccessory;	// 8 = 0x8
    _Bool _isDiscoveredAccessory;	// 9 = 0x9
    _Bool _isService;	// 10 = 0xa
    _Bool _isChildService;	// 11 = 0xb
    _Bool _isServiceGroup;	// 12 = 0xc
    _Bool _isMediaAccessoryOrStereoPair;	// 13 = 0xd
    _Bool _isTelevision;	// 14 = 0xe
    _Bool _allowsEmptyNameTextField;	// 15 = 0xf
    _Bool _allowsNullResettableName;	// 16 = 0x10
    id _homeKitObject;	// 24 = 0x18
}

+ (id)namingComponentFromHomeKitObject:(id)arg1;	// IMP=0x00000000002076b2
+ (id)namingComponentFromDiscoveredAccessory:(id)arg1;	// IMP=0x00000000002075c0
+ (id)namingComponentFromMediaSystem:(id)arg1;	// IMP=0x000000000020752c
+ (id)namingComponentFromAccessory:(id)arg1;	// IMP=0x000000000020742b
+ (id)namingComponentFromServiceGroup:(id)arg1;	// IMP=0x00000000002073ac
+ (id)namingComponentFromService:(id)arg1;	// IMP=0x00000000002072b3
- (void).cxx_destruct;	// IMP=0x00000000002085d4
@property(nonatomic) _Bool allowsNullResettableName; // @synthesize allowsNullResettableName=_allowsNullResettableName;
@property(nonatomic) _Bool allowsEmptyNameTextField; // @synthesize allowsEmptyNameTextField=_allowsEmptyNameTextField;
@property(nonatomic) _Bool isTelevision; // @synthesize isTelevision=_isTelevision;
@property(nonatomic) _Bool isMediaAccessoryOrStereoPair; // @synthesize isMediaAccessoryOrStereoPair=_isMediaAccessoryOrStereoPair;
@property(nonatomic) _Bool isServiceGroup; // @synthesize isServiceGroup=_isServiceGroup;
@property(nonatomic) _Bool isChildService; // @synthesize isChildService=_isChildService;
@property(nonatomic) _Bool isService; // @synthesize isService=_isService;
@property(nonatomic) _Bool isDiscoveredAccessory; // @synthesize isDiscoveredAccessory=_isDiscoveredAccessory;
@property(nonatomic) _Bool isAccessory; // @synthesize isAccessory=_isAccessory;
@property(readonly, nonatomic) id homeKitObject; // @synthesize homeKitObject=_homeKitObject;
- (id)categoryName;	// IMP=0x00000000002082d5
- (id)configuredName;	// IMP=0x0000000000208235
@property(readonly, nonatomic) NSString *defaultName;
- (id)roomName;	// IMP=0x0000000000207fb6
- (id)commitableNameForString:(id)arg1;	// IMP=0x0000000000207eef
- (id)homeKitSafeStringForString:(id)arg1;	// IMP=0x0000000000207dd9
@property(readonly, nonatomic) NSString *textFieldDisplayText;
@property(readonly, nonatomic) NSString *placeholderText;
@property(readonly, nonatomic) NSString *name;
- (id)description;	// IMP=0x00000000002078cb
- (id)initWithHomeKitObject:(id)arg1;	// IMP=0x00000000002077ce

@end

