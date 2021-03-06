//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXIssueCoverComponent-Protocol.h>

@class NSString, SXComponentAnimation, SXComponentClassification, SXComponentConditions, SXJSONArray, SXJSONDictionary;
@protocol SXComponentAnchor;

@interface SXIssueCoverComponent <SXIssueCoverComponent>
{
}

+ (id)typeString;	// IMP=0x00000000000ccc5f
- (_Bool)videoPlaybackEnabledWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x00000000000ccc6c

// Remaining properties
@property(readonly, nonatomic) SXJSONArray *additions;
@property(readonly, nonatomic) SXJSONDictionary *analytics;
@property(readonly, nonatomic) id <SXComponentAnchor> anchor;
@property(readonly, nonatomic) SXComponentAnimation *animation;
@property(readonly, nonatomic) SXJSONArray *behaviors;
@property(readonly, nonatomic) SXComponentClassification *classification;
@property(readonly, nonatomic) SXJSONArray *conditional;
@property(readonly, nonatomic) SXComponentConditions *conditions;
@property(readonly, nonatomic) unsigned long long contentRelevance;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *issueIdentifier; // @dynamic issueIdentifier;
@property(readonly, nonatomic) NSString *layout;
@property(readonly, nonatomic) int role;
@property(readonly, nonatomic) NSString *style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool videoPlaybackEnabled; // @dynamic videoPlaybackEnabled;

@end

