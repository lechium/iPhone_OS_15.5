//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXTransientCollectionsDataSource
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000009f4abb
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000009f49bb
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000009f4955
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x00000000009f494d
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000009f4909
- (long long)numberOfSections;	// IMP=0x00000000009f48fe
- (id)collectionListForSection:(long long)arg1;	// IMP=0x00000000009f47f6
- (id)collectionAtIndexPath:(id)arg1;	// IMP=0x00000000009f46e7
- (id)indexPathForCollection:(id)arg1;	// IMP=0x00000000009f465c
- (id)init;	// IMP=0x00000000009f45e2
- (id)initWithFetchResult:(id)arg1;	// IMP=0x00000000009f4574

@end

