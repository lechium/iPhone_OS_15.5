//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/WFListEditorViewDelegate-Protocol.h>

@class NSString, WFArrayEditorView, WFListEditingContext;

@interface WFArrayEditorComponentController <WFListEditorViewDelegate>
{
    WFArrayEditorView *_viewForSizing;	// 8 = 0x8
    WFListEditingContext *_editingContext;	// 16 = 0x10
}

+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;	// IMP=0x00000000002894a8
+ (id)newStatefulView:(id)arg1;	// IMP=0x0000000000289497
- (void).cxx_destruct;	// IMP=0x0000000000288d1c
@property(retain, nonatomic) WFListEditingContext *editingContext; // @synthesize editingContext=_editingContext;
- (void)listEditorView:(id)arg1 needsConfirmationForDeletion:(id)arg2;	// IMP=0x0000000000288bdd
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;	// IMP=0x0000000000288ad4
- (void)componentTreeDidDisappear;	// IMP=0x0000000000288a91
- (void)componentTreeWillAppear;	// IMP=0x00000000002889c3
- (void)willRelinquishStatefulView:(id)arg1;	// IMP=0x000000000028893e
- (void)didAcquireStatefulView:(id)arg1;	// IMP=0x0000000000288778
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forComponent:(id)arg2;	// IMP=0x00000000002885c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

