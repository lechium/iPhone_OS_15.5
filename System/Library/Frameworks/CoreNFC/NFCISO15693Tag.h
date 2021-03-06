//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFCISO15693Tag-Protocol.h>

@class NSData, NSString;
@protocol NFCReaderSession;

__attribute__((visibility("hidden")))
@interface NFCISO15693Tag <NFCISO15693Tag>
{
}

- (void)sendRequestWithFlag:(long long)arg1 commandCode:(long long)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001db5d
- (void)extendedFastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d45b
- (void)_wtxRetryWithCommnand:(id)arg1 maxRetry:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cfb1
- (void)extendedGetMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ca62
- (void)readBufferWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c87d
- (void)challengeWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c6e8
- (void)keyUpdateWithRequestFlags:(unsigned char)arg1 keyIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c4a5
- (void)authenticateWithRequestFlags:(unsigned char)arg1 cryptoSuiteIdentifier:(long long)arg2 message:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c262
- (void)extendedWriteMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b80b
- (void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b2fe
- (void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001afe0
- (void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001aa9e
- (void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a700
- (void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a32f
- (void)fastReadMultipleBlocksWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019cec
- (void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001979c
- (void)getSystemInfoAndUIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019327
- (void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001925f
- (void)lockDSFIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001912d
- (void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001911b
- (void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018fd3
- (void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018ea1
- (void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018d59
- (void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018c27
- (void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018af0
- (void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000018090
- (void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000017a27
- (void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000178df
- (void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000017444
- (void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001728f
- (void)stayQuietWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001717d
- (void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017082
- (void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016f87
- (id)_parseResponseErrorWithData:(id)arg1;	// IMP=0x0000000000016d77
@property(readonly, copy, nonatomic) NSData *icSerialNumber;
@property(readonly, nonatomic) unsigned long long icManufacturerCode;
@property(readonly, copy, nonatomic) NSData *identifier;
- (id)_generateRequestHeader:(unsigned char)arg1 flags:(unsigned char)arg2;	// IMP=0x0000000000016ae3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016ab4

// Remaining properties
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <NFCReaderSession> session;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end

