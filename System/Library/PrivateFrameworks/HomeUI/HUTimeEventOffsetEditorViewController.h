//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUSignificantEventOffsetPickerDelegate-Protocol.h>

@class NSDateComponents, NSString;
@protocol HUTimeEventOffsetEditorDelegate;

@interface HUTimeEventOffsetEditorViewController <HUSignificantEventOffsetPickerDelegate>
{
    NSString *_significantEvent;	// 8 = 0x8
    NSDateComponents *_currentOffset;	// 16 = 0x10
    id <HUTimeEventOffsetEditorDelegate> _delegate;	// 24 = 0x18
    NSDateComponents *_selectedOffset;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000035ac9d
@property(retain, nonatomic) NSDateComponents *selectedOffset; // @synthesize selectedOffset=_selectedOffset;
@property(nonatomic) __weak id <HUTimeEventOffsetEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDateComponents *currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (void)significantEventOffsetPicker:(id)arg1 didSelectOffset:(id)arg2;	// IMP=0x000000000035ac14
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000035aa14
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000035a876
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000035a865
- (void)_done:(id)arg1;	// IMP=0x000000000035a7f4
- (void)_cancel:(id)arg1;	// IMP=0x000000000035a7a8
- (void)viewDidLoad;	// IMP=0x000000000035a519
- (id)initWithSignificantEvent:(id)arg1 currentOffset:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000035a313
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x000000000035a25e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
