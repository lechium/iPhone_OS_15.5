//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCSControlCenterDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;	// IMP=0x000000000000399f
- (unsigned long long)_defaultPresentationGesture;	// IMP=0x0000000000003b9c
- (void)_bindAndRegisterDefaults;	// IMP=0x0000000000003a0d
- (id)init;	// IMP=0x00000000000039f4

// Remaining properties
@property(nonatomic) unsigned long long presentationGesture; // @dynamic presentationGesture;
@property(nonatomic) _Bool shouldEnableInternalModules; // @dynamic shouldEnableInternalModules;
@property(nonatomic) _Bool shouldEnablePrototypeFeatures; // @dynamic shouldEnablePrototypeFeatures;
@property(nonatomic) unsigned long long userInvocationCount; // @dynamic userInvocationCount;

@end
