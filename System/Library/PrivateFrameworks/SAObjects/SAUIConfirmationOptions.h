//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAUIConfirmationOptions <SAAceSerializable>
{
}

+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000926b
+ (id)confirmationOptions;	// IMP=0x0000000000009259
@property(copy, nonatomic) NSString *denyText;
@property(copy, nonatomic) NSArray *denyCommands;
@property(copy, nonatomic) NSString *confirmText;
@property(copy, nonatomic) NSArray *confirmCommands;
@property(copy, nonatomic) NSString *cancelTrigger;
@property(copy, nonatomic) NSArray *allConfirmationOptions;
- (id)encodedClassName;	// IMP=0x000000000000924c
- (id)groupIdentifier;	// IMP=0x0000000000009238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

