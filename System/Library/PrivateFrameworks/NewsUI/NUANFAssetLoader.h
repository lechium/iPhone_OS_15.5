//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, NSArray, NSMutableDictionary, SXContext;

@interface NUANFAssetLoader : NSObject
{
    long long _relativePriority;	// 8 = 0x8
    SXContext *_context;	// 16 = 0x10
    FCFlintResourceManager *_flintResourceManager;	// 24 = 0x18
    NSArray *_resourceIDs;	// 32 = 0x20
    NSMutableDictionary *_fetchedResourceIDs;	// 40 = 0x28
    FCAsyncOnceOperation *_assetURLsOperation;	// 48 = 0x30
    FCAsyncOnceOperation *_assetsOperation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000400ba
@property(readonly, nonatomic) FCAsyncOnceOperation *assetsOperation; // @synthesize assetsOperation=_assetsOperation;
@property(retain, nonatomic) FCAsyncOnceOperation *assetURLsOperation; // @synthesize assetURLsOperation=_assetURLsOperation;
@property(retain, nonatomic) NSMutableDictionary *fetchedResourceIDs; // @synthesize fetchedResourceIDs=_fetchedResourceIDs;
@property(retain, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) SXContext *context; // @synthesize context=_context;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
- (id)assetDownloadOperationForResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ff7f
- (id)asyncLoadAssetsOnceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003fca2
- (id)asyncLoadAssetURLsOnceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003faa4
- (id)fallbackResourceForID:(id)arg1;	// IMP=0x000000000003fa21
- (id)resourceForID:(id)arg1;	// IMP=0x000000000003f99e
- (id)resourceIDForResourceURL:(id)arg1;	// IMP=0x000000000003f909
- (id)loadAssetWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003f4e7
- (id)loadAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f464
- (id)loadAssetURLsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f3e1
- (id)initWithContext:(id)arg1 flintResourceManager:(id)arg2;	// IMP=0x000000000003f185

@end

