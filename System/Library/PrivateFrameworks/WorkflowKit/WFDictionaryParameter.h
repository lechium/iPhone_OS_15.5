//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface WFDictionaryParameter
{
    NSString *_localizedItemTypeName;	// 8 = 0x8
    NSString *_localizedNewItemTypeName;	// 16 = 0x10
    NSSet *_allowedValueTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f5767
@property(readonly, nonatomic) NSSet *allowedValueTypes; // @synthesize allowedValueTypes=_allowedValueTypes;
@property(readonly, nonatomic) NSString *localizedNewItemTypeName; // @synthesize localizedNewItemTypeName=_localizedNewItemTypeName;
@property(readonly, nonatomic) NSString *localizedItemTypeName; // @synthesize localizedItemTypeName=_localizedItemTypeName;
- (_Bool)allowsMultipleValues;	// IMP=0x00000000000f572c
- (id)defaultSupportedVariableTypes;	// IMP=0x00000000000f5712
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000000f546b
- (Class)singleStateClass;	// IMP=0x00000000000f545a

@end

