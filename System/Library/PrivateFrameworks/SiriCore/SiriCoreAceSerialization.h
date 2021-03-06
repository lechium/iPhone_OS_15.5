//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreAceSerialization : NSObject
{
}

+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2;	// IMP=0x0000000000027404
+ (_Bool)tryParsingPacketWithBytes:(const void *)arg1 length:(unsigned long long)arg2 rawPacket:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesRead:(unsigned long long *)arg5 error:(id *)arg6;	// IMP=0x00000000000270fd
+ (id)_tryParsingSpeechPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000026ea9
+ (id)_tryParsingPlistPacketBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000026e36
+ (_Bool)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char *)arg2 bytesRead:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000026c02
+ (id)aceDataForSpeechPacket:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026bf0
+ (id)aceDataForStreamEnd;	// IMP=0x0000000000026bde
+ (id)aceDataForNop;	// IMP=0x0000000000026bcc
+ (id)aceDataForPong:(unsigned int)arg1;	// IMP=0x0000000000026bba
+ (id)aceDataForPing:(unsigned int)arg1;	// IMP=0x0000000000026ba8
+ (id)aceDataForObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026b96
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1;	// IMP=0x0000000000026b84
+ (id)dataForSpeechPacket:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002657e
+ (id)dataForStreamEnd;	// IMP=0x0000000000026546
+ (id)dataForNop;	// IMP=0x0000000000026515
+ (id)dataForPong:(unsigned int)arg1;	// IMP=0x00000000000264e6
+ (id)dataForPing:(unsigned int)arg1;	// IMP=0x00000000000264b7
+ (id)dataForObject:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000026317
+ (id)dataForStreamHeaderWithCompressionType:(unsigned char)arg1;	// IMP=0x00000000000262e4

@end

