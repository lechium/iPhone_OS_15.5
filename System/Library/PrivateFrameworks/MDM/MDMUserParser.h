//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDMUserParser
{
}

- (void)_sendAnalyticsMDMCommandEventWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0000000000002d4f
- (void)_performQuery:(id)arg1 withResultDictionary:(id)arg2;	// IMP=0x0000000000002c53
- (id)_allowedDeviceQueriesForAccessRights:(int)arg1;	// IMP=0x0000000000002c3a
- (id)_restrictions:(id)arg1;	// IMP=0x0000000000002c23
- (id)_removeProfile:(id)arg1;	// IMP=0x0000000000002b8c
- (id)_installProfile:(id)arg1 accessRights:(int)arg2;	// IMP=0x0000000000002b74
- (id)_profileList:(id)arg1;	// IMP=0x0000000000002b5d
- (id)_allCommands;	// IMP=0x0000000000002a36

@end

