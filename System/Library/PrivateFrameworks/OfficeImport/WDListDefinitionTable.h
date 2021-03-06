//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    NSMutableArray *mListDefinitions;	// 16 = 0x10
    NSMutableDictionary *mListDefinitionMapById;	// 24 = 0x18
    NSMutableDictionary *mListDefinitionMapByStyleId;	// 32 = 0x20
    WDListDefinition *mNullListDefinition;	// 40 = 0x28
    WDListDefinition *mDefaultListDefinition;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003fb309
- (id)description;	// IMP=0x00000000003fb2cb
- (id)resolvedDefinitionWithDefinitionId:(int)arg1;	// IMP=0x00000000003fb1cc
- (id)definitionWithStyleId:(id)arg1;	// IMP=0x00000000003fb1a6
- (id)definitionWithDefinitionId:(int)arg1;	// IMP=0x00000000003fb10b
- (id)addDefinitionWithDefinitionId:(int)arg1 styleId:(id)arg2;	// IMP=0x00000000003fafba
- (id)definitions;	// IMP=0x00000000003fafac
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000c1455

@end

