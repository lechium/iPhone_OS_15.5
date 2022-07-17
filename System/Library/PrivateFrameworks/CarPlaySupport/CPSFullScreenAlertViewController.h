//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPAlertTemplate, NSArray, NSString;

@interface CPSFullScreenAlertViewController <CPSButtonDelegate>
{
    NSArray *_alertButtons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000858f0
@property(retain, nonatomic) NSArray *alertButtons; // @synthesize alertButtons=_alertButtons;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000858b9
- (void)didSelectButton:(id)arg1;	// IMP=0x0000000000085794
- (id)_titleFont;	// IMP=0x00000000000856d6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000008566a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000855fb
- (void)_viewDidLoad;	// IMP=0x0000000000084975
@property(readonly, nonatomic) CPAlertTemplate *alert;
- (id)initWithAlert:(id)arg1 alertDelegate:(id)arg2 templateEnvironment:(id)arg3;	// IMP=0x0000000000084898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
