//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAMailMessage;

@interface DADraftMessageRequest
{
    _Bool _send;	// 24 = 0x18
    DAMailMessage *_message;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001daa1
@property(nonatomic) _Bool send; // @synthesize send=_send;
@property(retain, nonatomic) DAMailMessage *message; // @synthesize message=_message;
- (id)description;	// IMP=0x000000000001d98b
- (id)initWithRequestType:(int)arg1 message:(id)arg2 send:(_Bool)arg3;	// IMP=0x000000000001d8ec

@end

