//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMHomeManager, NSArray, NSOperationQueue, NSString;

@interface HMIHomeKitClient : HMFObject <HMFLogging>
{
    _Bool _setup;	// 8 = 0x8
    NSArray *_homes;	// 16 = 0x10
    NSOperationQueue *_homeKitOperationQueue;	// 24 = 0x18
    unsigned long long _cachePolicy;	// 32 = 0x20
    HMHomeManager *_homeManager;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000001a87d
- (void).cxx_destruct;	// IMP=0x000000000001a8e7
@property(retain) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, getter=isSetup) _Bool setup; // @synthesize setup=_setup;
@property(readonly) NSOperationQueue *homeKitOperationQueue; // @synthesize homeKitOperationQueue=_homeKitOperationQueue;
- (void)setup;	// IMP=0x000000000001a0e5
- (id)homeWithCameraProfileUUID:(id)arg1;	// IMP=0x0000000000019d03
- (id)cameraProfileWithUUID:(id)arg1;	// IMP=0x0000000000019938
- (_Bool)isCurrentDevicePrimaryResident;	// IMP=0x0000000000019663
- (id)photosPersonManagerForHomeUUID:(id)arg1 sourceUUID:(id)arg2;	// IMP=0x0000000000019593
- (id)homePersonManagersForCurrentDevice;	// IMP=0x000000000001924f
- (id)homeForHMPersonManagerUUID:(id)arg1;	// IMP=0x0000000000019107
- (id)homePersonManagerForHomeUUID:(id)arg1;	// IMP=0x0000000000019056
@property(readonly) NSArray *homes; // @synthesize homes=_homes;
- (id)initWithCachePolicy:(unsigned long long)arg1;	// IMP=0x0000000000018f5b
- (id)initWithNoCaching;	// IMP=0x0000000000018f47
- (id)init;	// IMP=0x0000000000018f30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

