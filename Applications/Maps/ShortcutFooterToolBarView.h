//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol ShortcutActionTypeDelegate;

__attribute__((visibility("hidden")))
@interface ShortcutFooterToolBarView
{
}

- (void)editListShortcutAction:(id)arg1;	// IMP=0x00200000000c83e5
- (void)cancelListShortcutAction:(id)arg1;	// IMP=0x00100000000c8394
- (void)newShortcutAction:(id)arg1;	// IMP=0x00100000000c8343
- (void)loadListShortcutEditActions;	// IMP=0x00100000000c8231
- (void)loadListShortcutActions;	// IMP=0x00100000000c80e6
- (void)_udpateContent;	// IMP=0x00100000000c805c

// Remaining properties
@property(nonatomic) __weak id <ShortcutActionTypeDelegate> delegate; // @dynamic delegate;

@end

