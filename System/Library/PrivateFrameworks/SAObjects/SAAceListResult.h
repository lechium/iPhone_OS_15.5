//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAAceListResult <SAAceSerializable>
{
}

+ (id)aceListResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001a330
+ (id)aceListResult;	// IMP=0x000000000001a31e
@property(copy, nonatomic) NSArray *result;
- (id)encodedClassName;	// IMP=0x000000000001a311
- (id)groupIdentifier;	// IMP=0x000000000001a2fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
