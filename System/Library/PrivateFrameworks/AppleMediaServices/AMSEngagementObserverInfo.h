//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface AMSEngagementObserverInfo : NSObject
{
    NSMutableSet *_underlyingPlacements;	// 8 = 0x8
    NSMutableSet *_underlyingServiceTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000127433
@property(retain, nonatomic) NSMutableSet *underlyingServiceTypes; // @synthesize underlyingServiceTypes=_underlyingServiceTypes;
@property(retain, nonatomic) NSMutableSet *underlyingPlacements; // @synthesize underlyingPlacements=_underlyingPlacements;
- (void)removeServiceType:(id)arg1;	// IMP=0x000000000012738b
- (void)addServiceType:(id)arg1;	// IMP=0x0000000000127319
- (void)removePlacement:(id)arg1;	// IMP=0x00000000001272a7
- (void)addPlacement:(id)arg1;	// IMP=0x0000000000127235
@property(readonly, nonatomic) NSSet *serviceTypes;
@property(readonly, nonatomic) NSSet *placements;
- (id)init;	// IMP=0x00000000001270b2

@end
