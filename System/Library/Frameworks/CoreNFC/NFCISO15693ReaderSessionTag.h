//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFCISO15693Tag-Protocol.h>

@class NSData, NSString;
@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCISO15693ReaderSessionTag <NFCISO15693Tag>
{
}

+ (_Bool)decodeIdentifier:(id)arg1 manufacturerCode:(unsigned long long *)arg2 serialNumber:(id *)arg3;	// IMP=0x0000000000009cb9
+ (id)reverseByteOrder:(id)arg1;	// IMP=0x0000000000009bf4
- (void)sendRequestWithFlag:(long long)arg1 commandCode:(long long)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ca26
- (void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c92b
- (void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c830
- (void)readBufferWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c733
- (void)challengeWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c65f
- (void)keyUpdateWithRequestFlags:(unsigned char)arg1 keyIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c562
- (void)authenticateWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c465
- (void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c390
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c295
- (void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c1c1
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c0ed
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bff2
- (void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000bef7
- (void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bdfc
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bd01
- (void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bc0b
- (void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bb0b
- (void)lockDSFIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ba37
- (void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b963
- (void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b88f
- (void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b7bb
- (void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b6e7
- (void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b613
- (void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b53f
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b46a
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b36f
- (void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b29b
- (void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b1c7
- (void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b0cc
- (void)stayQuietWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aff8
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a7f6
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a108
- (id)_parseResponseData:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000009f87
@property(readonly, copy, nonatomic) NSData *icSerialNumber;
@property(readonly, nonatomic) unsigned long long icManufacturerCode;
@property(readonly, copy, nonatomic) NSData *identifier;
- (unsigned long long)_parseResponseErrorWithData:(id)arg1;	// IMP=0x0000000000009bc9
- (_Bool)_transceiveWithData:(id)arg1 receivedData:(id *)arg2 commandConfig:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000992c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000098fd

// Remaining properties
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <NFCReaderSession> session;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end
