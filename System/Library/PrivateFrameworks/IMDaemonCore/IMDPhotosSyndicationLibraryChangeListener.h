//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString, PHFetchOptions, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>
{
    PHFetchOptions *_analysisFetchOptions;	// 8 = 0x8
    PHPhotoLibrary *_syndicationLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_changeObservationQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000061b18
- (void).cxx_destruct;	// IMP=0x00000000000622aa
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue; // @synthesize changeObservationQueue=_changeObservationQueue;
@property(readonly, nonatomic) PHPhotoLibrary *syndicationLibrary; // @synthesize syndicationLibrary=_syndicationLibrary;
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000000061f21
@property(readonly, nonatomic) PHFetchOptions *analysisFetchOptions; // @synthesize analysisFetchOptions=_analysisFetchOptions;
- (void)stopListening;	// IMP=0x0000000000061d0a
- (void)startListening;	// IMP=0x0000000000061ca4
- (void)dealloc;	// IMP=0x0000000000061c66
- (id)init;	// IMP=0x0000000000061b6d
- (_Bool)__im_ff_photoAnalysisInSpotlightEnabled;	// IMP=0x0000000000061acd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

