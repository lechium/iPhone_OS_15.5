//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface SAAnswerSpeakableAnswer <SAAceSerializable>
{
}

+ (id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003d001
+ (id)speakableAnswer;	// IMP=0x000000000003cfef
@property(copy, nonatomic) NSString *templateName;
@property(copy, nonatomic) NSDictionary *parameters;
- (id)encodedClassName;	// IMP=0x000000000003cfe2
- (id)groupIdentifier;	// IMP=0x000000000003cfce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

