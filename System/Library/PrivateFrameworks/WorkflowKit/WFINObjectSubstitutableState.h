//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFINObjectSubstitutableState
{
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x00000000001b197f
+ (id)serializedRepresentationFromValue:(id)arg1;	// IMP=0x00000000001b1972
+ (Class)processingValueClass;	// IMP=0x00000000001b1961
- (_Bool)stateIsEquivalent:(id)arg1;	// IMP=0x00000000001b175a
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001b1576

@end

