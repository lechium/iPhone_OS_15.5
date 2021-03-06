//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSAsset, NSError;

@interface CLSAssetUploadObserver : NSObject
{
    _Bool _uploaded;	// 8 = 0x8
    double uploadProgress;	// 16 = 0x10
    NSError *uploadError;	// 24 = 0x18
    CLSAsset *_asset;	// 32 = 0x20
    CDUnknownBlockType _onUploadProgress;	// 40 = 0x28
    CDUnknownBlockType _onUploadComplete;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000575a
@property(nonatomic, getter=isUploaded) _Bool uploaded; // @synthesize uploaded=_uploaded;
@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;
@property(copy, nonatomic) CDUnknownBlockType onUploadProgress; // @synthesize onUploadProgress=_onUploadProgress;
@property(retain, nonatomic) CLSAsset *asset; // @synthesize asset=_asset;
- (void)stopObserving;	// IMP=0x00000000000056b8
- (void)startObserving;	// IMP=0x000000000000566c
@property(readonly) NSError *uploadError; // @synthesize uploadError;
@property(readonly) double uploadProgress; // @synthesize uploadProgress;
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000000551d

@end

