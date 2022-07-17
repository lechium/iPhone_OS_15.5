//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SXActionComponentInteractionHandlerFactory, SXArticleURLFactory, SXComponentInteractionHandler, SXComponentInteractionHandlerManager, SXURLActionFactory;

@interface SXArticleLinkComponentView
{
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;	// 8 = 0x8
    id <SXActionComponentInteractionHandlerFactory> _interactionHandlerFactory;	// 16 = 0x10
    id <SXURLActionFactory> _URLActionFactory;	// 24 = 0x18
    id <SXArticleURLFactory> _articleURLFactory;	// 32 = 0x20
    id <SXComponentInteractionHandler> _interactionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000003009
@property(nonatomic) __weak id <SXComponentInteractionHandler> interactionHandler; // @synthesize interactionHandler=_interactionHandler;
@property(readonly, nonatomic) id <SXArticleURLFactory> articleURLFactory; // @synthesize articleURLFactory=_articleURLFactory;
@property(readonly, nonatomic) id <SXURLActionFactory> URLActionFactory; // @synthesize URLActionFactory=_URLActionFactory;
@property(readonly, nonatomic) id <SXActionComponentInteractionHandlerFactory> interactionHandlerFactory; // @synthesize interactionHandlerFactory=_interactionHandlerFactory;
@property(readonly, nonatomic) id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
- (void)loadComponent:(id)arg1;	// IMP=0x0000000000002d91
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5 interactionHandlerManager:(id)arg6 interactionHandlerFactory:(id)arg7 URLActionFactory:(id)arg8 articleURLFactory:(id)arg9;	// IMP=0x0000000000002c7a

@end
