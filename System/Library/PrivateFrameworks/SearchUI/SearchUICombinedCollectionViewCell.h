//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCollectionViewCell
{
    SearchUICombinedCardSectionsView *_cardSectionView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007a4f8
@property(retain) SearchUICombinedCardSectionsView *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;	// IMP=0x000000000007a3b1
- (id)sizingView;	// IMP=0x000000000007a39f
- (void)setDelegate:(id)arg1;	// IMP=0x000000000007a30b
- (void)updateWithRowModel:(id)arg1;	// IMP=0x000000000007a15c

@end
