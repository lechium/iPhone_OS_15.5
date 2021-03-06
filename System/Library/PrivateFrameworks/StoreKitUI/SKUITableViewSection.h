//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SKUITableViewSectionDelegate;

@interface SKUITableViewSection : NSObject
{
    id <SKUITableViewSectionDelegate> _delegate;	// 8 = 0x8
    _Bool _hidesHeaderView;	// 16 = 0x10
    long long _sectionIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000065773
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool hidesHeaderView; // @synthesize hidesHeaderView=_hidesHeaderView;
@property(nonatomic) __weak id <SKUITableViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x0000000000065720
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000065718
@property(readonly, nonatomic) long long numberOfRowsInSection;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000065707
- (id)headerViewForTableView:(id)arg1;	// IMP=0x00000000000656ff
- (id)footerViewForTableView:(id)arg1;	// IMP=0x00000000000656f7

@end

