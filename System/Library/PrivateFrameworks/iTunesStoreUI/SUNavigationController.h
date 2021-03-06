//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <iTunesStoreUI/SUScriptNativeObject-Protocol.h>

@class NSString, SUClientInterface, SUSection;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>
{
    _Bool _canBeWeakScriptReference;	// 8 = 0x8
    SUClientInterface *_clientInterface;	// 16 = 0x10
    SUSection *_section;	// 24 = 0x18
    long long _storeBarStyle;	// 32 = 0x20
    _Bool _skLoading;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027f92
@property(nonatomic, getter=isSkLoading) _Bool skLoading; // @synthesize skLoading=_skLoading;
@property(retain, nonatomic) SUSection *section; // @synthesize section=_section;
@property(retain, nonatomic) SUClientInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void)_loadingDidChangeNotification:(id)arg1;	// IMP=0x0000000000027ef3
- (_Bool)clearsWeakScriptReferences;	// IMP=0x0000000000027ee3
- (_Bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;	// IMP=0x0000000000027e37
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000027d88
- (id)_sectionForViewController:(id)arg1;	// IMP=0x0000000000027d76
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000027ced
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000027c5b
- (void)setViewControllers:(id)arg1;	// IMP=0x0000000000027b91
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000027ad8
- (void)setToolbarHidden:(_Bool)arg1;	// IMP=0x0000000000027a2a
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;	// IMP=0x00000000000279da
- (void)setParentViewController:(id)arg1;	// IMP=0x00000000000278c4
- (void)restoreArchivableContext:(id)arg1;	// IMP=0x0000000000027558
- (void)removeChildViewController:(id)arg1;	// IMP=0x00000000000274af
- (id)moreListSelectedImage;	// IMP=0x000000000002745f
- (id)moreListImage;	// IMP=0x000000000002740f
- (void)loadView;	// IMP=0x000000000002732d
- (long long)ITunesStoreUIBarStyle;	// IMP=0x000000000002731c
@property(readonly, copy) NSString *description;
- (id)copyScriptViewController;	// IMP=0x0000000000027217
- (id)copyArchivableContext;	// IMP=0x0000000000026fd2
- (void)addChildViewController:(id)arg1;	// IMP=0x0000000000026f09
- (void)dealloc;	// IMP=0x0000000000026e10
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;	// IMP=0x0000000000026c82
- (id)initWithSection:(id)arg1;	// IMP=0x0000000000026c6e
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000026c57
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000026bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

