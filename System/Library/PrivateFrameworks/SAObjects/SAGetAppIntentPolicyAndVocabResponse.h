//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAGetAppIntentPolicyAndVocabResponse <SAServerBoundCommand>
{
}

+ (id)getAppIntentPolicyAndVocabResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003cb62
+ (id)getAppIntentPolicyAndVocabResponse;	// IMP=0x000000000003cb50
- (_Bool)requiresResponse;	// IMP=0x000000000003cbaa
@property(copy, nonatomic) NSDictionary *aceAppBundleInfos;
- (id)encodedClassName;	// IMP=0x000000000003cb43
- (id)groupIdentifier;	// IMP=0x000000000003cb2f

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

