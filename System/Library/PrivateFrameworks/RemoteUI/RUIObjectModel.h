//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteUI/RUIAlertViewDelegate-Protocol.h>
#import <RemoteUI/RUIPageDelegate-Protocol.h>
#import <RemoteUI/RUIPasscodeViewDelegate-Protocol.h>
#import <RemoteUI/RUITableViewDelegate-Protocol.h>
#import <RemoteUI/RUIWebViewDelegate-Protocol.h>
#import <RemoteUI/RemoteUIWebViewControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, RUIAlertView, RUIElement, RUIPage, RUIStyle;
@protocol RUIObjectModelDelegate;

@interface RUIObjectModel : NSObject <RemoteUIWebViewControllerDelegate, RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate, RUIWebViewDelegate>
{
    NSString *_name;	// 8 = 0x8
    NSURL *_sourceURL;	// 16 = 0x10
    NSURL *_scriptURL;	// 24 = 0x18
    NSString *_inlineScript;	// 32 = 0x20
    NSString *_validationFunction;	// 40 = 0x28
    NSMutableArray *_defaultPages;	// 48 = 0x30
    NSMutableDictionary *_namedPages;	// 56 = 0x38
    NSMutableArray *_displayedPages;	// 64 = 0x40
    int _currentPage;	// 72 = 0x48
    struct OpaqueJSContext *_ctx;	// 80 = 0x50
    NSDictionary *_clientInfo;	// 88 = 0x58
    NSDictionary *_serverInfo;	// 96 = 0x60
    NSDictionary *_updateInfo;	// 104 = 0x68
    int _refreshDelay;	// 112 = 0x70
    NSString *_refreshURL;	// 120 = 0x78
    NSTimer *_refreshTimer;	// 128 = 0x80
    long long _nextButtonStyle;	// 136 = 0x88
    RUIAlertView *_primaryAlert;	// 144 = 0x90
    NSMutableDictionary *_namedAlerts;	// 152 = 0x98
    NSMutableDictionary *_httpHeaders;	// 160 = 0xa0
    NSString *_authPasswordEquivalent;	// 168 = 0xa8
    NSString *_authPasswordFieldID;	// 176 = 0xb0
    _Bool _parseFinished;	// 184 = 0xb8
    CDUnknownBlockType _webViewDismissHandler;	// 192 = 0xc0
    id <RUIObjectModelDelegate> _delegate;	// 200 = 0xc8
    RUIElement *_activeElement;	// 208 = 0xd0
    NSString *_identifier;	// 216 = 0xd8
    NSString *_idOfObjectModelToReplace;	// 224 = 0xe0
    RUIStyle *_style;	// 232 = 0xe8
    NSString *_identifierMarkingStackRemovalAfterPush;	// 240 = 0xf0
    NSDictionary *_alert;	// 248 = 0xf8
}

