//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WCDictionaryMessageRecord
{
    CDUnknownBlockType _responseHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002a17
@property(readonly, copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
- (id)description;	// IMP=0x00000000000028e6
- (_Bool)expectsResponse;	// IMP=0x00000000000028b3
- (id)initWithIdentifier:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002825

@end

