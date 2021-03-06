//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TLAlert;

@interface SBUISound : NSObject
{
    long long _soundType;	// 8 = 0x8
    unsigned int _systemSoundID;	// 16 = 0x10
    unsigned int _resolvedSystemSoundID;	// 20 = 0x14
    unsigned long long _soundBehavior;	// 24 = 0x18
    NSDictionary *_vibrationPattern;	// 32 = 0x20
    TLAlert *_toneAlert;	// 40 = 0x28
    CDUnknownBlockType _completionBlock;	// 48 = 0x30
    NSString *_songPath;	// 56 = 0x38
    long long _eventType;	// 64 = 0x40
}

+ (id)soundWithFeedbackEventType:(long long)arg1;	// IMP=0x000000000001683f
- (void).cxx_destruct;	// IMP=0x0000000000016d33
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *songPath; // @synthesize songPath=_songPath;
@property(retain, nonatomic) TLAlert *toneAlert; // @synthesize toneAlert=_toneAlert;
@property(retain, nonatomic) NSDictionary *vibrationPattern; // @synthesize vibrationPattern=_vibrationPattern;
@property(nonatomic) unsigned long long soundBehavior; // @synthesize soundBehavior=_soundBehavior;
@property(nonatomic, setter=_setResolvedSoundID:) unsigned int _resolvedSystemSoundID; // @synthesize _resolvedSystemSoundID;
@property(nonatomic) unsigned int systemSoundID; // @synthesize systemSoundID=_systemSoundID;
@property(nonatomic) long long soundType; // @synthesize soundType=_soundType;
- (id)description;	// IMP=0x0000000000016a13
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000169d9
- (CDUnknownBlockType)_completionBlock;	// IMP=0x00000000000169bb
- (void)stop;	// IMP=0x0000000000016960
- (_Bool)playInEvironments:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000168d7
- (_Bool)isPlaying;	// IMP=0x0000000000016875
- (id)initWithFeedbackEventType:(long long)arg1;	// IMP=0x00000000000167cf
- (id)initWithToneAlert:(id)arg1;	// IMP=0x000000000001674d
- (id)initWithToneAlertConfiguration:(id)arg1;	// IMP=0x00000000000166f3
- (id)initWithToneAlert:(long long)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;	// IMP=0x000000000001660d
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;	// IMP=0x0000000000016549
- (id)initWithSystemSoundID:(unsigned int)arg1 behavior:(unsigned long long)arg2 vibrationPattern:(id)arg3;	// IMP=0x000000000001649c

@end

