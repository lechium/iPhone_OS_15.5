//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUReadChannel-Protocol.h>

@class NSString, TSUZipArchive, TSUZipEntry;
@protocol TSUReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipReadChannel : NSObject <TSUReadChannel>
{
    TSUZipEntry *_entry;	// 8 = 0x8
    TSUZipArchive *_archive;	// 16 = 0x10
    _Bool _validateCRC;	// 24 = 0x18
    id <TSUReadChannel> _archiveReadChannel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002cbbce
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cbab8
- (void)setLowWater:(unsigned long long)arg1;	// IMP=0x00000000002cb918
- (void)close;	// IMP=0x00000000002cb8c3
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00000000002cb82d
- (_Bool)processData:(id)arg1 CRC:(unsigned int *)arg2 isDone:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002cb5f7
- (void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002cb35f
- (_Bool)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long *)arg2;	// IMP=0x00000000002cb148
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002cae8d
- (void)readWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ca8fc
- (void)dealloc;	// IMP=0x00000000002ca8be
- (id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(_Bool)arg3;	// IMP=0x00000000002ca73c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
