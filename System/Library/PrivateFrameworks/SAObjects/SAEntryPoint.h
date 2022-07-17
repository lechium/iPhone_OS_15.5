//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAEntryPoint <SAAceSerializable, SAAceComparable>
{
}

+ (id)entryPointWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000034cb7
+ (id)entryPoint;	// IMP=0x0000000000034ca5
@property(copy, nonatomic) NSNumber *longitude;
@property(copy, nonatomic) NSNumber *latitude;
- (id)encodedClassName;	// IMP=0x0000000000034c98
- (id)groupIdentifier;	// IMP=0x0000000000034c84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
