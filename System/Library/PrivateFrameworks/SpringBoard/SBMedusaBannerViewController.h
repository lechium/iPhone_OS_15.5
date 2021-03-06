//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/BNPresentable-Protocol.h>

@class NSString, PLPillView;
@protocol BNPresentableContext;

@interface SBMedusaBannerViewController : UIViewController <BNPresentable>
{
    PLPillView *_pillView;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _orientation;	// 24 = 0x18
    long long _peekConfiguration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000057e7ef
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (id)_bannerView;	// IMP=0x000000000057e28c
- (void)viewDidLoad;	// IMP=0x000000000057e1a4
- (id)initWithType:(long long)arg1 orientation:(long long)arg2 peekConfiguration:(long long)arg3;	// IMP=0x000000000057e0fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end

