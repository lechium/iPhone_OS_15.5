//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString;

@interface SAResultSelected <SAServerBoundCommand>
{
}

+ (id)resultSelectedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002d274
+ (id)resultSelected;	// IMP=0x000000000002d262
- (_Bool)requiresResponse;	// IMP=0x000000000002d2c2
@property(copy, nonatomic) NSString *resultId;
@property(copy, nonatomic) NSNumber *processedAudioDuration;
- (id)encodedClassName;	// IMP=0x000000000002d255
- (id)groupIdentifier;	// IMP=0x000000000002d241

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
