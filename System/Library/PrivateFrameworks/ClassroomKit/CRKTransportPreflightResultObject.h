//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATTransport;

@interface CRKTransportPreflightResultObject : NSObject
{
    _Bool _shouldResetBackoff;	// 8 = 0x8
    CATTransport *_transport;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000075d90
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) _Bool shouldResetBackoff; // @synthesize shouldResetBackoff=_shouldResetBackoff;
- (id)takeTransport;	// IMP=0x0000000000075d22
- (id)initWithTransport:(id)arg1 shouldResetBackoff:(_Bool)arg2;	// IMP=0x0000000000075cac
- (void)dealloc;	// IMP=0x0000000000075bef

@end
