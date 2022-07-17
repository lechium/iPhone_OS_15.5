//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIRedeemIdTableViewCellDelegate-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSString, SKUIClientContext, SKUIPinnedFooterView, UITableView;
@protocol SKUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <SKUIRedeemIdManagerDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSIndexPath *_activeIndexPath;	// 24 = 0x18
    SKUIClientContext *_clientContext;	// 32 = 0x20
    SKUIPinnedFooterView *_pinnedFooterView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000018170e
@property(retain, nonatomic) SKUIPinnedFooterView *pinnedFooterView; // @synthesize pinnedFooterView=_pinnedFooterView;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SKUIRedeemIdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;	// IMP=0x000000000018166b
- (long long)_returnKeyTypeForIndexPath:(id)arg1;	// IMP=0x0000000000181640
- (long long)_keyboardTypeForIndexPath:(id)arg1;	// IMP=0x0000000000181615
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x00000000001815fb
- (double)_tableViewNonFooterContentHeight;	// IMP=0x0000000000181511
- (double)_heightForDisclosureFooter;	// IMP=0x0000000000181372
- (id)_nextIndexPath:(id)arg1;	// IMP=0x00000000001811dc
- (id)_disclosureAttributedString;	// IMP=0x0000000000180f04
- (id)_placeholderTextForIndexPath:(id)arg1;	// IMP=0x0000000000180d50
- (id)_pcLinkString;	// IMP=0x0000000000180cbe
- (id)_regulationsLinkString;	// IMP=0x0000000000180c2c
- (void)dismissActiveCell;	// IMP=0x0000000000180b5b
- (void)setFooterHidden:(_Bool)arg1;	// IMP=0x0000000000180b0f
- (void)handleNextPressed;	// IMP=0x0000000000180afd
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;	// IMP=0x0000000000180a21
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;	// IMP=0x0000000000180828
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001806b0
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0000000000180614
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000018048f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000018047a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000018046f
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000180440
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001803dd
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001803cf
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000180237
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000180013

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
