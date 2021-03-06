//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICategoryTableViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSArray, NSOperationQueue, NSString, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUICategoryTableViewController, SKUIClientContext, SKUISegmentedControl, SSVLoadURLOperation, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;
@protocol SKUICategoryControllerDelegate;

@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate>
{
    SKUICategoryArtworkLoader *_artworkLoader;	// 8 = 0x8
    UIBarButtonItem *_button;	// 16 = 0x10
    SKUIClientContext *_clientContext;	// 24 = 0x18
    UIViewController *_contentsController;	// 32 = 0x20
    NSURL *_defaultURL;	// 40 = 0x28
    id <SKUICategoryControllerDelegate> _delegate;	// 48 = 0x30
    SSVLoadURLOperation *_loadOperation;	// 56 = 0x38
    NSOperationQueue *_operationQueue;	// 64 = 0x40
    UIPopoverController *_popover;	// 72 = 0x48
    SKUICategory *_rootCategory;	// 80 = 0x50
    NSURL *_selectedURL;	// 88 = 0x58
    SKUISegmentedControl *_segmentedControl;	// 96 = 0x60
    long long _segmentedControlLength;	// 104 = 0x68
    NSArray *_segmentedControlSegments;	// 112 = 0x70
    SKUICategoryTableViewController *_tableViewController;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000002d4f17
@property(retain, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property(nonatomic) long long segmentedControlLength; // @synthesize segmentedControlLength=_segmentedControlLength;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUICategoryControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SKUICategory *category; // @synthesize category=_rootCategory;
- (id)_tableViewControllerWithCategory:(id)arg1;	// IMP=0x00000000002d4d89
- (void)_setResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000002d4cce
- (id)_rootMetricsLocations;	// IMP=0x00000000002d4c5a
- (void)_reloadSelectedSegment;	// IMP=0x00000000002d4a0a
- (void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2;	// IMP=0x00000000002d46d7
- (void)_precacheArtworkForCategory:(id)arg1;	// IMP=0x00000000002d4542
- (void)_reloadSegmentedControl;	// IMP=0x00000000002d4205
- (id)_metricsLocationsWithIndex:(long long)arg1;	// IMP=0x00000000002d410c
- (id)_artworkLoader;	// IMP=0x00000000002d403e
- (id)metricsPageContextForCategoryTableView:(id)arg1;	// IMP=0x00000000002d3fea
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x00000000002d3f4c
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x00000000002d3f1e
- (void)segmentedControlAction:(id)arg1;	// IMP=0x00000000002d3af0
- (void)buttonAction:(id)arg1;	// IMP=0x00000000002d36e1
@property(readonly, nonatomic) UISegmentedControl *segmentedControl;
- (void)loadFromURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d3161
@property(readonly, nonatomic) _Bool isLoading;
- (void)dismiss;	// IMP=0x00000000002d30c4
@property(readonly, nonatomic) UIBarButtonItem *categoryButton;
- (void)dealloc;	// IMP=0x00000000002d2fb1
- (id)initWithContentsController:(id)arg1;	// IMP=0x00000000002d2f4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

