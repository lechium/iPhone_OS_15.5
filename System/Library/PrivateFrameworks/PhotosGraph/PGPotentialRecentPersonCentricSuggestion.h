//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject
{
    NSString *_personLocalIdentifier;	// 8 = 0x8
    NSArray *_assets;	// 16 = 0x10
    NSDate *_notSeenSinceDate;	// 24 = 0x18
    unsigned long long _relationshipScore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000346e8e
@property(readonly, nonatomic) unsigned long long relationshipScore; // @synthesize relationshipScore=_relationshipScore;
@property(readonly, nonatomic) NSDate *notSeenSinceDate; // @synthesize notSeenSinceDate=_notSeenSinceDate;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3;	// IMP=0x0000000000346daf
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 relationshipScore:(unsigned long long)arg3;	// IMP=0x0000000000346d0a

@end
