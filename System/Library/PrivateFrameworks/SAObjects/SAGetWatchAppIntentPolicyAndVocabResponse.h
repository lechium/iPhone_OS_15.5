//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSDictionary, NSString;

@interface SAGetWatchAppIntentPolicyAndVocabResponse <SAServerBoundCommand>
{
}

+ (id)getWatchAppIntentPolicyAndVocabResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000246cd
+ (id)getWatchAppIntentPolicyAndVocabResponse;	// IMP=0x00000000000246bb
- (_Bool)requiresResponse;	// IMP=0x0000000000024715
@property(copy, nonatomic) NSDictionary *aceAppBundleInfos;
- (id)encodedClassName;	// IMP=0x00000000000246ae
- (id)groupIdentifier;	// IMP=0x000000000002469a

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
