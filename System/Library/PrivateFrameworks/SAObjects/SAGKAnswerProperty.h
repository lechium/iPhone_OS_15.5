//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SAUIAppPunchOut, SAUIDecoratedText;
@protocol SAClientBoundCommand;

@interface SAGKAnswerProperty <SAAceSerializable>
{
}

+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003eabf
+ (id)answerProperty;	// IMP=0x000000000003eaad
@property(copy, nonatomic) NSString *valueAnnotation;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSNumber *selected;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValueAnnotation;
@property(retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;	// IMP=0x000000000003eaa0
- (id)groupIdentifier;	// IMP=0x000000000003ea8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

