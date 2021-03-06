//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKComplicationCollectionObserver-Protocol.h>

@class NSString, NTKFaceSnapshottingWindow;

@interface NTKFaceSnapshotter : NSObject <NTKComplicationCollectionObserver>
{
    NTKFaceSnapshottingWindow *_snapshotWindow;	// 8 = 0x8
}

+ (id)renderSnapshotAndTexture:(id *)arg1 fromWindow:(id)arg2;	// IMP=0x000000000007a165
+ (id)renderSnapshotFromWindow:(id)arg1;	// IMP=0x000000000007a153
+ (id)defaultModernSnapshotOptions;	// IMP=0x000000000007816f
- (void).cxx_destruct;	// IMP=0x000000000007a2d0
- (void)complicationCollectionDidLoad:(id)arg1;	// IMP=0x000000000007a26c
- (void)dealloc;	// IMP=0x000000000007a225
- (void)_hideSnapshotWindow;	// IMP=0x000000000007a1ee
- (void)_showSnapshotWindowForDevice:(id)arg1;	// IMP=0x000000000007a177
- (void)_mainQueue_serviceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000079411
- (id)viewControllerForFace:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000000079137
- (void)provideSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078ffb
- (void)_queue_serviceRequestIfIdle;	// IMP=0x0000000000078c9f
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007878e
- (void)_setupNotificationForCollectionLoadForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078557
- (id)init;	// IMP=0x00000000000781e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

