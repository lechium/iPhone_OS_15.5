//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>
#import <SAObjects/SAUSMarkup-Protocol.h>

@class NSString;

@interface SAUSTextMarkup <SAUSMarkup, SAAceSerializable>
{
}

+ (id)textMarkupWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000f92b
+ (id)textMarkup;	// IMP=0x000000000000f919
@property(copy, nonatomic) NSString *text;
@property(nonatomic) _Bool emphasized;
- (id)encodedClassName;	// IMP=0x000000000000f90c
- (id)groupIdentifier;	// IMP=0x000000000000f8f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

