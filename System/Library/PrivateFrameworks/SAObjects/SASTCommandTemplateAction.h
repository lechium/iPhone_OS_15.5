//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASTTemplateAction-Protocol.h>

@class NSArray, NSString;

@interface SASTCommandTemplateAction <SASTTemplateAction>
{
}

+ (id)commandTemplateActionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001b9a4
+ (id)commandTemplateAction;	// IMP=0x000000000001b992
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;	// IMP=0x000000000001b985
- (id)groupIdentifier;	// IMP=0x000000000001b971

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
