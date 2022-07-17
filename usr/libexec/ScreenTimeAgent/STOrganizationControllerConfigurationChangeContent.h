//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, STConfigurationChange;

@interface STOrganizationControllerConfigurationChangeContent : NSObject
{
    STConfigurationChange *_configurationChange;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005471c
+ (long long)contentType;	// IMP=0x001000000005456e
- (void).cxx_destruct;	// IMP=0x00200000000548c5
@property(readonly, copy) STConfigurationChange *configurationChange; // @synthesize configurationChange=_configurationChange;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToOrganizationControllerConfigurationChangeContent:(id)arg1;	// IMP=0x00100000000547d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000005476d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000054724
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000546a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000054616
@property(readonly, copy) NSString *description;
- (id)initWithConfigurationChange:(id)arg1;	// IMP=0x00100000000544f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
