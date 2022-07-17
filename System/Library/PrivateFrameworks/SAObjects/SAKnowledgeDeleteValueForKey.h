//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAKnowledgeDeleteValueForKey <SAAceSerializable>
{
}

+ (id)deleteValueForKeyWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002a81c
+ (id)deleteValueForKey;	// IMP=0x000000000002a80a
- (_Bool)requiresResponse;	// IMP=0x000000000002a88c
@property(copy, nonatomic) NSString *storeType;
@property(copy, nonatomic) NSString *storeName;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;	// IMP=0x000000000002a7fd
- (id)groupIdentifier;	// IMP=0x000000000002a7e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
