//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol COSWatchDiscoveryCoordinatorDelegate;

@interface COSWatchDiscoveryCoordinator : NSObject
{
    _Bool _discoveredWatchNearby;	// 8 = 0x8
    id <COSWatchDiscoveryCoordinatorDelegate> _delegate;	// 16 = 0x10
    NSTimer *_unpairedWatchDiscoveryTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002c9d2
@property(retain, nonatomic) NSTimer *unpairedWatchDiscoveryTimer; // @synthesize unpairedWatchDiscoveryTimer=_unpairedWatchDiscoveryTimer;
@property(nonatomic) __weak id <COSWatchDiscoveryCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool discoveredWatchNearby; // @synthesize discoveredWatchNearby=_discoveredWatchNearby;
- (_Bool)_foundNearbyAdvertisingWatches;	// IMP=0x001000000002c758
- (void)_checkForDiscoveredUnpairedWatches:(id)arg1;	// IMP=0x001000000002c6ba
- (void)_refreshWatchDiscoveryTimer;	// IMP=0x001000000002c60d
- (void)stopDiscoveringWatchNearby;	// IMP=0x001000000002c5db
- (void)startDiscoveringWatchNearby;	// IMP=0x001000000002c57c

@end

