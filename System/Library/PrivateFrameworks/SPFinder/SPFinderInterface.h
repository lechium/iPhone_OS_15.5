//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject
{
    SPAdvertisementCache *_advertisementCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000051d3
@property(retain, nonatomic) SPAdvertisementCache *advertisementCache; // @synthesize advertisementCache=_advertisementCache;
- (id)stateManager;	// IMP=0x00000000000051a9
- (id)finderStateManager;	// IMP=0x0000000000005190
- (id)beaconPayloadCache;	// IMP=0x0000000000005155

@end

