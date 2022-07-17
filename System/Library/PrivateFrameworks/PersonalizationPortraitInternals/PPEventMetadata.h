//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying>
{
    unsigned long long _ocnt_precomputedHash;	// 8 = 0x8
    _Bool _shouldConsiderAlarms;	// 16 = 0x10
    NSDictionary *_titlesAndParticipants;	// 24 = 0x18
    double _earliestStartTime;	// 32 = 0x20
}

+ (id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(_Bool)arg3;	// IMP=0x0000000000149a56
- (void).cxx_destruct;	// IMP=0x0000000000149940
@property(readonly, nonatomic) _Bool shouldConsiderAlarms; // @synthesize shouldConsiderAlarms=_shouldConsiderAlarms;
@property(readonly, nonatomic) double earliestStartTime; // @synthesize earliestStartTime=_earliestStartTime;
@property(readonly, nonatomic) NSDictionary *titlesAndParticipants; // @synthesize titlesAndParticipants=_titlesAndParticipants;
- (id)init;	// IMP=0x000000000014991c
- (unsigned long long)hash;	// IMP=0x0000000000149912
- (unsigned long long)_hash;	// IMP=0x00000000001498be
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000149856
- (_Bool)isEqualToEventMetadata:(id)arg1;	// IMP=0x0000000000149756
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000149700
- (id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(_Bool)arg3;	// IMP=0x00000000001495ee

@end
