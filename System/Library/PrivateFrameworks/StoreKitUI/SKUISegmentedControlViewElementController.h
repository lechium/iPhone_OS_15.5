//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIFlexibleSegmentedControlDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuPopoverDelegate-Protocol.h>
#import <StoreKitUI/SKUIMenuViewControllerDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUIFlexibleSegmentedControl, SKUIMenuPopoverController, SKUIMenuViewController, SKUISegmentedControlViewElement, UIBarButtonItem, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISegmentedControlViewElementController : NSObject <SKUIFlexibleSegmentedControlDelegate, SKUIMenuPopoverDelegate, SKUIMenuViewControllerDelegate>
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    long long _defaultMaximumNumberOfVisibleItems;	// 16 = 0x10
    double _desiredSegmentWidth;	// 24 = 0x18
    UIBarButtonItem *_menuSheetCancelButtonItem;	// 32 = 0x20
    SKUIMenuViewController *_menuSheetViewController;	// 40 = 0x28
    UIViewController *_parentViewController;	// 48 = 0x30
    SKUIMenuPopoverController *_popoverMenuViewController;	// 56 = 0x38
    SKUIFlexibleSegmentedControl *_segmentedControl;	// 64 = 0x40
    SKUISegmentedControlViewElement *_viewElement;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000148554
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUISegmentedControlViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) double desiredSegmentWidth; // @synthesize desiredSegmentWidth=_desiredSegmentWidth;
@property(nonatomic) long long defaultMaximumNumberOfVisibleItems; // @synthesize defaultMaximumNumberOfVisibleItems=_defaultMaximumNumberOfVisibleItems;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_showPopoverMoreListWithTitles:(id)arg1;	// IMP=0x00000000001483f2
- (void)_showMoreListSheetWithTitles:(id)arg1 selectedIndex:(long long)arg2;	// IMP=0x0000000000148087
- (id)_segmentedControl;	// IMP=0x0000000000148038
- (void)_reloadPropertiesForSegmentedControl:(id)arg1;	// IMP=0x0000000000147f56
- (void)_destroyPopoverController;	// IMP=0x0000000000147f22
- (void)_destroyMenuSheetViewController;	// IMP=0x0000000000147eae
- (void)_connectToSegmentedControl:(id)arg1;	// IMP=0x0000000000147d68
- (void)_cancelMenuAction:(id)arg1;	// IMP=0x0000000000147d21
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x0000000000147caa
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000147c46
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;	// IMP=0x0000000000147bde
- (void)menuPopoverDidCancel:(id)arg1;	// IMP=0x0000000000147bac
- (void)segmentedControl:(id)arg1 showMoreListWithTitles:(id)arg2;	// IMP=0x0000000000147af0
- (void)segmentedControl:(id)arg1 didSelectSegmentIndex:(long long)arg2;	// IMP=0x0000000000147ad5
@property(readonly, nonatomic) UIView *segmentedControlView;
- (void)reloadAfterDocumentUpdate;	// IMP=0x0000000000147a30
- (void)dealloc;	// IMP=0x00000000001479b5
- (id)initWithViewElement:(id)arg1 segmentedControl:(id)arg2;	// IMP=0x00000000001478ee
- (id)initWithViewElement:(id)arg1;	// IMP=0x00000000001478da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
