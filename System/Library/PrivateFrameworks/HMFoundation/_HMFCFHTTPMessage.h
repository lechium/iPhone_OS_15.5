//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPMessage
{
    struct __CFHTTPMessage *_message;	// 8 = 0x8
}

+ (id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3;	// IMP=0x0000000000008a58
+ (id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3;	// IMP=0x000000000000895b
+ (id)dateFormatter;	// IMP=0x0000000000008853
@property(readonly, nonatomic) struct __CFHTTPMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSData *body;
- (void)setContentLength:(long long)arg1;	// IMP=0x0000000000008efd
- (long long)contentLength;	// IMP=0x0000000000008e9f
- (void)setContentType:(id)arg1;	// IMP=0x0000000000008e83
- (id)contentType;	// IMP=0x0000000000008e67
- (void)setDate:(id)arg1;	// IMP=0x0000000000008dc2
- (id)date;	// IMP=0x0000000000008d30
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;	// IMP=0x0000000000008cc1
- (id)valueForHeaderField:(id)arg1;	// IMP=0x0000000000008c69
@property(readonly, nonatomic) NSDictionary *headerFields;
- (void)dealloc;	// IMP=0x0000000000008bf3
- (id)initWithMessageRef:(struct __CFHTTPMessage *)arg1;	// IMP=0x0000000000008b9d
- (id)init;	// IMP=0x0000000000008af5

@end
