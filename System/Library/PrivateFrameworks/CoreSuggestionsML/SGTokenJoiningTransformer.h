//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsML/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGTokenJoiningTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_separator;	// 8 = 0x8
}

+ (id)withSeparator:(id)arg1;	// IMP=0x000000000002e16c
- (void).cxx_destruct;	// IMP=0x000000000002e15c
@property(retain) NSString *separator; // @synthesize separator=_separator;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002e0bb
- (_Bool)isEqualToSGTokenJoiningTransformer:(id)arg1;	// IMP=0x000000000002dfc0
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000002df60
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000002deed
- (id)transform:(id)arg1;	// IMP=0x000000000002dde0
- (id)initWithSeparator:(id)arg1;	// IMP=0x000000000002dd75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
