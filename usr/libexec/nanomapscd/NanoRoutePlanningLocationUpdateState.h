//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SingleLocationUpdate;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningLocationUpdateState
{
    SingleLocationUpdate *_locationUpdater;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000fc50
- (void)stop;	// IMP=0x001000000000fc18
- (void)_handleLocation:(id)arg1 error:(id)arg2;	// IMP=0x001000000000f96f
- (void)start;	// IMP=0x001000000000f613
- (id)initWithStateManager:(id)arg1 isolationQueue:(id)arg2;	// IMP=0x001000000000f5b6

@end

