//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSString, PHFetchResult, PHPhotoLibrary;
@protocol OS_dispatch_queue, PXFetchResultCountObserverDelegate;

@interface PXFetchResultCountObserver : NSObject <PHPhotoLibraryChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    long long _fetchResultCount;	// 24 = 0x18
    PHFetchResult *_fetchResult;	// 32 = 0x20
    id <PXFetchResultCountObserverDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005b4858
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PXFetchResultCountObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic) long long fetchResultCount; // @synthesize fetchResultCount=_fetchResultCount;
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000000005b45b2
- (void)_serialQueue_acquireFetchResultFromBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005b433b
- (id)initWithQOSClass:(unsigned int)arg1 photoLibrary:(id)arg2 fetchResultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005b4090
- (id)init;	// IMP=0x00000000005b4016

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
