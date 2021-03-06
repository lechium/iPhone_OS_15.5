//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSString;

@interface SASCancelSpeech <SAServerBoundCommand>
{
}

+ (id)cancelSpeechWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000072d4
+ (id)cancelSpeech;	// IMP=0x00000000000072c2
- (_Bool)requiresResponse;	// IMP=0x00000000000072de
- (id)encodedClassName;	// IMP=0x00000000000072b5
- (id)groupIdentifier;	// IMP=0x00000000000072a1

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

