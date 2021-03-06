//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXAssetControllerObserver-Protocol.h>

@class AXAssetController, NSString, NSURL;

@interface AXMImageCaptionModelAssetManager : NSObject <AXAssetControllerObserver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _didTryWaitingForAssetLookup;	// 12 = 0xc
    AXAssetController *_assetController;	// 16 = 0x10
    NSURL *_baseURL;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000000328de
- (void).cxx_destruct;	// IMP=0x00000000000333ff
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)assetController:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000330a9
- (void)_performWithLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003306c
- (id)_modelURLForType:(unsigned long long)arg1 baseURL:(id)arg2;	// IMP=0x0000000000032f02
- (id)infoForModelAtURL:(id)arg1;	// IMP=0x0000000000032d4a
- (id)modelURLForType:(unsigned long long)arg1 timeout:(double)arg2;	// IMP=0x0000000000032a09
- (id)init;	// IMP=0x0000000000032933

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

