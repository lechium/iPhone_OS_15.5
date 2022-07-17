//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMMessageEncoding-Protocol.h>

@class NSArray, NSString;

@interface HMSiriEndpointApplyOnboardingSelectionsResponsePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding>
{
    long long _onboardingResult;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000002112de
+ (id)shortDescription;	// IMP=0x00000000002112cc
@property(readonly) long long onboardingResult; // @synthesize onboardingResult=_onboardingResult;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021120e
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000210f91
- (id)payloadCopy;	// IMP=0x0000000000210ed9
- (id)initWithOnboardingResult:(long long)arg1;	// IMP=0x0000000000210e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end
