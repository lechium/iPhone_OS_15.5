//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface WFDictionaryParameterState : NSObject <WFParameterState>
{
    NSArray *_keyValuePairs;	// 8 = 0x8
    NSUUID *_identity;	// 16 = 0x10
}

+ (Class)processingValueClass;	// IMP=0x0000000000152733
- (void).cxx_destruct;	// IMP=0x0000000000151cc1
@property(readonly, nonatomic) NSUUID *identity; // @synthesize identity=_identity;
@property(readonly, copy, nonatomic) NSArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001519bf
- (id)containedVariables;	// IMP=0x0000000000151968
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000151866
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015185b
- (id)serializedRepresentation;	// IMP=0x0000000000151731
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x000000000015153d
- (id)initWithKeyValuePairs:(id)arg1 identity:(id)arg2;	// IMP=0x000000000015139a
- (id)initWithKeyValuePairs:(id)arg1;	// IMP=0x0000000000151319

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

