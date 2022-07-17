//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMDDataStreamMessageCoder : NSObject
{
}

+ (id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2;	// IMP=0x0000000000a365dd
+ (id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3;	// IMP=0x0000000000a364e9
+ (id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000a3641d
+ (_Bool)readHeaderFromPartialData:(const char *)arg1 length:(unsigned long long)arg2 frameType:(unsigned char *)arg3 payloadLength:(unsigned long long *)arg4;	// IMP=0x0000000000a363de
+ (_Bool)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char *)arg2 payloadLength:(unsigned long long *)arg3;	// IMP=0x0000000000a36326
+ (id)buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a3630d
+ (_Bool)unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000a362f4
+ (id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a362db
+ (_Bool)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000a362c2
+ (id)_buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a361b6
+ (id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a3601f
+ (id)_encodeOPACKHeader:(id)arg1 payload:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000a35e59
+ (_Bool)_unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000a35d73
+ (_Bool)_decodeOPACKFrame:(id)arg1 receivedHeader:(id *)arg2 receivedPayload:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000a35b27
+ (_Bool)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id *)arg3 receivedPayload:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000a3598a

@end
