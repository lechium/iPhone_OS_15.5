//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionEntry <SAAceSerializable>
{
}

+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003b9e4
+ (id)definitionEntry;	// IMP=0x000000000003b9d2
@property(copy, nonatomic) NSArray *variations;
@property(copy, nonatomic) NSArray *examples;
@property(copy, nonatomic) NSString *definition;
- (id)encodedClassName;	// IMP=0x000000000003b9c5
- (id)groupIdentifier;	// IMP=0x000000000003b9b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

