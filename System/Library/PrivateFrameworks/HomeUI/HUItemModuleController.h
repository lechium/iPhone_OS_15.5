//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUItemTextEditingController-Protocol.h>

@class HFItemModule, NSString;
@protocol HUItemModuleControllerHosting;

@interface HUItemModuleController : NSObject <HUItemTextEditingController>
{
    id <HUItemModuleControllerHosting> _host;	// 8 = 0x8
    unsigned long long _hostType;	// 16 = 0x10
    HFItemModule *_module;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bfb92
@property(readonly, nonatomic) HFItemModule *module; // @synthesize module=_module;
@property(nonatomic) unsigned long long hostType; // @synthesize hostType=_hostType;
@property(nonatomic) __weak id <HUItemModuleControllerHosting> host; // @synthesize host=_host;
- (id)textFieldForVisibleItem:(id)arg1;	// IMP=0x00000000000bfac7
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;	// IMP=0x00000000000bfac1
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;	// IMP=0x00000000000bfabb
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;	// IMP=0x00000000000bfab5
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000bfaad
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000bfa9b
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000000000bfa93
- (_Bool)shouldManageTextFieldForItem:(id)arg1;	// IMP=0x00000000000bfa8b
- (_Bool)shouldHideHeaderAboveSectionWithIdentifier:(id)arg1;	// IMP=0x00000000000bfa83
- (_Bool)shouldHideFooterBelowSectionWithIdentifier:(id)arg1;	// IMP=0x00000000000bfa7b
- (id)trailingSwipeActionsForItem:(id)arg1;	// IMP=0x00000000000bfa73
- (id)leadingSwipeActionsForItem:(id)arg1;	// IMP=0x00000000000bfa6b
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;	// IMP=0x00000000000bfa62
- (void)accessoryButtonTappedForItem:(id)arg1;	// IMP=0x00000000000bfa5c
- (unsigned long long)didSelectItem:(id)arg1;	// IMP=0x00000000000bfa54
- (_Bool)canSelectDisabledItem:(id)arg1;	// IMP=0x00000000000bfa4c
- (_Bool)canSelectItem:(id)arg1;	// IMP=0x00000000000bfa44
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000bfa3e
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000bfa38
- (void)setupCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000000bfa32
- (Class)collectionCellClassForItem:(id)arg1;	// IMP=0x00000000000bf998
- (Class)cellClassForItem:(id)arg1;	// IMP=0x00000000000bf8fe
- (id)initWithModule:(id)arg1;	// IMP=0x00000000000bf818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

