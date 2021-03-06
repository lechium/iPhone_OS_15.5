//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUPage-Protocol.h>

@class FCArticle, FCAsyncOnceOperation, NSString, NUPageStyle, UIViewController;
@protocol FCOperationCanceling, NUActivityProvider, NUArticleActivityFactory, NUArticleHostViewControllerFactory, NUPageable;

@interface NUArticlePage : NSObject <NUPage>
{
    FCArticle *_article;	// 8 = 0x8
    id <NUArticleHostViewControllerFactory> _articleHostViewControllerFactory;	// 16 = 0x10
    id <NUArticleActivityFactory> _articleActivityFactory;	// 24 = 0x18
    NUPageStyle *_pageStyle;	// 32 = 0x20
    id <NUActivityProvider> _activityProvider;	// 40 = 0x28
    FCAsyncOnceOperation *_asyncOnceOperation;	// 48 = 0x30
    id <FCOperationCanceling> _asyncOnceCancelHandler;	// 56 = 0x38
    UIViewController<NUPageable> *_articleViewController;	// 64 = 0x40
    unsigned long long _pageNextAction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000676e
@property(nonatomic) unsigned long long pageNextAction; // @synthesize pageNextAction=_pageNextAction;
@property(retain, nonatomic) UIViewController<NUPageable> *articleViewController; // @synthesize articleViewController=_articleViewController;
@property(retain, nonatomic) id <FCOperationCanceling> asyncOnceCancelHandler; // @synthesize asyncOnceCancelHandler=_asyncOnceCancelHandler;
@property(retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(retain, nonatomic) id <NUActivityProvider> activityProvider; // @synthesize activityProvider=_activityProvider;
@property(retain, nonatomic) NUPageStyle *pageStyle; // @synthesize pageStyle=_pageStyle;
@property(readonly, nonatomic) id <NUArticleActivityFactory> articleActivityFactory; // @synthesize articleActivityFactory=_articleActivityFactory;
@property(readonly, nonatomic) id <NUArticleHostViewControllerFactory> articleHostViewControllerFactory; // @synthesize articleHostViewControllerFactory=_articleHostViewControllerFactory;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
- (id)asyncOnceLoadPageStyle:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006424
- (void)activityProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000000061e7
- (void)pageStyling:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005ff1
@property(readonly, nonatomic) _Bool allowNeighboringAdvertising;
- (void)unprepare;	// IMP=0x0000000000005ed0
- (void)prepare;	// IMP=0x0000000000005dc6
- (id)viewController;	// IMP=0x0000000000005d6a
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithArticle:(id)arg1 articleHostViewControllerFactory:(id)arg2 articleActivityFactory:(id)arg3 pageNextAction:(unsigned long long)arg4;	// IMP=0x0000000000005c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

