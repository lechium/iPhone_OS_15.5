//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUSimpleOutputStream-Protocol.h>

@class NSData, NSMutableArray, NSString, OISFUCryptoKey, OISFUMoveableFileOutputStream, OISFUZipFreeSpaceEntry, OISFUZipOutputEntry;
@protocol SFUOutputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>
{
    OISFUMoveableFileOutputStream *mOutputStream;	// 8 = 0x8
    OISFUCryptoKey *mCryptoKey;	// 16 = 0x10
    NSData *mPassphraseHint;	// 24 = 0x18
    NSData *mEncryptedDocumentUuid;	// 32 = 0x20
    NSMutableArray *mEntries;	// 40 = 0x28
    OISFUZipOutputEntry *mCurrentEntry;	// 48 = 0x30
    OISFUZipOutputEntry *mLastEntryInFile;	// 56 = 0x38
    id <SFUOutputStream> mEntryOutputStream;	// 64 = 0x40
    char *mBuffer;	// 72 = 0x48
    NSMutableArray *mFreeList;	// 80 = 0x50
    OISFUZipFreeSpaceEntry *mCurrentFreeSpace;	// 88 = 0x58
    unsigned long long mFreeBytes;	// 96 = 0x60
}

+ (_Bool)createZipWithItemsAtPath:(id)arg1 zippedPath:(id)arg2 rootPathComponentName:(id)arg3;	// IMP=0x000000000029b7dd
+ (unsigned long long)approximateBytesForEntryHeaderWithName:(id)arg1;	// IMP=0x000000000029b587
- (unsigned int)crc32ForEntry:(id)arg1;	// IMP=0x000000000029d115
- (void)reset;	// IMP=0x000000000029d0ad
- (unsigned long long)freeBytes;	// IMP=0x000000000029d0a3
- (void)flush;	// IMP=0x000000000029d08d
- (id)entriesAtPath:(id)arg1;	// IMP=0x000000000029cf33
- (id)entryNames;	// IMP=0x000000000029ce97
- (void)moveToPath:(id)arg1;	// IMP=0x000000000029cd3a
- (void)close;	// IMP=0x000000000029c9c4
- (void)setEncryptedDocumentUuid:(id)arg1;	// IMP=0x000000000029c970
- (void)removeEntryWithName:(id)arg1;	// IMP=0x000000000029c5fa
- (_Bool)canRemoveEntryWithName:(id)arg1;	// IMP=0x000000000029c4bb
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000029c2f6
- (void)setCrc32ForCurrentEntry:(unsigned int)arg1;	// IMP=0x000000000029c2de
- (id)beginUncompressedUnknownSizeEntryWithName:(id)arg1;	// IMP=0x000000000029c24b
- (void)beginUnknownSizeEntryWithName:(id)arg1 isCompressed:(_Bool)arg2;	// IMP=0x000000000029c232
- (void)beginEntryWithName:(id)arg1 isCompressed:(_Bool)arg2 uncompressedSize:(unsigned long long)arg3;	// IMP=0x000000000029be86
- (void)dealloc;	// IMP=0x000000000029b767
- (id)initWithPath:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;	// IMP=0x000000000029b6d8
- (id)initWithPath:(id)arg1;	// IMP=0x000000000029b6c1
- (id)initWithOutputStream:(id)arg1 cryptoKey:(id)arg2 passphraseHint:(id)arg3;	// IMP=0x000000000029b5b8
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg1;	// IMP=0x000000000029e40e
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg1;	// IMP=0x000000000029e37c
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;	// IMP=0x000000000029e271
- (void)writeCentralFileHeaderUsingEntry:(id)arg1 isFirstEntry:(_Bool)arg2;	// IMP=0x000000000029dde3
- (unsigned long long)writeLocalFileHeaderForEntry:(id)arg1;	// IMP=0x000000000029dc49
- (void)coalesceAndTruncateFreeSpace;	// IMP=0x000000000029d950
- (void)finishEntry;	// IMP=0x000000000029d25a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

