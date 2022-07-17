//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKCloudPlayer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface GKGameSession : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    GKCloudPlayer *_owner;	// 24 = 0x18
    NSArray *_players;	// 32 = 0x20
    NSDate *_lastModifiedDate;	// 40 = 0x28
    GKCloudPlayer *_lastModifiedPlayer;	// 48 = 0x30
    long long _maxNumberOfConnectedPlayers;	// 56 = 0x38
    NSString *_serverChangeTag;	// 64 = 0x40
    NSMutableDictionary *_playerStates;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000edea9
+ (void)removeSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eddff
+ (void)loadSessionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000edd55
+ (void)loadSessionsInContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000edcab
+ (void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000edbd1
+ (void)postSession:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x000000000001b1f6
+ (void)postSession:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x000000000001afa8
+ (void)postSession:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x000000000001ad5a
+ (void)postSession:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x000000000001ab2b
+ (void)postSession:(id)arg1 didRemovePlayer:(id)arg2;	// IMP=0x000000000001a90b
+ (void)postSession:(id)arg1 didAddPlayer:(id)arg2;	// IMP=0x000000000001a6eb
+ (void)removeEventListener:(id)arg1;	// IMP=0x000000000001a605
+ (void)addEventListener:(id)arg1;	// IMP=0x000000000001a507
+ (id)gk_sessionEventListeners;	// IMP=0x000000000001a4b2
+ (void)getSessionsForZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f0455
+ (void)getZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f03c1
- (void).cxx_destruct;	// IMP=0x00000000000f0357
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
@property(retain, nonatomic) NSString *serverChangeTag; // @synthesize serverChangeTag=_serverChangeTag;
@property(nonatomic) long long maxNumberOfConnectedPlayers; // @synthesize maxNumberOfConnectedPlayers=_maxNumberOfConnectedPlayers;
@property(retain, nonatomic) GKCloudPlayer *lastModifiedPlayer; // @synthesize lastModifiedPlayer=_lastModifiedPlayer;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(retain, nonatomic) GKCloudPlayer *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *badgedPlayers;
- (void)clearBadgeForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000efe63
- (void)sendMessageWithLocalizedFormatKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 toPlayers:(id)arg4 badgePlayers:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000efc2c
- (void)sendData:(id)arg1 withTransportType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000efb3c
- (id)playersWithConnectionState:(long long)arg1;	// IMP=0x00000000000ef8cb
- (void)setConnectionState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ef75a
- (void)saveData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ef587
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef3f9
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ef33f
- (void)updateWithSession:(id)arg1;	// IMP=0x00000000000ef161
- (id)description;	// IMP=0x00000000000ef061
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x00000000000ee4d6
- (id)descriptionSubstitutionMap;	// IMP=0x00000000000ee4c9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ee296
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000edeb1

@end
