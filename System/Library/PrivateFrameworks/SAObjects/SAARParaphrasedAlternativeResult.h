//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedAlternativeResult
{
}

+ (id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000016469
+ (id)paraphrasedAlternativeResult;	// IMP=0x0000000000016457
@property(copy, nonatomic) NSString *paraphrasedIntent;
@property(copy, nonatomic) NSString *displayText;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;	// IMP=0x000000000001644a
- (id)groupIdentifier;	// IMP=0x0000000000016436

@end

