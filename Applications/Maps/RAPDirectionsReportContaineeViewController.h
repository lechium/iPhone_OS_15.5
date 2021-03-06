//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPReport, UINavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface RAPDirectionsReportContaineeViewController
{
    unsigned long long _context;	// 8 = 0x8
    RAPReport *_report;	// 16 = 0x10
    UIViewController *_contentViewController;	// 24 = 0x18
    UINavigationController *_navController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004bd5e8
- (void)rapRouteListViewController:(id)arg1 didSelectRequest:(id)arg2;	// IMP=0x00100000004bd58c
- (void)rapRouteListViewControllerDidDismiss:(id)arg1;	// IMP=0x00100000004bd48d
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000004bd43d
- (void)routeFeedbackViewControllerDidDismiss:(id)arg1;	// IMP=0x00100000004bd33e
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x00100000004bd21d
- (id)_routeFeedbackViewControllerForRequest:(id)arg1;	// IMP=0x00100000004bd068
- (void)_setupConstraints;	// IMP=0x00100000004bccdc
- (void)_setupViews;	// IMP=0x00100000004bcb1a
- (void)viewDidLoad;	// IMP=0x00100000004bcac4
- (id)initWithReport:(id)arg1 directionsReportContext:(unsigned long long)arg2;	// IMP=0x00100000004bc72d

@end

