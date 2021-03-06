//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ATXActivity : NSObject
{
    _Bool _shouldSuggestTriggers;	// 8 = 0x8
    _Bool _allowsSmartEntry;	// 9 = 0x9
    NSString *_modeUUID;	// 16 = 0x10
    unsigned long long _activityType;	// 24 = 0x18
    unsigned long long _location;	// 32 = 0x20
    NSArray *_triggers;	// 40 = 0x28
    NSString *_suggestionUUID;	// 48 = 0x30
    long long _origin;	// 56 = 0x38
    NSString *_originBundleId;	// 64 = 0x40
    NSString *_originAnchorType;	// 72 = 0x48
    NSString *_userModeName;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a94f4
@property(readonly, copy, nonatomic) NSString *userModeName; // @synthesize userModeName=_userModeName;
@property(readonly, copy, nonatomic) NSString *originAnchorType; // @synthesize originAnchorType=_originAnchorType;
@property(readonly, copy, nonatomic) NSString *originBundleId; // @synthesize originBundleId=_originBundleId;
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) _Bool allowsSmartEntry; // @synthesize allowsSmartEntry=_allowsSmartEntry;
@property(readonly, copy, nonatomic) NSString *suggestionUUID; // @synthesize suggestionUUID=_suggestionUUID;
@property(readonly, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(readonly, nonatomic) _Bool shouldSuggestTriggers; // @synthesize shouldSuggestTriggers=_shouldSuggestTriggers;
@property(readonly, nonatomic) unsigned long long location; // @synthesize location=_location;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, copy, nonatomic) NSString *modeUUID; // @synthesize modeUUID=_modeUUID;
- (_Bool)isEqualToATXActivity:(id)arg1;	// IMP=0x00000000000a9225
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a91bd
- (unsigned long long)hash;	// IMP=0x00000000000a90f0
- (id)_heuristicSuggestionReasonLocalizationKey;	// IMP=0x00000000000a8ed6
- (id)_anchorSuggestionReasonLocalizationKey;	// IMP=0x00000000000a8ce7
- (id)_suggestionReasonLocalizationKey;	// IMP=0x00000000000a8c4e
@property(readonly, nonatomic) NSString *localizedSuggestionReason;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithModeUUID:(id)arg1 userModeName:(id)arg2 activityType:(unsigned long long)arg3 origin:(long long)arg4 originBundleId:(id)arg5 originAnchorType:(id)arg6 allowsSmartEntry:(_Bool)arg7 suggestionUUID:(id)arg8 triggers:(id)arg9 location:(unsigned long long)arg10 shouldSuggestTriggers:(_Bool)arg11;	// IMP=0x00000000000a893f
- (id)initWithBMInferredModeEvent:(id)arg1;	// IMP=0x00000000000a8776
- (id)init;	// IMP=0x00000000000a8770

@end

