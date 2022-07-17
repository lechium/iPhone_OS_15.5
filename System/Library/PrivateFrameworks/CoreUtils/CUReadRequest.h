//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableData;

@interface CUReadRequest : NSObject
{
    char *_bufferPtr;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    unsigned char _messageUUID[16];	// 32 = 0x20
    _Bool _hasMessageUUID;	// 48 = 0x30
    unsigned int _statusFlags;	// 52 = 0x34
    void *_bufferBytes;	// 56 = 0x38
    NSMutableData *_bufferData;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
    NSData *_data;	// 80 = 0x50
    unsigned long long _minLength;	// 88 = 0x58
    unsigned long long _maxLength;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005d538
@property(nonatomic) unsigned int statusFlags; // @synthesize statusFlags=_statusFlags;
@property(nonatomic) _Bool hasMessageUUID; // @synthesize hasMessageUUID=_hasMessageUUID;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) void *bufferBytes; // @synthesize bufferBytes=_bufferBytes;
@property(readonly, nonatomic) char *messageUUID;

@end
