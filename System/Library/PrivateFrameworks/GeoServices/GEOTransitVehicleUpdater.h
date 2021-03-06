//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GEOTransitVehicleUpdaterDelegate;

@interface GEOTransitVehicleUpdater : NSObject
{
    id <GEOTransitVehicleUpdaterDelegate> _delegate;	// 8 = 0x8
    _Bool _active;	// 16 = 0x10
    NSSet *_tripIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031ca31
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSSet *tripIDs; // @synthesize tripIDs=_tripIDs;
@property(nonatomic) __weak id <GEOTransitVehicleUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000031c591
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000031c447

@end

