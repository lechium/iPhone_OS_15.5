//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface TSUZipArchive : NSObject
{
    unsigned long long _options;	// 8 = 0x8
    NSMutableDictionary *_entriesMap;	// 16 = 0x10
    NSMutableOrderedSet *_entries;	// 24 = 0x18
    long long _endOfLastEntry;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002ad7c6
@property(readonly, nonatomic) long long endOfLastEntry; // @synthesize endOfLastEntry=_endOfLastEntry;
- (id)debugDescription;	// IMP=0x00000000002ad6f0
@property(readonly, nonatomic) _Bool isValid;
- (id)newArchiveReadChannel;	// IMP=0x00000000002ad3f8
@property(readonly, nonatomic) unsigned long long archiveLength;
- (void)collapseCommonRootDirectory;	// IMP=0x00000000002accc5
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002acabb
- (id)entryForName:(id)arg1;	// IMP=0x00000000002aca2e
- (id)normalizeEntryName:(id)arg1;	// IMP=0x00000000002ac9ba
- (id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000002ac998
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;	// IMP=0x00000000002ac7da
- (id)streamReadChannelForEntry:(id)arg1;	// IMP=0x00000000002ac7c3
- (id)readChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;	// IMP=0x00000000002ac549
- (id)readChannelForEntry:(id)arg1;	// IMP=0x00000000002ac532
- (void)addEntry:(id)arg1;	// IMP=0x00000000002ac3fe
- (_Bool)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002ac1f8
- (void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002abbaa
- (void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned int)arg4 seekForward:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000002ab5eb
- (_Bool)readFileCommentFromBuffer:(const void **)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000002ab4fb
- (_Bool)readZip64ExtraFieldFromBuffer:(const void *)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002ab306
- (_Bool)readExtraFieldsFromBuffer:(const void **)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000002aafb2
- (_Bool)readFilenameFromBuffer:(const void **)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;	// IMP=0x00000000002aaddc
- (_Bool)readCentralFileHeaderWithBuffer:(const void **)arg1 dataSize:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000002aa9bb
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aa89b
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002aa7a3
- (void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aa5b0
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aa4a3
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aa2cb
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002aa0fb
- (void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a9edf
- (void)readArchiveWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a98cf
@property(readonly, nonatomic) _Bool hasNonEmptyEntries;
@property(readonly, nonatomic) unsigned long long entriesCount;
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x00000000002a973d
- (id)init;	// IMP=0x00000000002a9729

@end
