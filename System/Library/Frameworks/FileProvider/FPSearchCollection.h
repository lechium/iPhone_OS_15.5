//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPSearchQueryResultsProviding-Protocol.h>

@class NSFileProviderSearchQuery, NSPredicate;

@interface FPSearchCollection <FPSearchQueryResultsProviding>
{
    NSPredicate *_filterPredicate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000104094
- (id)scopedSearchQuery;	// IMP=0x0000000000104017
@property(copy, nonatomic) NSFileProviderSearchQuery *searchQuery;
- (_Bool)isCollectionValidForItem:(id)arg1;	// IMP=0x0000000000103d25
- (id)_enumerationSettingsPredicate;	// IMP=0x0000000000103a19
- (id)_createDescriptorWithSortDescriptors:(id)arg1;	// IMP=0x00000000001038ff
- (id)createDataSourceWithSortDescriptors:(id)arg1;	// IMP=0x0000000000103741
- (id)init;	// IMP=0x00000000001036fc

@end

