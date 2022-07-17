//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol WFVariableProvider;

@interface WFUserDefinedVariable
{
    id <WFVariableProvider> _variableProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000029de4f
- (id)variableProvider;	// IMP=0x000000000029de36
- (void)variableProvider:(id)arg1 variableNameDidChangeTo:(id)arg2;	// IMP=0x000000000029dd38
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000029dc5d
- (id)possibleContentClassesWithContext:(id)arg1;	// IMP=0x000000000029db8f
@property(readonly, nonatomic) NSString *name;
- (id)UUID;	// IMP=0x000000000029da48
- (id)iconImage;	// IMP=0x000000000029da28
- (_Bool)requiresModernVariableSupport;	// IMP=0x000000000029d9e0
- (_Bool)isAvailable;	// IMP=0x000000000029d93e
- (id)initWithDictionary:(id)arg1 variableProvider:(id)arg2;	// IMP=0x000000000029d731
- (id)initWithName:(id)arg1 variableProvider:(id)arg2 aggrandizements:(id)arg3;	// IMP=0x000000000029d5df

@end
