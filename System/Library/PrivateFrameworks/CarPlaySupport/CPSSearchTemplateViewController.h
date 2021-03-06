//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchContainerViewController.h>

#import <CarPlaySupport/CPListTemplateDelegate-Protocol.h>
#import <CarPlaySupport/CPSBaseTemplateViewController-Protocol.h>
#import <CarPlaySupport/CPSearchTemplateProviding-Protocol.h>
#import <CarPlaySupport/UISearchBarDelegate-Protocol.h>
#import <CarPlaySupport/UISearchControllerDelegate-Protocol.h>
#import <CarPlaySupport/UISearchResultsUpdating-Protocol.h>

@class CPListTemplate, CPSearchTemplate, CPTemplate, NAFuture, NSString;
@protocol CPSTemplateViewControllerDelegate, CPSearchClientTemplateDelegate, CPTemplateDelegate;

@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding>
{
    _Bool _didPop;	// 8 = 0x8
    _Bool _didDisappear;	// 9 = 0x9
    NAFuture *_templateProviderFuture;	// 16 = 0x10
    id <CPSTemplateViewControllerDelegate> _viewControllerDelegate;	// 24 = 0x18
    CPTemplate *_associatedTemplate;	// 32 = 0x20
    id <CPTemplateDelegate> _templateDelegate;	// 40 = 0x28
    CPListTemplate *_listTemplate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005d1ac
@property(nonatomic) _Bool didDisappear; // @synthesize didDisappear=_didDisappear;
@property(nonatomic) _Bool didPop; // @synthesize didPop=_didPop;
@property(retain, nonatomic) CPListTemplate *listTemplate; // @synthesize listTemplate=_listTemplate;
@property(retain, nonatomic) id <CPTemplateDelegate> templateDelegate; // @synthesize templateDelegate=_templateDelegate;
@property(retain, nonatomic) CPTemplate *associatedTemplate; // @synthesize associatedTemplate=_associatedTemplate;
@property(nonatomic) __weak id <CPSTemplateViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(readonly, nonatomic) NAFuture *templateProviderFuture; // @synthesize templateProviderFuture=_templateProviderFuture;
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x000000000005ce12
- (void)didDismissSearchController:(id)arg1;	// IMP=0x000000000005cd41
- (_Bool)_isSceneActive;	// IMP=0x000000000005cca8
- (_Bool)searchBarShouldEndEditing:(id)arg1;	// IMP=0x000000000005cae9
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000000005ca08
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c8d0
- (void)_cps_viewControllerWasPopped;	// IMP=0x000000000005c7d0
@property(readonly, nonatomic) __weak id <CPSearchClientTemplateDelegate> searchTemplateDelegate;
@property(readonly, nonatomic) CPSearchTemplate *searchTemplate;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005c61e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005c521
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005c424
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005c30a
- (void)viewDidLoad;	// IMP=0x000000000005c073
- (void)_cleanup;	// IMP=0x000000000005bfdc
- (id)initWithSearchTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 interactionModel:(unsigned long long)arg4;	// IMP=0x000000000005bd02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

