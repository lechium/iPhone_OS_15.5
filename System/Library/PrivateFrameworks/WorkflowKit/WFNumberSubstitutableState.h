//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface WFNumberSubstitutableState
{
}

+ (id)serializedRepresentationFromNumber:(id)arg1;	// IMP=0x000000000033e071
+ (id)serializedRepresentationFromValue:(id)arg1;	// IMP=0x000000000033df79
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x000000000033ddd0
+ (Class)processingValueClass;	// IMP=0x000000000033ddbf
@property(readonly, nonatomic) NSNumber *number;
- (id)initWithNumber:(id)arg1;	// IMP=0x000000000033dd15
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000033dc25

@end

