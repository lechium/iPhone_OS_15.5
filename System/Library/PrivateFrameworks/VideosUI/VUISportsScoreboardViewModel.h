//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardViewModel : NSObject
{
    _Bool _showScoreboard;	// 8 = 0x8
    NSString *_canonicalId;	// 16 = 0x10
    NSDictionary *_leagueContext;	// 24 = 0x18
    NSArray *_scores;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000280e4d
@property(readonly, nonatomic) _Bool showScoreboard; // @synthesize showScoreboard=_showScoreboard;
@property(readonly, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(readonly, nonatomic) NSDictionary *leagueContext; // @synthesize leagueContext=_leagueContext;
@property(readonly, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
- (id)jsContextDictionary;	// IMP=0x0000000000280d7e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000280c64

@end
