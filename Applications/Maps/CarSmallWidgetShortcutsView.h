//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarWidgetShortcutsProvider;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetShortcutsView
{
    CarWidgetShortcutsProvider *_shortcutsProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000abc41d
- (void)didSelectItemAtIndexPath:(id)arg1;	// IMP=0x0010000000abc187
- (id)modelForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000abc0c7
- (id)data;	// IMP=0x0010000000abc0aa
- (void)refreshShortcuts;	// IMP=0x0010000000abc098
- (id)initWithShortcutsProvider:(id)arg1;	// IMP=0x0010000000abc013

@end
