//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/UIContextMenuInteractionDelegate-Protocol.h>
#import <WebKit/WKFormControl-Protocol.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectPicker : NSObject <WKFormControl, UIContextMenuInteractionDelegate>
{
    WKContentView *_view;	// 8 = 0x8
    struct CGPoint _interactionPoint;	// 16 = 0x10
    struct RetainPtr<UIMenu> _selectMenu;	// 32 = 0x20
    struct RetainPtr<UIContextMenuInteraction> _selectContextMenuInteraction;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000041da06
- (void).cxx_destruct;	// IMP=0x000000000041d9bf
- (_Bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;	// IMP=0x000000000041d98c
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000041d936
- (void)showSelectPicker;	// IMP=0x000000000041d8f1
- (void)ensureContextMenuInteraction;	// IMP=0x000000000041d886
- (void)removeContextMenuInteraction;	// IMP=0x000000000041d7f8
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000041d697
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000041d551
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000041d443
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000041d407
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000041d3e9
- (id)actionForOptionIndex:(long long)arg1;	// IMP=0x000000000041d1b5
- (id)actionForOptionItem:(const void *)arg1 withIndex:(long long)arg2;	// IMP=0x000000000041d0c9
- (id)createMenu;	// IMP=0x000000000041cc4c
- (void)didSelectOptionIndex:(long long)arg1;	// IMP=0x000000000041cbd5
- (void)dealloc;	// IMP=0x000000000041cb97
- (void)controlEndEditing;	// IMP=0x000000000041cb5d
- (void)controlBeginEditing;	// IMP=0x000000000041ca66
- (id)controlView;	// IMP=0x000000000041ca5e
- (id)initWithView:(id)arg1;	// IMP=0x000000000041c9e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

