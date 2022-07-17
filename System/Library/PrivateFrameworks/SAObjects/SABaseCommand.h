//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceCommand-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SABaseCommand <SAAceSerializable, SAAceCommand>
{
}

+ (id)baseCommandWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000031510
+ (id)baseCommand;	// IMP=0x00000000000314fe
- (id)encodedClassName;	// IMP=0x00000000000314f1
- (id)groupIdentifier;	// IMP=0x00000000000314dd

// Remaining properties
@property(copy, nonatomic) NSString *aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId;
@property(readonly) Class superclass;

@end
