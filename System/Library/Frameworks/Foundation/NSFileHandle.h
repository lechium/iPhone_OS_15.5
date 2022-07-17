//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>
{
}

+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000005c174
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000005c12d
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000005c0e6
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c0aa
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c06e
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c035
+ (id)fileHandleForUpdatingAtPath:(id)arg1;	// IMP=0x000000000005bffe
+ (id)fileHandleForWritingAtPath:(id)arg1;	// IMP=0x000000000005bfc7
+ (id)fileHandleForReadingAtPath:(id)arg1;	// IMP=0x000000000005bf93
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005bd7d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005bd38
+ (id)fileHandleWithNullDevice;	// IMP=0x000000000005bce3
+ (id)fileHandleWithStandardError;	// IMP=0x000000000005bbfa
+ (id)fileHandleWithStandardOutput;	// IMP=0x000000000005bb11
+ (id)fileHandleWithStandardInput;	// IMP=0x000000000005ba2b
+ (void)initialize;	// IMP=0x000000000005b94b
- (void)_closeOnDealloc;	// IMP=0x000000000005d487
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d45c
- (CDUnknownBlockType)readabilityHandler;	// IMP=0x000000000005d42e
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d403
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x000000000005d3d5
- (int)fileDescriptor;	// IMP=0x000000000005d3a4
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x000000000005d1e1
- (void)closeFile;	// IMP=0x000000000005d1b6
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x000000000005cff3
- (void)synchronizeFile;	// IMP=0x000000000005cfc8
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005cdfc
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x000000000005cdd1
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005cc02
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x000000000005cbd7
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005c9ff
- (unsigned long long)seekToEndOfFile;	// IMP=0x000000000005c9d1
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005c7f9
@property(readonly) unsigned long long offsetInFile;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000005c5ff
- (void)writeData:(id)arg1;	// IMP=0x000000000005c5d4
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005c407
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000005c3d9
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x000000000005c217
- (id)readDataToEndOfFile;	// IMP=0x000000000005c1e9
@property(readonly, copy) NSData *availableData;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000005bf58
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;	// IMP=0x000000000005bee9
- (id)initWithFileDescriptor:(int)arg1;	// IMP=0x000000000005bebb
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(_Bool)arg2;	// IMP=0x000000000005be8d
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;	// IMP=0x000000000005be5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005be34
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005bd85
- (Class)classForCoder;	// IMP=0x000000000005bd6c

@end
