//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, RAPLayoutDownloader;

__attribute__((visibility("hidden")))
@interface RAPPlacecardImageryLayoutManager
{
    NSArray *_layoutItems;	// 8 = 0x8
    RAPLayoutDownloader *_downloader;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002c495d
- (id)issueItems;	// IMP=0x00100000002c46e7
- (id);	// IMP=0x00100000002c45b7
- (unsigned long long)numberOfIssueItems;	// IMP=0x00100000002c459a
- (void)downloadAndResolveLayoutWithMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002c42d6
- (void)mergeWithServerConfig:(id)arg1;	// IMP=0x00100000002c39a8
- (id)initWithDefaultItems:(id)arg1;	// IMP=0x00100000002c3634

@end

