//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteLineObserverProtocol-Protocol.h>

@class VKRouteLine;

__attribute__((visibility("hidden")))
@interface VKRouteLineObserver : NSObject <VKRouteLineObserverProtocol>
{
    void *_transitSupport;	// 8 = 0x8
    VKRouteLine *_routeLine;	// 16 = 0x10
}

- (void)routeLineDidUpdateSections:(id)arg1;	// IMP=0x0000000000479acd
- (void)dealloc;	// IMP=0x0000000000479a89
- (id)initWithTransitSupport:(void *)arg1 andRouteLine:(id)arg2;	// IMP=0x0000000000479a24

@end

