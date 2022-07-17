//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FPDIterator, FPDProvider, FPItem, NSURL;

__attribute__((visibility("hidden")))
@interface FPDHybridIterator
{
    FPItem *_rootItem;	// 8 = 0x8
    NSURL *_rootURL;	// 16 = 0x10
    FPDProvider *_provider;	// 24 = 0x18
    _Bool _done;	// 32 = 0x20
    unsigned long long _totalDatalessFoldersPopped;	// 40 = 0x28
    _Bool insideADatalessFolder;	// 48 = 0x30
    FPDIterator *datalessFolderIterator;	// 56 = 0x38
    FPDIterator *diskIterator;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000756a
- (void)dealloc;	// IMP=0x0000000000007503
- (unsigned long long)numFoldersPopped;	// IMP=0x00000000000074a2
- (_Bool)done;	// IMP=0x0000000000007492
- (id)error;	// IMP=0x0000000000007433
- (id)nextWithError:(id *)arg1;	// IMP=0x0000000000006d7b
- (id)initWithItem:(id)arg1 provider:(id)arg2;	// IMP=0x0000000000006b53

@end
