//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NFStateMachine, NFStateMachineState, SXQuickLookViewController, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;

@interface SXQuickLookComponentView
{
    id <SXQuickLookModule> _quickLookModule;	// 8 = 0x8
    id <SXQuickLookComponentFileProvider> _fileProvider;	// 16 = 0x10
    NFStateMachine *_stateMachine;	// 24 = 0x18
    NFStateMachineState *_idleState;	// 32 = 0x20
    NFStateMachineState *_loadingState;	// 40 = 0x28
    NFStateMachineState *_presentingState;	// 48 = 0x30
    NFStateMachineState *_errorState;	// 56 = 0x38
    UIActivityIndicatorView *_loadingIndicator;	// 64 = 0x40
    UITapGestureRecognizer *_tapGestureRecognizer;	// 72 = 0x48
    UILabel *_errorLabel;	// 80 = 0x50
    SXQuickLookViewController *_quickLookViewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000010e17c
@property(retain, nonatomic) SXQuickLookViewController *quickLookViewController; // @synthesize quickLookViewController=_quickLookViewController;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) NFStateMachineState *errorState; // @synthesize errorState=_errorState;
@property(readonly, nonatomic) NFStateMachineState *presentingState; // @synthesize presentingState=_presentingState;
@property(readonly, nonatomic) NFStateMachineState *loadingState; // @synthesize loadingState=_loadingState;
@property(readonly, nonatomic) NFStateMachineState *idleState; // @synthesize idleState=_idleState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SXQuickLookComponentFileProvider> fileProvider; // @synthesize fileProvider=_fileProvider;
@property(readonly, nonatomic) id <SXQuickLookModule> quickLookModule; // @synthesize quickLookModule=_quickLookModule;
- (id)createErrorState;	// IMP=0x000000000010dd11
- (id)createPresentingState;	// IMP=0x000000000010d77a
- (id)createLoadingState;	// IMP=0x000000000010d30a
- (id)createIdleState;	// IMP=0x000000000010d194
- (void)layoutErrorView;	// IMP=0x000000000010d078
- (void)layoutWebView;	// IMP=0x000000000010cfae
- (void)layoutLoadingIndicator;	// IMP=0x000000000010ce92
- (void)layout;	// IMP=0x000000000010ce57
- (void)handleTap;	// IMP=0x000000000010ce09
- (void)discardContents;	// IMP=0x000000000010cd8e
- (void)renderContents;	// IMP=0x000000000010cd02
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;	// IMP=0x000000000010ccb6
- (void)configure;	// IMP=0x000000000010c60b
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 fileProvider:(id)arg5 quickLookModule:(id)arg6;	// IMP=0x000000000010c54a

@end
