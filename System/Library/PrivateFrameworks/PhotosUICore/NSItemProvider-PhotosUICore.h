//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSItemProvider.h>

@interface NSItemProvider (PhotosUICore)
+ (id)px_fileProviderItemProviderForAsset:(id)arg1 usage:(long long)arg2 fileProviderManager:(id)arg3 domain:(id)arg4;	// IMP=0x000000000064fb83
+ (id)px_fileProviderItemProviderForAsset:(id)arg1 usage:(long long)arg2 domain:(id)arg3;	// IMP=0x000000000064f943
+ (id)px_fileProviderItemProviderForDisplayAsset:(id)arg1 usage:(long long)arg2 domain:(id)arg3;	// IMP=0x000000000064f67f
+ (id)px_dragAndDropFileProviderDomain;	// IMP=0x000000000064f64f
+ (void)px_asynchronousAddDragAndDropFileProviderDomain;	// IMP=0x000000000064f5f8
+ (id)px_synchronousAddPhotosPickerFileProviderDomain:(id *)arg1;	// IMP=0x000000000064f3da
- (long long)_px_shareMediaTypeFromUniformTypeIdentifier:(id)arg1;	// IMP=0x000000000010e14a
- (id)_px_sharedMediaVideoComplementFromURL:(id)arg1;	// IMP=0x000000000010e0fd
- (id)_px_assetResourceBagsFromUniformTypeIdentifier:(id)arg1 atURL:(id)arg2;	// IMP=0x000000000010de37
- (long long)_px_assetResourceTypeFromUniformTypeIdentifier:(id)arg1;	// IMP=0x000000000010dd96
- (_Bool)_px_isSupportedUniformTypeIdentifier:(id)arg1;	// IMP=0x000000000010dd0c
- (id)_px_bestTypeIdentifierForItemProvider:(id)arg1;	// IMP=0x000000000010da28
- (void)px_createStreamShareSourceWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010d94a
- (void)px_createAssetWithImportSessionID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000010d77d
- (void)_px_registerFileRepresentationForTypeIdentifier:(id)arg1 visibility:(long long)arg2 fileProviderManager:(id)arg3 domain:(id)arg4 asset:(id)arg5 shouldRequestCurrentIfPossible:(_Bool)arg6;	// IMP=0x000000000064eae8
- (void)_px_registerFileRepresentationsForAsset:(id)arg1 usage:(long long)arg2 fileProviderManager:(id)arg3 domain:(id)arg4 shouldRequestCurrentIfPossible:(_Bool)arg5;	// IMP=0x000000000064e43e
- (void)px_registerFileRepresentationsForAsset:(id)arg1 usage:(long long)arg2 domain:(id)arg3 shouldRequestCurrentIfPossible:(_Bool)arg4;	// IMP=0x000000000064e392
@end
