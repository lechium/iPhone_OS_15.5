//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface TKTokenKeyExchangeParameters : NSObject
{
    long long _requestedSize;	// 8 = 0x8
    NSData *_sharedInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002ddc8
@property(readonly, copy) NSData *sharedInfo; // @synthesize sharedInfo=_sharedInfo;
@property(readonly) long long requestedSize; // @synthesize requestedSize=_requestedSize;
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000002dcd3

@end

