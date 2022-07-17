//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAudioCueProvider-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSMutableArray, NSString, PXFlexMusicLibrary;
@protocol OS_dispatch_queue;

@interface PXFlexMusicCueProvider : NSObject <PXChangeObserver, PXAudioCueProvider>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PXFlexMusicLibrary *_library;	// 16 = 0x10
    NSMutableArray *_requests;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000688e6a
- (void)_deliverCuesIfNeeded;	// IMP=0x0000000000688db5
- (void)_fetchCuesForAudioAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000688c72
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000688c16
- (id)requestCuesForAudioAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000688a03
- (id)init;	// IMP=0x0000000000688925

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
