//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUI/GKRemoteUIAuxiliaryViewDelegate-Protocol.h>
#import <GameCenterUI/RUILoaderDelegate-Protocol.h>
#import <GameCenterUI/RUIObjectModelDelegate-Protocol.h>

@class GKLocalPlayer, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSString, NSURL, RUILoader, UINavigationController;

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate>
{
    _Bool _loading;	// 8 = 0x8
    _Bool _shouldApplyGameCenterTheme;	// 9 = 0x9
    _Bool _previousUseCustomBackButtonActionValue;	// 10 = 0xa
    _Bool _loadingInitialUI;	// 11 = 0xb
    _Bool _complete;	// 12 = 0xc
    _Bool _isServerAuthenticated;	// 13 = 0xd
    int _layoutStyle;	// 16 = 0x10
    NSString *_appleID;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSMutableArray *_objectModels;	// 48 = 0x30
    UINavigationController *_navigationController;	// 56 = 0x38
    NSArray *_staticViewControllers;	// 64 = 0x40
    RUILoader *_loader;	// 72 = 0x48
    GKRemoteUIController *_presentedRemoteUIController;	// 80 = 0x50
    NSURL *_url;	// 88 = 0x58
    CDUnknownBlockType _loadHandler;	// 96 = 0x60
    NSDictionary *_authInfo;	// 104 = 0x68
    NSString *_authToken;	// 112 = 0x70
    NSData *_pushToken;	// 120 = 0x78
    NSString *_altDSID;	// 128 = 0x80
    NSString *_playerID;	// 136 = 0x88
    NSString *_firstName;	// 144 = 0x90
    NSString *_lastName;	// 152 = 0x98
    NSString *_alias;	// 160 = 0xa0
    GKLocalPlayer *_playerForRemoteUI;	// 168 = 0xa8
}

+ (id)remoteUIController;	// IMP=0x000000000010eff4
- (void).cxx_destruct;	// IMP=0x000000000011421b
@property(retain, nonatomic) GKLocalPlayer *playerForRemoteUI; // @synthesize playerForRemoteUI=_playerForRemoteUI;
@property(nonatomic) _Bool isServerAuthenticated; // @synthesize isServerAuthenticated=_isServerAuthenticated;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSDictionary *authInfo; // @synthesize authInfo=_authInfo;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) _Bool loadingInitialUI; // @synthesize loadingInitialUI=_loadingInitialUI;
@property(nonatomic) _Bool previousUseCustomBackButtonActionValue; // @synthesize previousUseCustomBackButtonActionValue=_previousUseCustomBackButtonActionValue;
@property(retain, nonatomic) GKRemoteUIController *presentedRemoteUIController; // @synthesize presentedRemoteUIController=_presentedRemoteUIController;
@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) NSArray *staticViewControllers; // @synthesize staticViewControllers=_staticViewControllers;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSMutableArray *objectModels; // @synthesize objectModels=_objectModels;
@property(nonatomic) _Bool shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000113f88
- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000113f82
- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;	// IMP=0x0000000000113f0d
- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;	// IMP=0x0000000000113e98
- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;	// IMP=0x0000000000113d7b
- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;	// IMP=0x0000000000113c9f
- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;	// IMP=0x000000000011363e
- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;	// IMP=0x0000000000113548
- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;	// IMP=0x0000000000113449
- (void)objectModelDidChange:(id)arg1;	// IMP=0x0000000000113443
- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(_Bool)arg3;	// IMP=0x000000000011343d
- (_Bool)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;	// IMP=0x0000000000113435
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;	// IMP=0x0000000000113209
- (void)objectModel:(id)arg1 elementDidChange:(id)arg2;	// IMP=0x0000000000113193
- (void)objectModelPressedBack:(id)arg1;	// IMP=0x0000000000113111
- (id)parentViewControllerForObjectModel:(id)arg1;	// IMP=0x00000000001130ff
- (id)viewControllerForAlertPresentation;	// IMP=0x00000000001130af
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;	// IMP=0x0000000000112ab8
- (void)performAction:(unsigned long long)arg1 withObjectModel:(id)arg2;	// IMP=0x0000000000112838
- (void)loader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000112823
- (void)presentObjectModel:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001124f5
- (void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2;	// IMP=0x0000000000112295
- (void)popObjectModelAnimated:(_Bool)arg1;	// IMP=0x00000000001120fc
- (void)pushObjectModel:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000011203d
- (long long)indexOfVisiblePage;	// IMP=0x0000000000111e89
- (id)viewControllers;	// IMP=0x0000000000111c85
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001112af
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011129d
- (id)postBodyForInitialLoad;	// IMP=0x0000000000111284
@property(readonly, nonatomic) NSString *bagKey;
@property(readonly, nonatomic) NSURL *fallbackURL;
- (int)preferredLayoutStyle;	// IMP=0x00000000001110fa
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postData:(id)arg3;	// IMP=0x0000000000110ea6
- (void)loadURL:(id)arg1 postData:(id)arg2;	// IMP=0x0000000000110c4b
- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;	// IMP=0x0000000000110909
- (void)loadURL:(id)arg1 postBody:(id)arg2;	// IMP=0x0000000000110891
- (void)loadURL:(id)arg1 forPlayer:(id)arg2 postBody:(id)arg3;	// IMP=0x00000000001107f8
- (void)finishLoadingWithError:(id)arg1;	// IMP=0x00000000001106a0
- (void)loadInitialRemoteUIForPlayer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001105e7
- (void)loadInitialRemoteUIWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110557
- (id)postbackDataForDictionary:(id)arg1;	// IMP=0x0000000000110533
- (void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010ff9f
- (id)addThemeInfoToAttributes:(id)arg1;	// IMP=0x000000000010fec3
- (void)presentInParentNavigationController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000010fd37
- (void)fireCompletionHandler;	// IMP=0x000000000010fc11
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
- (void)updateAccountAndMarkComplete:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f50b
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (id)init;	// IMP=0x000000000010f39b
- (id)initWithObjectModel:(id)arg1;	// IMP=0x000000000010f006

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
