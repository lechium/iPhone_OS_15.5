//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUNetworkConfigurationMismatchItemManager;

@interface HUNetworkConfigurationMismatchViewController
{
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001ed6eb
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000000001ed5cf
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000001ed37a
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000001ed2a5
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001ed1b2
- (id)initWithProfiles:(id)arg1;	// IMP=0x00000000001ed120
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x00000000001ed06b

// Remaining properties
@property(readonly, nonatomic) HUNetworkConfigurationMismatchItemManager *itemManager; // @dynamic itemManager;

@end

