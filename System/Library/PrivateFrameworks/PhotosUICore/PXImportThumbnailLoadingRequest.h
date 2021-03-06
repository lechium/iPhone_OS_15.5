//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHImportAssetDataRequest, PXImportItemViewModel;

@interface PXImportThumbnailLoadingRequest : NSObject
{
    PXImportItemViewModel *_importItem;	// 8 = 0x8
    long long _requestID;	// 16 = 0x10
    unsigned long long _requestSize;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    PHImportAssetDataRequest *_assetDataRequest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000014a4e6
@property(retain) PHImportAssetDataRequest *assetDataRequest; // @synthesize assetDataRequest=_assetDataRequest;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) __weak PXImportItemViewModel *importItem; // @synthesize importItem=_importItem;
- (id)initWithImportItem:(id)arg1 requestID:(long long)arg2 requestSize:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000014a3d4

@end

