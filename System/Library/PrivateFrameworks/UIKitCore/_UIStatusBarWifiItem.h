//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarImageView, _UIStatusBarStringView, _UIStatusBarWifiSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarWifiItem
{
    _UIStatusBarWifiSignalView *_signalView;	// 8 = 0x8
    _UIStatusBarImageView *_networkIconView;	// 16 = 0x10
    _UIStatusBarStringView *_rawStringView;	// 24 = 0x18
}

+ (id)rawDisplayIdentifier;	// IMP=0x0000000000de7f82
+ (id)iconDisplayIdentifier;	// IMP=0x0000000000de7f69
+ (id)signalStrengthDisplayIdentifier;	// IMP=0x0000000000de7f50
+ (id)groupWithPriority:(long long)arg1;	// IMP=0x0000000000df0c4c
- (void).cxx_destruct;	// IMP=0x0000000000de8cea
@property(retain, nonatomic) _UIStatusBarStringView *rawStringView; // @synthesize rawStringView=_rawStringView;
@property(retain, nonatomic) _UIStatusBarImageView *networkIconView; // @synthesize networkIconView=_networkIconView;
@property(retain, nonatomic) _UIStatusBarWifiSignalView *signalView; // @synthesize signalView=_signalView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000de8b88
- (void)_create_rawStringView;	// IMP=0x0000000000de8b2e
- (void)_create_networkIconView;	// IMP=0x0000000000de8a9d
- (void)_create_signalView;	// IMP=0x0000000000de89eb
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000de82f7
- (id)_backgroundColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000de822d
- (id)_fillColorForUpdate:(id)arg1 entry:(id)arg2;	// IMP=0x0000000000de8155
- (double)_totalWidthForUpdate:(id)arg1;	// IMP=0x0000000000de80d1
- (double)_interspaceForUpdate:(id)arg1;	// IMP=0x0000000000de804d
- (double)_barThicknessForUpdate:(id)arg1;	// IMP=0x0000000000de7fc9
- (long long)_barCountForUpdate:(id)arg1;	// IMP=0x0000000000de7fbe
- (id)dependentEntryKeys;	// IMP=0x0000000000de7f9b

@end

