//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSObject-Protocol.h>

@class NSArray, NSString;

@interface MPResponse : NSObject <NSCopying, NSObject>
{
    _Bool _valid;	// 8 = 0x8
    id _request;	// 16 = 0x10
    NSArray *_middleware;	// 24 = 0x18
    id _builder;	// 32 = 0x20
}

+ (id)builderProtocol;	// IMP=0x000000000000f7a1
- (void).cxx_destruct;	// IMP=0x000000000000f76e
@property(readonly, nonatomic) id builder; // @synthesize builder=_builder;
@property(copy, nonatomic) NSArray *middleware; // @synthesize middleware=_middleware;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, copy, nonatomic) id request; // @synthesize request=_request;
- (id)_stateDumpObject;	// IMP=0x000000000000f61b
- (id)chain;	// IMP=0x000000000000f586
- (void)invalidate;	// IMP=0x000000000000f44a
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f3fe
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;	// IMP=0x000000000000f301

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

