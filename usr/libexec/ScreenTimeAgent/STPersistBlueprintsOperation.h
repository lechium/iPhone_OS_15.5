//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STResult, STUnifiedTransportPayload;

@interface STPersistBlueprintsOperation
{
    STUnifiedTransportPayload *_blueprintPayload;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000055d4a
@property(readonly, copy, nonatomic) STUnifiedTransportPayload *blueprintPayload; // @synthesize blueprintPayload=_blueprintPayload;
- (id)_updateBlueprintsFromDictionaries:(id)arg1 forUser:(id)arg2;	// IMP=0x0010000000055353
- (void)main;	// IMP=0x0010000000054959
- (id)initWithBlueprintPayload:(id)arg1 persistenceController:(id)arg2;	// IMP=0x00100000000548d5

// Remaining properties
@property(readonly) __weak STResult *resultObject; // @dynamic resultObject;

@end
