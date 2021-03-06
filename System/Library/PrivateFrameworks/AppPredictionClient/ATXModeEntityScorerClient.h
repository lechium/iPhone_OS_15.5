//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXModeEntityScorerInterface-Protocol.h>

@class NSXPCConnection;

@interface ATXModeEntityScorerClient : NSObject <ATXModeEntityScorerInterface>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004ac02
- (void)assignModeEntityScores:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2 entityIdentifier:(id)arg3 score:(double)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000004a948
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a6a0
- (void)rankedContactsForNotificationsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a303
- (void)rankedAppsForNotificationsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049f66
- (void)rankedNotificationsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049bc9
- (void)scoreNotifications:(id)arg1 mode:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049832
- (void)rankedWidgetsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004939f
- (void)scoreWidgets:(id)arg1 mode:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049008
- (void)rankedAppsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048b75
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000487de
- (void)rankedContactsForMode:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004834b
- (void)scoreContacts:(id)arg1 mode:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047fb4
- (void)dealloc;	// IMP=0x0000000000047f72
- (id)init;	// IMP=0x0000000000047401

@end

