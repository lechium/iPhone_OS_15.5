//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSPDroppedPin, NSArray, NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MapsPinsController : NSObject
{
    NSObject<OS_dispatch_queue> *_pinsAsyncQueue;	// 8 = 0x8
    NSHashTable *_pinObservers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writeQ;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSArray *_pins;	// 40 = 0x28
}

+ (id)sharedController;	// IMP=0x00200000006418d2
- (void).cxx_destruct;	// IMP=0x00200000006428d9
@property(retain, nonatomic) NSArray *pins; // @synthesize pins=_pins;
- (void)updateDroppedPin:(id)arg1;	// IMP=0x00100000006427f2
- (void)_notifySearchManager;	// IMP=0x0010000000642709
- (void)_save;	// IMP=0x0010000000642562
- (void)_handleNewOrModifiedCustomSearchResult:(id)arg1;	// IMP=0x00100000006424e7
- (void)customSearchManager:(id)arg1 didModifyCustomSearchResult:(id)arg2 coordinateChanged:(_Bool)arg3;	// IMP=0x00100000006424cb
- (void)customSearchManager:(id)arg1 didReplaceCustomSearchResult:(id)arg2 animated:(_Bool)arg3 shouldSelectOnMap:(id)arg4 context:(id)arg5;	// IMP=0x001000000064246d
- (void)removePinsObserver:(id)arg1;	// IMP=0x0010000000642457
- (void)addPinsObserver:(id)arg1;	// IMP=0x00100000006423d5
- (void)_setDroppedPin:(id)arg1 informGizmo:(_Bool)arg2;	// IMP=0x00100000006420a6
- (void)getDroppedPinWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000641ea5
@property(readonly, nonatomic) MSPDroppedPin *droppedPin;
- (void)_createCompanionConnection;	// IMP=0x0010000000641afc
- (void)dealloc;	// IMP=0x0010000000641a79
- (id)init;	// IMP=0x0010000000641927

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

