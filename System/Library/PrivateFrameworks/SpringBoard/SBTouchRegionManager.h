//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayLayoutObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>

@class FBSDisplayLayoutMonitor, NSString, SBBackBoardServicesInterface, SBMedusa1oSettings;
@protocol OS_dispatch_queue;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    SBBackBoardServicesInterface *_queue_bksInterface;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;	// 24 = 0x18
    SBMedusa1oSettings *_medusaSettings;	// 32 = 0x20
    double _queue_touchRegionBuffer;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000003e615d
- (void).cxx_destruct;	// IMP=0x00000000003e781d
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000003e77c5
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000003036a
- (void)_queue_displayLayoutDidUpdate:(id)arg1;	// IMP=0x00000000000304e7
- (id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect)arg1;	// IMP=0x00000000003e7564
- (id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg1;	// IMP=0x00000000000308e7
- (id)_queue_calculateTouchRegionsFromSceneRects:(id)arg1;	// IMP=0x0000000000030a17
- (id)displayLayoutMonitor;	// IMP=0x00000000003e66b1
- (void)setDisplayLayoutMonitor:(id)arg1;	// IMP=0x00000000003e65cf
- (void)setTouchRegionBuffer:(double)arg1;	// IMP=0x00000000003e656b
- (double)touchRegionBuffer;	// IMP=0x00000000003e64bf
- (void)dealloc;	// IMP=0x00000000003e6381
- (id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2;	// IMP=0x00000000003e6229
- (id)init;	// IMP=0x00000000003e61b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

