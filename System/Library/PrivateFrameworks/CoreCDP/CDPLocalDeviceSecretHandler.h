//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPContext;
@protocol CDPLocalDeviceSecretHandlerProtocol;

@interface CDPLocalDeviceSecretHandler : NSObject
{
    id <CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;	// 8 = 0x8
    CDPContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000010e31
@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void)userDidCancelWithError:(id)arg1;	// IMP=0x0000000000010e11
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000010dfb
- (id)initWithContext:(id)arg1 handler:(id)arg2;	// IMP=0x0000000000010d73

@end

