//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPassSelectionFieldDetectorManagerDelegate-Protocol.h>

@class NPKPassSelectionFieldDetectorListener, NPKPassSelectionFieldDetectorManager, NSString;
@protocol NPKPassSelectionFieldDetectorListener, NPKRemotePassSelectionFieldDetectorListenerCoordinator;

@interface NPKPassSelectionFieldDetectorCoordinator : NSObject <NPKPassSelectionFieldDetectorManagerDelegate>
{
    NPKPassSelectionFieldDetectorListener *_localFieldDetectorListener;	// 8 = 0x8
    NPKPassSelectionFieldDetectorManager *_passSelectionFieldDetectorManager;	// 16 = 0x10
    id <NPKRemotePassSelectionFieldDetectorListenerCoordinator> _remoteFieldDetectListenerCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016d994
@property(readonly, nonatomic) id <NPKRemotePassSelectionFieldDetectorListenerCoordinator> remoteFieldDetectListenerCoordinator; // @synthesize remoteFieldDetectListenerCoordinator=_remoteFieldDetectListenerCoordinator;
@property(readonly, nonatomic) NPKPassSelectionFieldDetectorManager *passSelectionFieldDetectorManager; // @synthesize passSelectionFieldDetectorManager=_passSelectionFieldDetectorManager;
- (void)passSelectionFieldDetectManager:(id)arg1 didEnterFieldForPassWithUniqueID:(id)arg2;	// IMP=0x000000000016d743
@property(readonly, nonatomic) id <NPKPassSelectionFieldDetectorListener> localFieldDetectorListener;
- (id)initWithNPKPassSelectionFieldDetectorManager:(id)arg1 remoteFieldDetectListenerCoordinator:(id)arg2;	// IMP=0x000000000016d66f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

