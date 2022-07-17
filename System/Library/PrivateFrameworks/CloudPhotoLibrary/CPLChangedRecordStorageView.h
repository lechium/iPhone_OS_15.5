//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeStorage, CPLRecordStorageView;

@interface CPLChangedRecordStorageView
{
    CPLChangeStorage *_changeStorage;	// 8 = 0x8
    CPLRecordStorageView *_baseStorageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000cfd81
@property(readonly, nonatomic) CPLRecordStorageView *baseStorageView; // @synthesize baseStorageView=_baseStorageView;
@property(readonly, nonatomic) CPLChangeStorage *changeStorage; // @synthesize changeStorage=_changeStorage;
- (id)description;	// IMP=0x00000000000cfcd8
- (id)recordViewsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000cf217
- (id)recordViewWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000cf022
- (id)initWithChangeStorage:(id)arg1 overStorageView:(id)arg2;	// IMP=0x00000000000cef80
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class *)arg3 error:(id *)arg4;	// IMP=0x00000000000acec5
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00000000000acddf
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000acd19
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000acc31

@end
