//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HAPCharacteristicValueTransitionState : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_activeTransitionContexts;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000117211
- (void).cxx_destruct;	// IMP=0x0000000000117201
@property(retain, nonatomic) NSMutableArray *activeTransitionContexts; // @synthesize activeTransitionContexts=_activeTransitionContexts;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000117043
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000116fda
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000116c5a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000116987
- (id)initWithActiveTransitionContexts:(id)arg1;	// IMP=0x0000000000116914
- (id)init;	// IMP=0x00000000001168e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

