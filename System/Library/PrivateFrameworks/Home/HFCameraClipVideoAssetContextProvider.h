//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraClipVideoAssetContextProviderDelegate-Protocol.h>

@class HMFUnfairLock, NSMutableDictionary, NSOperationQueue, NSString;
@protocol HFCameraClipVideoAssetContextProviderDelegate;

@interface HFCameraClipVideoAssetContextProvider : NSObject <HFCameraClipVideoAssetContextProviderDelegate>
{
    NSOperationQueue *_operationQueue;	// 8 = 0x8
    NSMutableDictionary *_videoContextFuturesByClipID;	// 16 = 0x10
    HMFUnfairLock *_lock;	// 24 = 0x18
    id <HFCameraClipVideoAssetContextProviderDelegate> _delegate;	// 32 = 0x20
}

+ (id)defaultProvider;	// IMP=0x00000000002348e4
- (void).cxx_destruct;	// IMP=0x00000000002352b6
@property(readonly, nonatomic) __weak id <HFCameraClipVideoAssetContextProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSMutableDictionary *videoContextFuturesByClipID; // @synthesize videoContextFuturesByClipID=_videoContextFuturesByClipID;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)cachedVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;	// IMP=0x000000000023526d
- (id)newFetchVideoAssetContextOperationForClip:(id)arg1 clipManager:(id)arg2;	// IMP=0x0000000000235201
- (id)fetchVideoAssetContextForClip:(id)arg1 clipManager:(id)arg2;	// IMP=0x0000000000234a5e
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000023496f
- (id)init;	// IMP=0x000000000023495a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
