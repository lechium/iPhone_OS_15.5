//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IDSSocketPairResourceTransferMessage
{
}

+ (id)cancelMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4;	// IMP=0x00000000000a9f2b
+ (id)resumeMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4;	// IMP=0x00000000000a9e13
- (unsigned char)cancelReason;	// IMP=0x00000000000a9b4f
- (unsigned long long)byteOffset;	// IMP=0x00000000000a9821
- (unsigned char)type;	// IMP=0x00000000000a9778
- (unsigned char)command;	// IMP=0x00000000000a976d

@end

