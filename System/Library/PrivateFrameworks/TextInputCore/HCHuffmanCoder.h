//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HCBurstTrie, HCIndexTable, NSUUID;

@interface HCHuffmanCoder : NSObject
{
    HCBurstTrie *_burstTrie;	// 8 = 0x8
    HCIndexTable *_indexTable;	// 16 = 0x10
}

+ (id)coderFromBurstTrieFile:(id)arg1 indexTableFile:(id)arg2;	// IMP=0x0000000000096e04
+ (id)coderMatchingName:(id)arg1 locale:(id)arg2;	// IMP=0x0000000000096b6d
+ (id)wordCoderForLocale:(id)arg1;	// IMP=0x0000000000096b51
+ (id)characterCoderForLocale:(id)arg1;	// IMP=0x0000000000096b35
- (void).cxx_destruct;	// IMP=0x0000000000096a1d
@property(retain, nonatomic) HCIndexTable *indexTable; // @synthesize indexTable=_indexTable;
@property(retain, nonatomic) HCBurstTrie *burstTrie; // @synthesize burstTrie=_burstTrie;
- (id)stringCodeForKey:(id)arg1;	// IMP=0x0000000000096996
- (id)codeForKey:(id)arg1;	// IMP=0x00000000000968ef
@property(readonly, nonatomic) NSUUID *versionUUID;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithBurstTrie:(id)arg1 indexTable:(id)arg2;	// IMP=0x00000000000967c7
- (id)init;	// IMP=0x00000000000967b1

@end
