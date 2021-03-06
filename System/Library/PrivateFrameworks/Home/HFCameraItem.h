//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFCompoundItemProtocol-Protocol.h>

@class HMCameraProfile, NSArray, NSString;
@protocol HFHomeKitObject;

@interface HFCameraItem <HFCompoundItemProtocol>
{
}

+ (_Bool)shouldIgnoreStreamErrorForCameraSettings:(id)arg1;	// IMP=0x00000000002403c4
+ (_Bool)shouldReportNotificationsAsDisabledForProfile:(id)arg1;	// IMP=0x000000000023f7dc
+ (_Bool)cameraContainsMotionServiceItem:(id)arg1;	// IMP=0x000000000023f70d
+ (void)getErrorDescription:(out id *)arg1 detailedErrorDescription:(out id *)arg2 forCameraStreamError:(id)arg3;	// IMP=0x000000000023f598
@property(readonly, nonatomic) id <HFHomeKitObject> primaryHomeKitObject;
@property(readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property(readonly, nonatomic) _Bool isCompoundItem;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000023f953
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, nonatomic) NSArray *allHomeKitObjects;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, nonatomic) HMCameraProfile *profile; // @dynamic profile;
@property(readonly) Class superclass;

@end

