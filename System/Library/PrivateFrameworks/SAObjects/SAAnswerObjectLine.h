//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, NSURL, SAUIImageResource;

@interface SAAnswerObjectLine <SAAceSerializable>
{
}

+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001e9ca
+ (id)objectLine;	// IMP=0x000000000001e9b8
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) SAUIImageResource *imageResource;
@property(copy, nonatomic) NSNumber *imageInverted;
@property(copy, nonatomic) NSURL *image;
- (id)encodedClassName;	// IMP=0x000000000001e9ab
- (id)groupIdentifier;	// IMP=0x000000000001e997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