+ (id)objectModelForXMLNamed:(id)arg1;	// IMP=0x000000000002959b
+ (void)_enableTestMode;	// IMP=0x00000000000290e2
- (void).cxx_destruct;	// IMP=0x000000000003346a
@property(retain, nonatomic) NSDictionary *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) NSString *identifierMarkingStackRemovalAfterPush; // @synthesize identifierMarkingStackRemovalAfterPush=_identifierMarkingStackRemovalAfterPush;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) long long nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) NSString *refreshURL; // @synthesize refreshURL=_refreshURL;
@property(nonatomic) int refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(copy, nonatomic) NSString *idOfObjectModelToReplace; // @synthesize idOfObjectModelToReplace=_idOfObjectModelToReplace;
@property(copy, nonatomic) NSDictionary *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(copy, nonatomic) NSDictionary *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(copy, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(copy, nonatomic) NSString *inlineScript; // @synthesize inlineScript=_inlineScript;
@property(copy, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RUIElement *activeElement; // @synthesize activeElement=_activeElement;
@property(readonly, nonatomic) NSDictionary *namedPages; // @synthesize namedPages=_namedPages;
@property(readonly, nonatomic) NSArray *defaultPages; // @synthesize defaultPages=_defaultPages;
@property(nonatomic) __weak id <RUIObjectModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1;	// IMP=0x00000000000331fd
- (void)RUIPage:(id)arg1 toggledEditing:(_Bool)arg2;	// IMP=0x0000000000033164
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;	// IMP=0x0000000000032de9
- (void)navigateToNextPageAnimated:(_Bool)arg1;	// IMP=0x0000000000032cda
- (void)_navigateToNextPageAnimated;	// IMP=0x0000000000032cbe
- (_Bool)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000000032a4f
- (void)passcodeViewOM:(id)arg1 activatedElement:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000032a37
- (void)tableViewOMSubmitForm:(id)arg1;	// IMP=0x000000000003295e
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2 action:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000032825
- (void)tableViewOMDidChange:(id)arg1;	// IMP=0x0000000000031e73
- (_Bool)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;	// IMP=0x0000000000031a67
- (void)alertView:(id)arg1 pressedButton:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000031682
- (void)remoteUIWebViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000031643
- (void)remoteUIWebViewController:(id)arg1 dismissWithPayload:(id)arg2;	// IMP=0x000000000003159f
- (void)showModalWebViewWithLinkURL:(id)arg1 dismissButtonLabel:(id)arg2 dismissButtonAlignment:(id)arg3 scaleToFit:(_Bool)arg4 loadCompletion:(CDUnknownBlockType)arg5 dismissHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000312e1
- (id)_pageContainingTableView:(id)arg1;	// IMP=0x0000000000031140
- (void)_handleElementChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030db4
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003040f
- (_Bool)_shouldDisplayNamedElement:(id)arg1 page:(id)arg2;	// IMP=0x000000000003033c
- (void)openLink:(id)arg1 HTTPMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030254
- (void)handleElementChange:(id)arg1 action:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fc4b
- (void)activateElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f896
- (id)subElementWithID:(id)arg1;	// IMP=0x000000000002f3f6
- (void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dd09
- (id)textInRowWithIdentifier:(id)arg1;	// IMP=0x000000000002db8f
- (void)_presentSecondConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d804
- (void)_presentConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d479
- (void)presentConfirmationIfNeededForElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d1a2
- (_Bool)hasSecondConfirmationAttributes:(id)arg1;	// IMP=0x000000000002d103
- (_Bool)hasConfirmationAttributes:(id)arg1;	// IMP=0x000000000002d064
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000002cec7
- (_Bool)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x000000000002cdd9
- (void)stopActivityIndicator;	// IMP=0x000000000002cc7a
- (void)startActivityIndicator;	// IMP=0x000000000002cc38
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;	// IMP=0x000000000002cbb8
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;	// IMP=0x000000000002c9ed
- (void)stopNavigationBarSpinner;	// IMP=0x000000000002c967
- (void)startNavigationBarSpinnerWithTitle:(id)arg1;	// IMP=0x000000000002c84f
- (id)elementsWithName:(id)arg1;	// IMP=0x000000000002c682
- (id)relativeURLWithString:(id)arg1;	// IMP=0x000000000002c5a2
- (id)absoluteURLWithString:(id)arg1;	// IMP=0x000000000002c559
- (id)rowForFormField:(id)arg1;	// IMP=0x000000000002bf98
- (id)tableFooterViewForAttributes:(id)arg1;	// IMP=0x000000000002bec8
- (id)tableHeaderViewForAttributes:(id)arg1;	// IMP=0x000000000002bdf8
- (Class)customTableCellClassForTableViewRow:(id)arg1;	// IMP=0x000000000002bd50
- (Class)customFooterClassForSection:(id)arg1;	// IMP=0x000000000002bca8
- (Class)customHeaderClassForSection:(id)arg1;	// IMP=0x000000000002bc00
- (void)configureSection:(id)arg1;	// IMP=0x000000000002bb45
- (void)configureRow:(id)arg1;	// IMP=0x000000000002ba8a
- (void)configureTableView:(id)arg1;	// IMP=0x000000000002b9cf
@property(readonly, nonatomic) RUIAlertView *primaryAlert;
- (void)addAlertElement:(id)arg1;	// IMP=0x000000000002b8bf
- (id)alertController;	// IMP=0x000000000002b86f
- (void)_unsafe_setPages:(id)arg1;	// IMP=0x000000000002b335
- (void)setPages:(id)arg1;	// IMP=0x000000000002b277
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly, nonatomic) RUIPage *visiblePage;
@property(readonly, nonatomic) NSArray *displayedPages;
- (void)refreshWithObjectModel:(id)arg1;	// IMP=0x000000000002aae6
- (void)_populateRequest:(id)arg1;	// IMP=0x000000000002a924
- (id)postbackDictionary;	// IMP=0x000000000002a8ec
- (void)populatePostbackDictionary:(id)arg1;	// IMP=0x000000000002a736
- (id)postbackData;	// IMP=0x000000000002a6c8
- (_Bool)goBack:(_Bool)arg1;	// IMP=0x000000000002a695
- (_Bool)goBack;	// IMP=0x000000000002a67e
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(_Bool)arg1;	// IMP=0x000000000002a557
- (void)back:(id)arg1;	// IMP=0x000000000002a53e
- (void)didNavigateBackFromViewController:(id)arg1;	// IMP=0x000000000002a527
- (void)_navigateBackWithPop:(_Bool)arg1 fromViewController:(id)arg2;	// IMP=0x000000000002a280
- (void)pageDidDisappear:(id)arg1;	// IMP=0x000000000002a16d
- (void)_displayNamedPage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002a0b7
- (void)_displaySupplementalPage:(id)arg1;	// IMP=0x000000000002a00d
- (id)_parentNavigationController;	// IMP=0x0000000000029fad
- (id)_parentViewController;	// IMP=0x0000000000029ec2
- (id)newNavigationControllerForPresentation;	// IMP=0x0000000000029db0
- (void)presentPage:(id)arg1 inViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029d03
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000029cee
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029c5e
- (void)presentWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029b9b
- (id)_firstPageForPresentation;	// IMP=0x0000000000029aa0
- (void)refreshTimeout;	// IMP=0x0000000000029a02
- (void)_populatePageNavItem:(id)arg1 withNextButton:(_Bool)arg2;	// IMP=0x00000000000296f8
- (void)parseDidFinish;	// IMP=0x00000000000296a5
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000291f4
- (void)cleanupRefreshTimer;	// IMP=0x00000000000291b9
- (id)init;	// IMP=0x00000000000290ef
- (void)setJSGlobalContext:(struct OpaqueJSContext *)arg1;	// IMP=0x0000000000034bb7
- (void)runScript;	// IMP=0x0000000000034a91
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x00000000000344e8
- (id)objectForJSValue:(struct OpaqueJSValue *)arg1;	// IMP=0x0000000000034258
- (_Bool)validateWithFunction:(id)arg1;	// IMP=0x0000000000033eef
- (_Bool)prepareScriptContext;	// IMP=0x0000000000033e96
- (void)_logException:(struct OpaqueJSValue *)arg1;	// IMP=0x0000000000033e7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
