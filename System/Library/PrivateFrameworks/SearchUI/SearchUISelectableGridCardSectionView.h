//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/TLKSelectableGridViewDelegate-Protocol.h>

@class NSString, TLKSelectableGridView;

@interface SearchUISelectableGridCardSectionView <TLKSelectableGridViewDelegate>
{
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;	// IMP=0x00000000000158b7
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;	// IMP=0x0000000000015d44
- (id)convertSFTitleSubtitleData:(id)arg1;	// IMP=0x0000000000015b18
- (void)updateWithRowModel:(id)arg1;	// IMP=0x00000000000158f7
- (id)setupContentView;	// IMP=0x00000000000158bf

// Remaining properties
@property(retain, nonatomic) TLKSelectableGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

