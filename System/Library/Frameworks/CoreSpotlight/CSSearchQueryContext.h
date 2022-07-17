//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_fetchAttributes;	// 8 = 0x8
    unsigned short _flags;	// 16 = 0x10
    int _rankingType;	// 20 = 0x14
    unsigned int _completionOptions;	// 24 = 0x18
    unsigned int _qos;	// 28 = 0x1c
    NSString *_clientBundleID;	// 32 = 0x20
    NSArray *_protectionClasses;	// 40 = 0x28
    NSArray *_bundleIDs;	// 48 = 0x30
    NSArray *_rankingQueries;	// 56 = 0x38
    NSArray *_preferredLanguages;	// 64 = 0x40
    NSString *_keyboardLanguage;	// 72 = 0x48
    NSArray *_markedTextArray;	// 80 = 0x50
    NSArray *_disableBundles;	// 88 = 0x58
    NSString *_userQuery;	// 96 = 0x60
    NSArray *_filterQueries;	// 104 = 0x68
    NSString *_filterQuery;	// 112 = 0x70
    long long _strongRankingQueryCount;	// 120 = 0x78
    long long _dominantRankingQueryCount;	// 128 = 0x80
    long long _dominatedRankingQueryCount;	// 136 = 0x88
    long long _shortcutBit;	// 144 = 0x90
    long long _highMatchBit;	// 152 = 0x98
    long long _lowMatchBit;	// 160 = 0xa0
    long long _highRecencyBit;	// 168 = 0xa8
    long long _lowRecencyBit;	// 176 = 0xb0
    long long _maxCount;	// 184 = 0xb8
    long long _minCount;	// 192 = 0xc0
    long long _completionResultCount;	// 200 = 0xc8
    long long _queryID;	// 208 = 0xd0
    double _minL2Score;	// 216 = 0xd8
    double _maxAge;	// 224 = 0xe0
    NSString *_completionString;	// 232 = 0xe8
    NSArray *_completionAttributes;	// 240 = 0xf0
    NSArray *_completionWeights;	// 248 = 0xf8
    double _currentTime;	// 256 = 0x100
    NSArray *_mountPoints;	// 264 = 0x108
    NSArray *_scopes;	// 272 = 0x110
    NSString *_reason;	// 280 = 0x118
    MISSING_TYPE *_fuzzyMask;	// 288 = 0x120
    MISSING_TYPE *_fuzzyMatch;	// 304 = 0x130
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000041417
- (void).cxx_destruct;	// IMP=0x0000000000044c3a
@property(nonatomic) unsigned short flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(retain, nonatomic) NSArray *mountPoints; // @synthesize mountPoints=_mountPoints;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(nonatomic) unsigned int completionOptions; // @synthesize completionOptions=_completionOptions;
@property(retain, nonatomic) NSArray *completionWeights; // @synthesize completionWeights=_completionWeights;
@property(retain, nonatomic) NSArray *completionAttributes; // @synthesize completionAttributes=_completionAttributes;
@property(retain, nonatomic) NSString *completionString; // @synthesize completionString=_completionString;
@property(nonatomic) MISSING_TYPE *fuzzyMatch; // @synthesize fuzzyMatch=_fuzzyMatch;
@property(nonatomic) MISSING_TYPE *fuzzyMask; // @synthesize fuzzyMask=_fuzzyMask;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) double minL2Score; // @synthesize minL2Score=_minL2Score;
@property(nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(nonatomic) long long completionResultCount; // @synthesize completionResultCount=_completionResultCount;
@property(nonatomic) long long minCount; // @synthesize minCount=_minCount;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) long long lowRecencyBit; // @synthesize lowRecencyBit=_lowRecencyBit;
@property(nonatomic) long long highRecencyBit; // @synthesize highRecencyBit=_highRecencyBit;
@property(nonatomic) long long lowMatchBit; // @synthesize lowMatchBit=_lowMatchBit;
@property(nonatomic) long long highMatchBit; // @synthesize highMatchBit=_highMatchBit;
@property(nonatomic) long long shortcutBit; // @synthesize shortcutBit=_shortcutBit;
@property(nonatomic) long long dominatedRankingQueryCount; // @synthesize dominatedRankingQueryCount=_dominatedRankingQueryCount;
@property(nonatomic) long long dominantRankingQueryCount; // @synthesize dominantRankingQueryCount=_dominantRankingQueryCount;
@property(nonatomic) long long strongRankingQueryCount; // @synthesize strongRankingQueryCount=_strongRankingQueryCount;
@property(retain, nonatomic) NSString *filterQuery; // @synthesize filterQuery=_filterQuery;
@property(copy, nonatomic) NSArray *filterQueries; // @synthesize filterQueries=_filterQueries;
@property(nonatomic) int rankingType; // @synthesize rankingType=_rankingType;
@property(retain, nonatomic) NSString *userQuery; // @synthesize userQuery=_userQuery;
@property(retain, nonatomic) NSArray *disableBundles; // @synthesize disableBundles=_disableBundles;
@property(retain, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(retain, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property(retain, nonatomic) NSArray *protectionClasses; // @synthesize protectionClasses=_protectionClasses;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (id)debugDescription;	// IMP=0x000000000004420c
- (id)description;	// IMP=0x00000000000441aa
@property(copy, nonatomic) NSDictionary *options;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042ee5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000425c7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000420cd
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000041a36
- (id)xpc_dictionary;	// IMP=0x00000000000415a0
@property(nonatomic) _Bool includeUserActivities;
@property(nonatomic) _Bool playback;
@property(nonatomic) _Bool fsOnly;
@property(nonatomic) _Bool parseUserQuery;
@property(nonatomic) _Bool disableBlockingOnIndex;
@property(nonatomic) _Bool lowPriority;
@property(nonatomic) _Bool attribute;
@property(nonatomic) _Bool counting;
@property(nonatomic) _Bool live;
@property(nonatomic) _Bool grouped;
@property(nonatomic) _Bool internal;
@property(retain, nonatomic) NSArray *fetchAttributes;
- (id)initWithQoS:(unsigned int)arg1;	// IMP=0x000000000004135c
- (id)init;	// IMP=0x00000000000412ed

@end
