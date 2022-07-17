//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject
{
    _Bool _expectsResponse;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    CDUnknownBlockType _errorHandler;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002d4b
@property(retain) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) _Bool expectsResponse; // @synthesize expectsResponse=_expectsResponse;
- (unsigned long long)hash;	// IMP=0x0000000000002cb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002bdf
- (id)description;	// IMP=0x0000000000002b22
- (void)dealloc;	// IMP=0x0000000000002ae3
- (id)initWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002a2a

@end
