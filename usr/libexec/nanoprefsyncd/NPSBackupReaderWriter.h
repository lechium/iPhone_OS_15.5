//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSBlobReaderWriter, NSURL;

@interface NPSBackupReaderWriter : NSObject
{
    NPSBlobReaderWriter *_fh;	// 8 = 0x8
    NSURL *_uncompressedPath;	// 16 = 0x10
    NSURL *_compressedPath;	// 24 = 0x18
}

+ (_Bool)losslessFileCompressionFrom:(id)arg1 to:(id)arg2 shouldCompress:(_Bool)arg3;	// IMP=0x004000000002373f
+ (id)tempFilePath;	// IMP=0x001000000002367c
- (void).cxx_destruct;	// IMP=0x0020000000023fb4
@property(readonly, nonatomic) NSURL *compressedPath; // @synthesize compressedPath=_compressedPath;
- (_Bool)doneWriting;	// IMP=0x0010000000023e7a
- (_Bool)enumerateMessages:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023c35
- (void)writeMessage:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0010000000023b05
- (id)initWithPathToLoadBackup:(id)arg1;	// IMP=0x001000000002357d
- (id)initWithPathToCreateBackup:(id)arg1;	// IMP=0x001000000002346e

@end
