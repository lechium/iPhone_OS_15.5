//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAClientStateServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SASetAlertContext <SAClientStateServerBoundCommand>
{
}

+ (id)setAlertContextWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000037bf7
+ (id)setAlertContext;	// IMP=0x0000000000037be5
- (_Bool)requiresResponse;	// IMP=0x0000000000037c3f
@property(copy, nonatomic) NSArray *context;
- (id)encodedClassName;	// IMP=0x0000000000037bd8
- (id)groupIdentifier;	// IMP=0x0000000000037bc4

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
