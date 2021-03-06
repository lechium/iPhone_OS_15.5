//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSString;

@interface NSPDNSPacket : NSObject
{
    _Bool _isAuthoritativeAnswer;	// 8 = 0x8
    _Bool _isTruncated;	// 9 = 0x9
    _Bool _isRecursionDesired;	// 10 = 0xa
    _Bool _isRecursionAvailable;	// 11 = 0xb
    long long _identifier;	// 16 = 0x10
    NSDate *_timestamp;	// 24 = 0x18
    long long _messageType;	// 32 = 0x20
    long long _opCode;	// 40 = 0x28
    long long _responseCode;	// 48 = 0x30
    NSArray *_queries;	// 56 = 0x38
    NSArray *_answers;	// 64 = 0x40
    NSArray *_authorities;	// 72 = 0x48
    NSArray *_additionalRecords;	// 80 = 0x50
    NSData *_data;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002c37c
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) NSArray *additionalRecords; // @synthesize additionalRecords=_additionalRecords;
@property(readonly) NSArray *authorities; // @synthesize authorities=_authorities;
@property(readonly) NSArray *answers; // @synthesize answers=_answers;
@property(readonly) NSArray *queries; // @synthesize queries=_queries;
@property(readonly) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly) _Bool isRecursionAvailable; // @synthesize isRecursionAvailable=_isRecursionAvailable;
@property(readonly) _Bool isRecursionDesired; // @synthesize isRecursionDesired=_isRecursionDesired;
@property(readonly) _Bool isTruncated; // @synthesize isTruncated=_isTruncated;
@property(readonly) _Bool isAuthoritativeAnswer; // @synthesize isAuthoritativeAnswer=_isAuthoritativeAnswer;
@property(readonly) long long opCode; // @synthesize opCode=_opCode;
@property(readonly) long long messageType; // @synthesize messageType=_messageType;
@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) long long identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *responseCodeString;
- (id)initFromData:(id)arg1;	// IMP=0x000000000002b81a

@end

