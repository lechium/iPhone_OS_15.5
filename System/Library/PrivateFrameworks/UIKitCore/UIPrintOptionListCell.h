//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString;
@protocol UIPrintOptionListDelegate;

__attribute__((visibility("hidden")))
@interface UIPrintOptionListCell <UIPopoverPresentationControllerDelegate>
{
    id <UIPrintOptionListDelegate> _itemListDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000114783c
@property(nonatomic) __weak id <UIPrintOptionListDelegate> itemListDelegate; // @synthesize itemListDelegate=_itemListDelegate;
- (void)prepareForReuse;	// IMP=0x00000000011477cc
- (void)printOptionCellTapped;	// IMP=0x000000000114765d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
