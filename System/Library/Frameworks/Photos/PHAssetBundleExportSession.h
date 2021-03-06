//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PHAsset;

@interface PHAssetBundleExportSession : NSObject
{
    NSString *_customFilenameBase;	// 8 = 0x8
    NSString *_sessionUUID;	// 16 = 0x10
    PHAsset *_asset;	// 24 = 0x18
    NSDictionary *_fileURLs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000020f702
@property(readonly, nonatomic) NSDictionary *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(copy, nonatomic) NSString *customFilenameBase; // @synthesize customFilenameBase=_customFilenameBase;
- (id)_createAssetBundleFromAsset:(id)arg1 withFileURLs:(id)arg2 atURL:(id)arg3 withError:(id *)arg4;	// IMP=0x000000000020e37e
- (id)_filenameBaseForAsset:(id)arg1;	// IMP=0x000000000020e0ce
- (void)writeToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000020dfd5
- (id)initWithAsset:(id)arg1 withAssetExportRequestFileURLs:(id)arg2;	// IMP=0x000000000020dee2

@end

