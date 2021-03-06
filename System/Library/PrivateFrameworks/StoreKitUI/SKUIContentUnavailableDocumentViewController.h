//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableDocumentViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>
{
    SKUIContentUnavailableView *_contentUnavailableView;	// 8 = 0x8
    SKUIViewElementLayoutContext *_layoutContext;	// 16 = 0x10
    SKUIContentUnavailableTemplateElement *_templateElement;	// 24 = 0x18
    SKUILayoutCache *_textLayoutCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001490a5
- (void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2;	// IMP=0x0000000000148f2e
- (id)_layoutContext;	// IMP=0x0000000000148d56
- (struct UIEdgeInsets)_contentInsets;	// IMP=0x0000000000148ca8
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x0000000000148bfc
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000148b66
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000148ad7
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000148a1f
- (void)viewDidLoad;	// IMP=0x0000000000148814
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000014869d
- (void)dealloc;	// IMP=0x000000000014861f
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000001485b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

