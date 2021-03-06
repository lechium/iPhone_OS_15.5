//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIDividedGridViewControllerDelegate-Protocol.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController <EKUIDividedGridViewControllerDelegate>
{
    EKUIDividedGridViewTableViewCell *_tableViewCell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d9cc0
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000001c07d6
- (void)refreshCells;	// IMP=0x00000000001c07b2
- (void)prepareForDisplay;	// IMP=0x00000000001c078e
- (long long)gridViewType;	// IMP=0x00000000001c0766
- (id)cellLabels;	// IMP=0x00000000001c073f
- (_Bool)drawBackgroundForRow:(long long)arg1;	// IMP=0x00000000000d9ca3
- (void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000d9c8b
- (void)dividedGridViewControllerDidLayout:(id)arg1;	// IMP=0x00000000000d9c5d
- (double)heightForRow:(long long)arg1;	// IMP=0x00000000000d9bfd
- (id)cellForRow:(long long)arg1;	// IMP=0x00000000000d9beb
- (id)allCells;	// IMP=0x00000000000d9b71
- (id)tableViewCell;	// IMP=0x00000000000d9a29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

