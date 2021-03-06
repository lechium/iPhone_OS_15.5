//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;
@protocol PMLTransformerProtocol;

@interface SGConversationFlatteningTransformer : NSObject <PMLTransformerProtocol>
{
    NSObject<PMLTransformerProtocol> *_perMessageTranformer;	// 8 = 0x8
}

+ (id)withPerMessageTransformer:(id)arg1;	// IMP=0x0000000000004701
- (void).cxx_destruct;	// IMP=0x00000000000046f1
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004673
- (_Bool)isEqualToConversationFlatteningTransformer:(id)arg1;	// IMP=0x0000000000004647
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x0000000000004534
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x0000000000004437
- (id)transform:(id)arg1;	// IMP=0x0000000000003cb2
- (id)initWithPerMessageTransformer:(id)arg1;	// IMP=0x0000000000003c47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

