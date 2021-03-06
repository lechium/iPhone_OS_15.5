//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions>
{
    _Bool _networkAccessAllowed;	// 8 = 0x8
    _Bool _shouldForceOriginalChoice;	// 9 = 0x9
    _Bool _dontAllowRAW;	// 10 = 0xa
    _Bool _forceRunAsUnadjustedAsset;	// 11 = 0xb
    _Bool _forceReturnFullLivePhoto;	// 12 = 0xc
    _Bool _forcePrepareCurrentBaseVersionInAddition;	// 13 = 0xd
    _Bool _editAsOvercapture;	// 14 = 0xe
    _Bool _loadResourcesToFlip;	// 15 = 0xf
    _Bool _skipDisplaySizeImage;	// 16 = 0x10
    _Bool _skipLivePhotoImageAndAVAsset;	// 17 = 0x11
    CDUnknownBlockType _canHandleAdjustmentData;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    long long _contentMode;	// 40 = 0x28
    CDUnknownBlockType _canHandleRAW;	// 48 = 0x30
    unsigned long long _originalChoice;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;	// 64 = 0x40
    struct CGSize _targetSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000e6543
@property(nonatomic) _Bool skipLivePhotoImageAndAVAsset; // @synthesize skipLivePhotoImageAndAVAsset=_skipLivePhotoImageAndAVAsset;
@property(nonatomic) _Bool skipDisplaySizeImage; // @synthesize skipDisplaySizeImage=_skipDisplaySizeImage;
@property(nonatomic) _Bool loadResourcesToFlip; // @synthesize loadResourcesToFlip=_loadResourcesToFlip;
@property(nonatomic) _Bool editAsOvercapture; // @synthesize editAsOvercapture=_editAsOvercapture;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) _Bool forcePrepareCurrentBaseVersionInAddition; // @synthesize forcePrepareCurrentBaseVersionInAddition=_forcePrepareCurrentBaseVersionInAddition;
@property(nonatomic) _Bool forceReturnFullLivePhoto; // @synthesize forceReturnFullLivePhoto=_forceReturnFullLivePhoto;
@property(nonatomic) _Bool forceRunAsUnadjustedAsset; // @synthesize forceRunAsUnadjustedAsset=_forceRunAsUnadjustedAsset;
@property(nonatomic) unsigned long long originalChoice; // @synthesize originalChoice=_originalChoice;
@property(copy, nonatomic) CDUnknownBlockType canHandleRAW; // @synthesize canHandleRAW=_canHandleRAW;
@property(nonatomic) _Bool dontAllowRAW; // @synthesize dontAllowRAW=_dontAllowRAW;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) _Bool shouldForceOriginalChoice; // @synthesize shouldForceOriginalChoice=_shouldForceOriginalChoice;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(copy, nonatomic) CDUnknownBlockType canHandleAdjustmentData; // @synthesize canHandleAdjustmentData=_canHandleAdjustmentData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e616f
- (_Bool)isSynchronous;	// IMP=0x000000000020ba01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

