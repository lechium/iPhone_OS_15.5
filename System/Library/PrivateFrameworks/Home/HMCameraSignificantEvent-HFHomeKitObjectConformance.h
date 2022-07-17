//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraSignificantEvent.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class NSString, NSUUID;

@interface HMCameraSignificantEvent (HFHomeKitObjectConformance) <HFHomeKitObject>
- (id)hf_reasonKey;	// IMP=0x000000000025e2d6
- (id)hf_faceClassificationName;	// IMP=0x000000000025e25c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
