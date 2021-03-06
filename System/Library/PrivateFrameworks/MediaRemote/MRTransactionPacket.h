//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableData, NSString, _MRTransactionKeyProtobuf, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying>
{
    NSMutableData *_data;	// 8 = 0x8
    _MRTransactionKeyProtobuf *_key;	// 16 = 0x10
    unsigned long long _writeLength;	// 24 = 0x18
    unsigned long long _writePosition;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    unsigned long long _totalLength;	// 48 = 0x30
    unsigned long long _totalWritePosition;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000019a848
@property(readonly, nonatomic) unsigned long long totalWritePosition; // @synthesize totalWritePosition=_totalWritePosition;
@property(readonly, nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long writePosition; // @synthesize writePosition=_writePosition;
@property(nonatomic) unsigned long long writeLength; // @synthesize writeLength=_writeLength;
@property(readonly, nonatomic) _MRTransactionKeyProtobuf *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (_Bool)isComplete;	// IMP=0x000000000019a7f0
@property(readonly, nonatomic, getter=isWriteComplete) _Bool writeComplete;
@property(readonly, nonatomic, getter=isReadComplete) _Bool readComplete;
@property(readonly, nonatomic) unsigned long long actualLength;
- (void)writeComplete;	// IMP=0x000000000019a4dd
- (id)description;	// IMP=0x000000000019a472
@property(readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019a1dd
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000019a055
- (id)initWithPackets:(id)arg1;	// IMP=0x0000000000199c20
- (id)initWithData:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000199a98

@end

