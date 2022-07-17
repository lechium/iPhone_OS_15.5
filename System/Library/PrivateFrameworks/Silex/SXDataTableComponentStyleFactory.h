//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableStyleFactory-Protocol.h>

@class NSString, SXDataRecordStore, SXDataTableSelectorValidator, SXDataTableStyle, SXJSONObjectMerger;

@interface SXDataTableComponentStyleFactory : NSObject <SXDataTableStyleFactory>
{
    SXDataRecordStore *_recordStore;	// 8 = 0x8
    SXDataTableStyle *_tableStyle;	// 16 = 0x10
    unsigned long long _dataOrientation;	// 24 = 0x18
    SXDataTableSelectorValidator *_selectorValidator;	// 32 = 0x20
    SXJSONObjectMerger *_rowStyleMerger;	// 40 = 0x28
    SXJSONObjectMerger *_columnStyleMerger;	// 48 = 0x30
    SXJSONObjectMerger *_cellStyleMerger;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000006ea2d
@property(readonly, nonatomic) SXJSONObjectMerger *cellStyleMerger; // @synthesize cellStyleMerger=_cellStyleMerger;
@property(readonly, nonatomic) SXJSONObjectMerger *columnStyleMerger; // @synthesize columnStyleMerger=_columnStyleMerger;
@property(readonly, nonatomic) SXJSONObjectMerger *rowStyleMerger; // @synthesize rowStyleMerger=_rowStyleMerger;
@property(readonly, nonatomic) SXDataTableSelectorValidator *selectorValidator; // @synthesize selectorValidator=_selectorValidator;
@property(readonly, nonatomic) unsigned long long dataOrientation; // @synthesize dataOrientation=_dataOrientation;
@property(readonly, nonatomic) SXDataTableStyle *tableStyle; // @synthesize tableStyle=_tableStyle;
@property(readonly, nonatomic) SXDataRecordStore *recordStore; // @synthesize recordStore=_recordStore;
- (id)descriptorForIdentifier:(id)arg1;	// IMP=0x000000000006e7ee
- (long long)compareSelector:(id)arg1 withOtherSelector:(id)arg2;	// IMP=0x000000000006e732
- (id)sortStylesMatchesBySelectorWeight:(id)arg1;	// IMP=0x000000000006e634
- (id)filterDuplicateSequentialStyles:(id)arg1;	// IMP=0x000000000006e192
- (id)styleByMergingStyleMatches:(id)arg1 forBaseStyle:(id)arg2 merger:(id)arg3;	// IMP=0x000000000006df0e
- (unsigned long long)isEvenNumber:(long long)arg1;	// IMP=0x000000000006def1
- (unsigned long long)isOddNumber:(long long)arg1;	// IMP=0x000000000006dee4
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1 usingBaseStyle:(id)arg2;	// IMP=0x000000000006daed
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;	// IMP=0x000000000006d704
- (id)rowStyleForRowIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;	// IMP=0x000000000006d31b
- (id)cellStyleForIndexPath:(CDStruct_2fea82da)arg1;	// IMP=0x000000000006d284
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;	// IMP=0x000000000006d1f5
- (id)rowStyleForRowIndex:(unsigned long long)arg1;	// IMP=0x000000000006d166
- (id)headerCellStyleForIndexPath:(CDStruct_2fea82da)arg1;	// IMP=0x000000000006cfd3
- (id)headerColumnStyleForColumnIndex:(unsigned long long)arg1;	// IMP=0x000000000006ce54
- (id)headerRowStyleForRowIndex:(unsigned long long)arg1;	// IMP=0x000000000006ccd5
- (id)dataTableStyle;	// IMP=0x000000000006ccc3
- (id)initWithRecordStore:(id)arg1 tableStyle:(id)arg2 dataOrientation:(unsigned long long)arg3 rowStyleMerger:(id)arg4 columnStyleMerger:(id)arg5 cellStyleMerger:(id)arg6;	// IMP=0x000000000006cb8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
