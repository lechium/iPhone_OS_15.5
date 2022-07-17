//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/ENTTransport-Protocol.h>

@class NSData, NSMutableData, NSString, NSURL;

@interface ENTHTTPClient : NSObject <ENTTransport>
{
    int _responseDataOffset;	// 8 = 0x8
    int _timeout;	// 12 = 0xc
    NSURL *_url;	// 16 = 0x10
    NSMutableData *_requestData;	// 24 = 0x18
    NSData *_responseData;	// 32 = 0x20
    NSString *_userAgent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002204bc
@property(nonatomic) int timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) int responseDataOffset; // @synthesize responseDataOffset=_responseDataOffset;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSMutableData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)cancel;	// IMP=0x0000000000220426
- (void)flush;	// IMP=0x000000000022014d
- (id)newRequest;	// IMP=0x0000000000220019
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;	// IMP=0x000000000021ffb6
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;	// IMP=0x000000000021ff13
- (id)initWithURL:(id)arg1 userAgent:(id)arg2 timeout:(int)arg3;	// IMP=0x000000000021fe24
- (id)initWithURL:(id)arg1;	// IMP=0x000000000021fe0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
