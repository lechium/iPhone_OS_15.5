//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate
{
}

+ (id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002adfa
+ (id)guideUpdate;	// IMP=0x000000000002ade8
- (_Bool)mutatingCommand;	// IMP=0x000000000002ae94
- (_Bool)requiresResponse;	// IMP=0x000000000002ae8c
@property(retain, nonatomic) SAGuidanceSuggestedUtterances *suggestedUtterances;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSNumber *guideTag;
@property(retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
- (id)encodedClassName;	// IMP=0x000000000002addb
- (id)groupIdentifier;	// IMP=0x000000000002adc7

@end

