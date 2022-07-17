//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo
{
    PLPhotoLibrary *_photoLibrary;	// 8 = 0x8
    long long _countOfItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000075c5e3
@property(readonly, nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
- (id)photoLibrary;	// IMP=0x000000000075c5c1
- (id)captionForItemAtIndex:(long long)arg1;	// IMP=0x000000000075c59c
- (long long)numberOfItems;	// IMP=0x000000000075c58a
- (id)albumTitle;	// IMP=0x000000000075c57d
- (id)date;	// IMP=0x000000000075c564
- (_Bool)isLoaded;	// IMP=0x000000000075c55c
- (long long)sectionType;	// IMP=0x000000000075c554
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000075c4c7

@end
