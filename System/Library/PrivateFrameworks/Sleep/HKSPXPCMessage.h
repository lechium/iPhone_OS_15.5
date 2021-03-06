//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface HKSPXPCMessage : NSObject <BSDescriptionProviding>
{
    NSString *_identifier;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    CDUnknownBlockType _errorHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000166e0
@property(readonly, copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000165ce
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000001657e
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000016562
- (id)succinctDescription;	// IMP=0x0000000000016512
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000163f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

