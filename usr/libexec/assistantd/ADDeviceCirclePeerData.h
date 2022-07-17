//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFHomeAccessoryInfo, NSString;

@interface ADDeviceCirclePeerData : NSObject
{
    NSString *_aceVersion;	// 8 = 0x8
    NSString *_assistantIdentifier;	// 16 = 0x10
    NSString *_buildVersion;	// 24 = 0x18
    NSString *_productType;	// 32 = 0x20
    NSString *_sharedUserIdentifier;	// 40 = 0x28
    NSString *_userAssignedDeviceName;	// 48 = 0x30
    NSString *_userInterfaceIdiom;	// 56 = 0x38
    AFHomeAccessoryInfo *_homeAccessoryInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000011ea75
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000011f7f1
- (void).cxx_destruct;	// IMP=0x001000000011f2d6
@property(readonly, copy, nonatomic) AFHomeAccessoryInfo *homeAccessoryInfo; // @synthesize homeAccessoryInfo=_homeAccessoryInfo;
@property(readonly, copy, nonatomic) NSString *userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(readonly, copy, nonatomic) NSString *userAssignedDeviceName; // @synthesize userAssignedDeviceName=_userAssignedDeviceName;
@property(readonly, copy, nonatomic) NSString *sharedUserIdentifier; // @synthesize sharedUserIdentifier=_sharedUserIdentifier;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(readonly, copy, nonatomic) NSString *aceVersion; // @synthesize aceVersion=_aceVersion;
- (id)buildDictionaryRepresentation;	// IMP=0x001000000011f117
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000011ed7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000011ec97
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000011ea7d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011ea6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011e76c
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000011e2ab
@property(readonly, copy) NSString *description;
- (id)initWithAceVersion:(id)arg1 assistantIdentifier:(id)arg2 buildVersion:(id)arg3 productType:(id)arg4 sharedUserIdentifier:(id)arg5 userAssignedDeviceName:(id)arg6 userInterfaceIdiom:(id)arg7 homeAccessoryInfo:(id)arg8;	// IMP=0x001000000011e0f2
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000011f860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
