//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSData, NSString;

@interface SAIntentGroupIntentDefinitionInfo <SAAceSerializable>
{
}

+ (id)intentDefinitionInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000023a18
+ (id)intentDefinitionInfo;	// IMP=0x0000000000023a06
@property(copy, nonatomic) NSData *intentDefinition;
- (id)encodedClassName;	// IMP=0x00000000000239f9
- (id)groupIdentifier;	// IMP=0x00000000000239e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
