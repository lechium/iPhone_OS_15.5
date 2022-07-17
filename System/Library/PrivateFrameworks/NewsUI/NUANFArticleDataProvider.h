//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleDataProvider-Protocol.h>

@class FCArticle, NFEventManager, NSArray, NSString, NUANFAssetLoader, NUANFContextLoader, NUANFFontLoader, NULinkedContentManager;
@protocol FCContentContext, NUEmbedDataManager, NUFontRegistration, SXHost;

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider>
{
    FCArticle *_article;	// 8 = 0x8
    NSArray *_linkedContentProviders;	// 16 = 0x10
    long long _relativePriority;	// 24 = 0x18
    NSString *_articleID;	// 32 = 0x20
    id <FCContentContext> _contentContext;	// 40 = 0x28
    id <NUFontRegistration> _fontRegistration;	// 48 = 0x30
    id <SXHost> _host;	// 56 = 0x38
    NUANFFontLoader *_fontLoader;	// 64 = 0x40
    NUANFContextLoader *_contextLoader;	// 72 = 0x48
    NUANFAssetLoader *_assetLoader;	// 80 = 0x50
    id <NUEmbedDataManager> _embedDataManger;	// 88 = 0x58
    NFEventManager *_eventManager;	// 96 = 0x60
    NULinkedContentManager *_linkedContentManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003b0ec
@property(readonly, nonatomic) NULinkedContentManager *linkedContentManager; // @synthesize linkedContentManager=_linkedContentManager;
@property(retain, nonatomic) NFEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) id <NUEmbedDataManager> embedDataManger; // @synthesize embedDataManger=_embedDataManger;
@property(retain, nonatomic) NUANFAssetLoader *assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) NUANFContextLoader *contextLoader; // @synthesize contextLoader=_contextLoader;
@property(retain, nonatomic) NUANFFontLoader *fontLoader; // @synthesize fontLoader=_fontLoader;
@property(readonly, nonatomic) id <SXHost> host; // @synthesize host=_host;
@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(readonly, nonatomic) NSArray *linkedContentProviders; // @synthesize linkedContentProviders=_linkedContentProviders;
@property(retain, nonatomic) FCArticle *article; // @synthesize article=_article;
- (void)setupAssetPrefetchCancellationWithOperation:(id)arg1;	// IMP=0x000000000003acc5
- (void)setupAssetPrefetchRequestEventsWithEvents:(id)arg1;	// IMP=0x000000000003a95c
- (void)reloadArticleIfNeeded;	// IMP=0x000000000003a57e
- (void)loadArticleWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039f8a
- (void)cancelAssetPrefetch;	// IMP=0x0000000000039ef6
- (void)prefetchAssets;	// IMP=0x0000000000039e27
- (void)loadContextWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038aa8
- (void)dealloc;	// IMP=0x00000000000389e0
- (id)initWithArticle:(id)arg1 contentContext:(id)arg2 fontRegistration:(id)arg3 host:(id)arg4 embedDataManager:(id)arg5 linkedContentManager:(id)arg6;	// IMP=0x00000000000387cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
